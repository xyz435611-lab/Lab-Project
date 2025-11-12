<<<<<<< HEAD
#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include "menu/menu.h"

typedef struct
{
    char name[100];
    unsigned int roll;
} Student;

void addStudent(Student *student);
void displayStudent(Student *student);
void deleteStudent(Student *student);
AppState manageStudents();

#endif // STUDENT_H
=======
#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include "menu/menu.h"

typedef struct
{
    char name[100];
    unsigned int roll;
} Student;

void addStudent(Student *student);
void displayStudent(Student *student);
void deleteStudent(Student *student);
AppState manageStudents();

#endif // STUDENT_H
>>>>>>> f0fad5a5b45e146e47a56aeb1dc8dc9f2c1816aa
