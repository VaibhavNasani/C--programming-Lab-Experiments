/*
Exp 10 Task 1
Title :WAP to add two numbers using pointers.
Name : Vaibhav Nasani 
Class :First Year
DIV :C
Roll no. :045
UIN :241P048
*/

#include <stdio.h>

int main()
{
    int a, b, *p, *q, sum;

    printf("Enter two integers to add :\n");
    scanf("%d %d", &a, &b);

    p = &a;
    q = &b;

    sum = *p + *q;

    printf("Sum of entered numbers = %d\n",sum);

    return 0;
}


OUTPUT:
Enter two integers to add :
369 963
Sum of entered numbers = 1332

Process returned 0 (0x0)   execution time : 6.744 s
Press any key to continue.