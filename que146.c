#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int emp_id;
    char name[50];
    float salary;
    struct Date joining_date;   
};

int main() {
    struct Employee emp;
    
    printf("Enter Employee ID: ");
    scanf("%d", &emp.emp_id);
    
    printf("Enter Employee Name: ");
    scanf(" %49s", emp.name);
    
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);
    
    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joining_date.day, 
                     &emp.joining_date.month, 
                     &emp.joining_date.year);
    printf("\n=== Employee Details ===\n");
    printf("ID: %d\n", emp.emp_id);
    printf("Name: %s\n", emp.name);
    printf("Salary: Rs. %.2f\n", emp.salary);
    printf("Joining Date: %02d/%02d/%d\n", 
           emp.joining_date.day, 
           emp.joining_date.month, 
           emp.joining_date.year);
    
    return 0;
}
