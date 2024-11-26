
/* Name- Vaibhav Nasani 

UIN-241P048 Roll No.-045

Title - wap to find factorial of a number using iterative and recursive functions */

#include <stdio.h>

unsigned long long factorial_iterative(int n) {

unsigned long long result = 1;

for (int i = 1; i <= n; i++) {

result *= i;

}

return result;

}

unsigned long long factorial_recursive(int n) {

if (n == 0 || n == 1) {

return 1;

} else {

return n * factorial_recursive(n - 1);

}

}

int main() {

int number;

printf("Enter a number: ");

scanf("%d", &number);

if (number < 0) {

printf("Factorial is not defined for negative numbers.\n");

return 1;

}

unsigned long long iterative_result = factorial_iterative(number);

printf("Factorial of %d (iterative): %llu\n", number, iterative_result);

unsigned long long recursive_result = factorial_recursive(number);

printf("Factorial of %d (recursive): %llu\n", number, recursive_result);

return 0;

}

/*    
      Output 

Enter a number: 4

Factorial of 4 (iterative): 24

Factorial of 4 (recursive): 24

Process returned 0 (0x0) execution time : 3.579 s

Press any key to continue.

*/