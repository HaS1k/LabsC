#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main() {


    setlocale(LC_ALL, "Rus");
    FILE *inputf = fopen("input.txt", "r");
    FILE *outputf = fopen("output.txt", "w");

    if (inputf == NULL) {
        printf("ошибка");
        exit(1);
    }

    char line[1000];
    int year;

    while (fgets(line, sizeof(line), inputf)) {
        char *surname, *name, *middlename;
        surname = strtok(line, " ");
        name = strtok(NULL, " ");
        middlename = strtok(NULL, " ");
        year = atoi(strtok(NULL, " "));
        if (year > 1980) {
            fprintf(outputf, "%s %s %s %d\n", surname, name, middlename, year);
        }
    }

    fclose(inputf);
    fclose(outputf);
    return 0;
}
