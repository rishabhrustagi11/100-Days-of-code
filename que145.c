#include <stdio.h>

struct student {
    char name[50];
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: "); 
    scanf("%d", &n);
    
    struct student s[n];
    for(int i = 0; i < n; i++) {
        printf("Enter %dst Student Name: ", i+1);
        scanf(" %49s", s[i].name);   
        printf("Enter %dst Student Marks: ", i+1);
        scanf("%f", &s[i].marks);
    }

    float max = s[0].marks;  
    int maxindex=0; 
    for(int j = 1; j < n; j++) {   
        if(s[j].marks > max) {
            max = s[j].marks;
            maxindex=j;
        }
    }
    printf("Name : %s\nMarks : %.2f", s[maxindex].name, max);
    
    return 0;
}
