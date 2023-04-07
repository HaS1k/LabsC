#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct {
    char name[50];
    int birth_year;
    char gender;
    float height;
} Person;

void sort_by_birth_year(Person* people, int n) {
    int i, j;
    Person temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (people[i].birth_year > people[j].birth_year) {
                temp = people[i];
                people[i] = people[j];
                people[j] = temp;
            }
        }
    }
}

void sort_by_name(Person* people, int n) {
    int i, j;
    Person temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (strcmp(people[i].name, people[j].name) > 0) {
                temp = people[i];
                people[i] = people[j];
                people[j] = temp;
            }
        }
    }
}

void sort_by_gender(Person* people, int n) {
    int i, j;
    Person temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (people[i].gender > people[j].gender) {
                temp = people[i];
                people[i] = people[j];
                people[j] = temp;
            }
        }
    }
}

void sort_by_height(Person* people, int n) {
    int i, j;
    Person temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (people[i].height > people[j].height) {
                temp = people[i];
                people[i] = people[j];
                people[j] = temp;
            }
        }
    }
}

int main() {
    int n, i, sort_choice;
    FILE* fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error open file.\n");
        return 1;
    }
    fscanf(fp, "%d", &n);
    n = 30;
    Person* people = (Person*) malloc(n * sizeof(Person));
    for (i = 0; i < n; i++) {
        fscanf(fp, "%s %d %c %f", people[i].name, &people[i].birth_year, &people[i].gender, &people[i].height);
    }
    fclose(fp);
    printf("Sortirovat po:\n1. God rozdeniya\n2. Imya\n3. Pol\n4. Rost\nEnter choice: ");
    scanf("%d", &sort_choice);
    switch (sort_choice) {
        case 1:
            sort_by_birth_year(people, n);
            printf("sortirovano po godu rozdeniya:\n");
            break;
        case 2:
            sort_by_name(people, n);
            printf("sortirovano po imeny:\n");
            break;
        case 3:
            sort_by_gender(people, n);
            printf("sortirovano po polu:\n");
            break;
        case 4:
            sort_by_height(people, n);
            printf("sortirovano po rostu:\n");
            break;
        default:
            printf("ne pravilno vvedena tsifra.\n");
            return 1;
    }
    for (i = 0; i < n; i++) {
        printf("%s %d %c %.2f\n", people[i].name, people[i].birth_year, people[i].gender, people[i].height);
    }
    free(people);
    return 0;
}












