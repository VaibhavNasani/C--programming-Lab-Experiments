/*
Exp 8 Task 2
Title : WAP to check if the entered string is palindrome or not.
Name: Vaibhav Nasani 
Class:First Year
DIV:C
UIN :241P048
ROLL NO. :045
*/


#include <stdio.h>
#include <string.h>

int main() {
    char string1[100];
    int i, length;
    int flag = 0;

    printf("Enter a string: ");
    scanf("%s", string1);

    length = strlen(string1);

    for (i = 0; i < length / 2; i++) {
        if (string1[i] != string1[length - i - 1]) {
            flag = 1;
            break;
        }
    }


    if (flag) {
        printf("%s is Not a Palindrome.\n", string1);
    } else {
        printf("%s is a Palindrome.\n", string1);
    }

    return 0;
}


OUTPUT :
Enter a string: ROTATOR
ROTATOR is a Palindrome.

Process returned 0 (0x0)   execution time : 11.653 s
Press any key to continue.