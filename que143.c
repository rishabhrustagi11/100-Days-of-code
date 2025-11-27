#include <stdio.h>

struct student{
    char name[50];
    int roll;
    float marks; 
};

int main(){
struct student s[5];
for(int i=0;i<5;i++){
    printf("Enter %dst Student Name : ",i+1);
    scanf("%49s", s[i].name);

    printf("Enter %dst Student Roll no. : ",i+1);
    scanf("%d", &s[i].roll);

    printf("Enter %dst Student Marks : ",i+1);
    scanf("%f", &s[i].marks);}

for(int j=0;j<5;j++){
    printf("Name : %s\nRoll no. : %d\nMarks : %f",
           s[j].name, s[j].roll, s[j].marks);

}
}