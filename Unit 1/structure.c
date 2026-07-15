#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student {
    int rollno;
    char name[20];
};

void main() {
    struct student s1;

    printf("\n Enter Roll Number : ");
    scanf("%d", &s1.rollno);

    fflush(stdin);

    printf("\n Enter Name : ");
    gets(s1.name);

    printf("\n Student Data is as follows ");
    printf("\n ***************************");

    printf("\n Roll Number is : %d", s1.rollno);
    printf("\n Name is : %s", s1.name);

    getch();

}
