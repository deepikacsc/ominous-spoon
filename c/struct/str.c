#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    char name[20];
    char house[20];
}student;
int main(void)
{
    student *s=malloc(sizeof(student));
    printf("Name: ");
    scanf("%s", s->name);
    printf("House: ");
    scanf("%s", s->house);
    printf("%s is in %s\n", s->name,s->house);
}
