/*
Exp 9 Task 1
Title :Design a struture student_record to contain name, roll_number,and total marks obtained. Write a program to read 5 students data from the user and then display the topper on the screen.
Name : Vaibhav Nasani 
Class :First Year
DIV :C
Roll no. :045
UIN :241P048
*/

#include <stdio.h>
struct student_record {
    char name[50];
    int roll_number;
    float marks;
} s[5];

int main() {
    int i,max,n;
    printf("Enter Data of the students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll_number = i + 1;
        printf("For roll number %d,\n", s[i].roll_number);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Total Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Topper :\n\n");

    max=s[0].marks;
       for(i=0;i<5;i++)
    {
     if(max<s[i].marks)
     {
       max=s[i].marks;
       n=i;
     }
    }


    // displaying topper on the screen
    for (i = 0; i <1;i++) {
        printf("\nRoll number: %d\n", i);
        printf("Name: ");
        puts(s[n].name);
        printf("Total Marks: %.1f", s[n].marks);
        printf("\n");
    }
    return 0;
}


OUTPUT:
Enter Data of the students:
For roll number 1,
Enter Name: DEV
Enter Total Marks: 89
For roll number 2,
Enter Name: MOHIT
Enter Total Marks: 67
For roll number 3,
Enter Name: SAKSHAM
Enter Total Marks: 97
For roll number 4,
Enter Name: KRITI
Enter Total Marks: 93
For roll number 5,
Enter Name: SHRUTI
Enter Total Marks: 69
Displaying Topper :


Roll number: 3
Name: SAKSHAM
Total Marks: 97.0

Process returned 0 (0x0)   execution time : 49.857 s
Press any key to continue.