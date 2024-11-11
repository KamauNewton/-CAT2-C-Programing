#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 25
#define DEPARTMENT_LENGTH 20
#define EMAIL_LENGTH 50

typedef struct {
    char name[NAME_LENGTH];
    int id;
    char department[DEPARTMENT_LENGTH];
    float salary;
    char email[EMAIL_LENGTH];
} Employee;

int main() {
    // Define a structure named employee
    Employee emp;

    // Initialize the employee variable with the given data
    strcpy(emp.name, "John Doe");
    emp.id = 12345;
    strcpy(emp.department, "Human Resources");
    emp.salary = 55000.50;
    strcpy(emp.email, "john.doe@company.com");

    // Print the values of the fields
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}