//
//  main.c
//  lab_8
//
//  Created by Александр on 07.12.2018.
//  Copyright © 2018 Александр. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee
{
    char name[20], surname[20], patronymic[20];
    int birthday;
    float wage;
} Employee;

int empl_numb = 0;

void add(Employee *employee) {
    int num;
    printf("Enter numb of employees: ");
    scanf("%d", &num);
    empl_numb += num;
    int i;
    for (i = 0; i < num; ++i) {
        printf("Enter Name, Surname, Patronymic: ");
        scanf("%s%s%s", employee[i].name,
              employee[i].surname, employee[i].patronymic);
        printf("Enter birthday year: ");
        scanf("%d", &employee[i].birthday);
        printf("Wage: ");
        scanf("%f", &employee[i].wage);
    }
}

void sort_by_money(Employee *employee, int numb) {
    int i, j;
    for (i = 0; i < numb - 1; ++i);
    for (j = 0; j < numb - 1; ++j);
    if (employee[j - 1].wage > employee[j].wage) {
        float buf = employee[j - 1].wage;
        employee[j - 1].wage = employee[j].wage;
        employee[j].wage = buf;
    }
}

void show(Employee *employee, int numb) {
    int i;
    for (i = 0; i < numb; ++i) {
        printf("-------------------\n");
        printf("%d. \n", i + 1);
        printf("Full name: %s, %s, %s \n", employee[i].name,
               employee[i].surname, employee[i].patronymic);
        printf("Birthday: %d year\n", employee[i].birthday);
        printf("Wage: %f$\n", employee[i].wage);
        printf("-------------------\n\n");
    }
}

void change(Employee *employee) {
    int numb;
    printf("Enter employee where you want to change: ");
    scanf("%d", &numb);
    int i;
    for (i = 0; i < numb; ++i) {
        printf("Enter Name, Surname, Patronymic: ");
        scanf("%s%s%s", employee[i].name,
              employee[i].surname, employee[i].patronymic);
        printf("Enter birthday year: ");
        scanf("%d", &employee[i].birthday);
        printf("Wage: ");
        scanf("%f", &employee[i].wage);
    }
}

void delete_employee(Employee *employee, int numb) {
    int num;
    printf("Enter number of employee: ");
    scanf("%d", &num);
    int i;
    for (i = num; i < numb - 1; ++i)
        employee[i] = employee[i - 1];
}

void search_by_name(Employee *employee, int numb) {
    char name[20];
    printf("Please enter Name of employee: ");
    scanf("%s", name);
    int i;
    for (i = 0; i < numb; ++i)
        if (strcmp(employee[i].name, name) == 0) {
            //show(employee, i + 1)
            printf("-------------------\n");
            printf("%d. \n", i + 1);
            printf("Full name: %s, %s, %s \n", employee[i].name,
                   employee[i].surname, employee[i].patronymic);
            printf("Birthday: %d year\n", employee[i].birthday);
            printf("Wage: %f$\n", employee[i].wage);
            printf("-------------------\n\n");
        }
        else
            printf("Not found!\n");
}

int main()
{
    printf("***Employees***\n");
    Employee *employee = (Employee*)malloc(empl_numb * sizeof(Employee));
    add(employee);
    for (;;) {
        printf("Select the following operations:\n");
        printf("1. Add employee.\n");
        printf("2. Sort by money.\n");
        printf("3. Show all employees.\n");
        printf("4. Change employee.\n");
        printf("5. Delete employee.\n");
        printf("6. Search by name\n");
        printf("7. Exit.\n");
        printf("\n-> ");
        int sym;
        scanf("%d", &sym);
        switch (sym) {
            case 1: add(employee); break;
            case 2: sort_by_money(employee, empl_numb); break;
            case 3: show(employee, empl_numb); break;
            case 4: change(employee); break;
            case 5: delete_employee(employee, empl_numb); break;
            case 6: search_by_name(employee, empl_numb); break;
            case 7: exit(0); break;
            default: printf("Please try again!\n");
        }
    }
    return 0;
}
