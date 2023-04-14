
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char name[50];
    char surname[50];
    int birth_year;
} humen;


int compareByYear(const void *a, const void *b) {
    humen *h1 = (humen *)a;
    humen *h2 = (humen *)b;
    return h1->birth_year - h2->birth_year;
}

int main() {

    FILE *f = fopen("input.txt", "r");
    if (f == NULL) {
        printf("Error opening file\n");
        return 0;
    }


    int size = 0;
    while (!feof(f)) {
        char c = fgetc(f);
        if (c == '\n') {
            size++;
        }
    }
    rewind(f);


    humen arr1[size];
    humen arr2[size];


    for (int i = 0; i < size; i++) {
        fscanf(f, "%s %s %d", arr1[i].name, arr1[i].surname, &arr1[i].birth_year);
    }


    memcpy(arr2, arr1, size * sizeof(humen));


    qsort(arr2, size, sizeof(humen), compareByYear);


    for (int i = 0; i < size; i++) {
        printf("%s %s %d\n", arr2[i].name, arr2[i].surname, arr2[i].birth_year);
    }


    fclose(f);

    return 0;
}
