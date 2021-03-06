#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct TVShows {
    char name[30];
    char creator[20];
    char actor[50];
    int year_start;
    int year_end;
    int seasons;
};

void printShow(struct TVShows *show);

int main() {
    struct TVShows ozark;
    strcpy(ozark.name, "Ozark");
    strcpy(ozark.creator, "Bill Dubuque");
    strcpy(ozark.actor, "Jason Bateman");
    ozark.year_start=2017;
    ozark.year_end=2021;
    ozark.seasons=4;

    printShow(&ozark);

    return 0;
}

void printShow(struct TVShows *show) {
    printf("Name: %s\n", show->name);
    printf("Creator: %s\n", show->creator);
    printf("Creator: %s\n", show->actor);    
    printf("Release year: %d\n", show->year_start);
    printf("Final year: %d\n", show->year_end);
    printf("Number of seasons: %d\n", show->seasons);
}