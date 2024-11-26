/* 

Name : Vaibhav Nasani 
UIN : 241P048 
Roll No. : 045
Title-wap to find all the prime numbers between two numbers using functions */

#include <stdio.h>

int is_prime(int num) {
if (num < 2) {
return 0; 

}

for (int i = 2; i * i <= num; i++) {
if (num % i == 0) {
return 0; 

}

}

return 1; 

}

void find_primes(int start, int end) {
printf("Prime numbers between %d and %d are:\n", start, end);
for (int i = start; i <= end; i++) {/
if (is_prime(i)) {
printf("%d ", i);

}

}

printf("\n");

}

int main() {
int start, end;
printf("Enter the starting number: ");
scanf("%d", &start);
printf("Enter the ending number: ");
scanf("%d", &end);
find_primes(start, end);

return 0;

}

  
  
/*  
       OUTPUT

Enter the starting number: 1

Enter the ending number: 15

Prime numbers between 1 and 15 are: 2 3 5 7 11 13

Process returned 0 (0x0) execution time : 4.251 s

Press any key to continue.

*/