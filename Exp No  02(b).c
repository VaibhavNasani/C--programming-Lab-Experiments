/*

Exp. No. : 2(b)

Title: WAP to find the sum of odd numbers between two numbers entered by the user.

Name: Vaibhav Nasani 

Class & Div: F.E / C

UIN:241P048

*/

#include<stdio.h>

int main()

{

printf("\t\t\t***Sum of Odd Numbers***\n\n\n");

int n1,n2,sum=0;
printf("Enter the First Number: ");
scanf("%d",&n1);
printf("Enter the Second Number: ");
scanf("%d",&n2);
for(int i=n1;i<=n2;i++)

{
if(i%2!=0)
sum = sum+i;
}

printf("The sum of Odd Numbers between %d and %d is: %d",n1,n2,sum);

return 0;

}

/*

Output:-

***Sum of Odd Numbers***

Enter the First Number: 10
Enter the Second Number: 20
The sum of Odd Numbers between 10 and 20 is: 75

Process returned 0 (0x0) execution time : 9.014 s
Press any key to continue.

*/ Sum of odd numbers from 10 to 20 is: 75

     Process finished.
*/