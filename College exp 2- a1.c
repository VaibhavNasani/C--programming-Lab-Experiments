/*

Exp. No. : 2

Title: WAP to print if entered number is even or odd
Name: Vaibhav Nasani 
Class & Div: F.E / C
UIN:241P048

*/


#include<stdio.h>

int main()

{

int n;

printf("\t\t\t***Even or Odd Finder***\n\n\n");
printf("Enter the number: ");
scanf("%d", &n);

if(n%2==0)
printf("%d is Even Number",n);
else
printf("%d is Odd Number",n);

return 0;

}

/*

Output:-

***Even or Odd Finder***

Enter the number: 69
69 is Odd Number

Process returned 0 (0x0) execution time : 3.380 s
Press any key to continue.

*/
  
  