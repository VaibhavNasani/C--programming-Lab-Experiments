/*

Exp. No. : 1(b)

Title: WAP to get students PCM marks from the user and find the average and eligibility

Name: Vaibhav Nasani 

Class & Div: F.E / C

UIN:241P048

*/

#include<stdio.h>

int main()

{

printf("\t\t\t***Average And Eligibility***\n\n\n");

float P,C,M,Avg;

printf("Enter obtained marks in Physics:\t");
scanf("%f",&P);
printf("Enter obtained marks in Chemistry:\t");
scanf("%f",&C);

printf("Enter obtained marks in Mathematcis:\t");
scanf("%f",&M);

Avg = (P+C+M)/3;
printf("Average Marks Obtained:%f\n",Avg);

if(Avg>=50 && P>=50 && C>=50 && M>=50)
printf("Student is eligible for Admission");

else
printf("Student is not eligible for Admission");

return 0;

}

/*

Output:-

***Average And Eligibility***

Enter obtained marks in Physics: 94
Enter obtained marks in Chemistry: 86
Enter obtained marks in Mathematcis: 69
Average Marks Obtained:83.000000
Student is eligible for Admission

Process returned 0 (0x0) execution time : 12.295 s
Press any key to continue.

*/