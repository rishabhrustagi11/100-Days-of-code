#include <stdio.h>

struct student{
    char name[50];
    int roll;
    float marks; 
};

int main(){
    struct student s;

    printf("Enter Student Name : ");
    scanf("%49s", s.name);

    printf("Enter Student Roll no. : ");
    scanf("%d", &s.roll);

    printf("Enter Student Marks : ");
    scanf("%f", &s.marks);

    printf("Name : %s\nRoll no. : %d\nMarks : %f",
           s.name, s.roll, s.marks);

    return 0;
}
