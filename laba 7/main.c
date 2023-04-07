#include <stdio.h>
#include <string.h>
#include <stdlib.h>



struct human
{
    char fname[20];
    char lname[20];
    int year;
};

void printHuman(struct human *human){

    printf("Imya=%s\n", human->fname);
    printf("familiya=%s\n", human->lname);
    printf("god rozdeniya =%d\n", human->year);
    printf("\n");
}

void inputHuman(struct human *human){
    printf("imya=\n");
    scanf("%s", human->fname);
    printf("familiya=\n");
    scanf("%s", human->lname);
    printf("god rozdeniya=\n");
    scanf("%d", &human->year);
    printf("\n");
}
int compare(const void* a, const void* b) {
    const struct human* human_a = (const struct human*) a;
    const struct human* human_b = (const struct human*) b;
    return human_a->year - human_b->year;
}

int main()
{

    struct human human1[4];
    struct human human2[4];
    for(int i = 0; i < 4; i++){
        inputHuman(&human1[i]);
        printHuman(&human1[i]);
    }

    memcpy(human2, human1,sizeof(human1));
    printf("perviy massive\n");
    printf("\n");
    for(int i = 0; i < 4; i++){
        printHuman(&human2[i]);
    }
    printf("\n");
    printHuman(&human2[0]);

    qsort(human2, sizeof(human2) / sizeof(human2[0]), sizeof(human2[0]), compare);

    printf("sortirovany massive\n");
    for(int i = 0; i < 4; i++){
        printHuman(&human2[i]);
    }

    return 0;
}

