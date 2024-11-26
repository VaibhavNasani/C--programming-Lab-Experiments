/* Name : Vaibhav Nasani 
   UIN : 241P048
   Roll No. : 045
   Title w: Wap to desgin a menu driven calculaor using switch and goto. */



#include <stdio.h>

int main() {
int choice;
float num1, num2, result;
start:
printf("\n--- Menu-Driven Calculator ---\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Exit\n");
printf("Enter your choice (1-5): ");
scanf("%d", &choice);

if (choice == 5) {
printf("Exiting the program. Goodbye!\n");

return 0;

}

if (choice < 1 || choice > 5) {
printf("Invalid choice! Please try again.\n");

goto start;

}

printf("Enter the first number: ");
scanf("%f", &num1);
printf("Enter the second number: ");
scanf("%f", &num2);
switch (choice) {

case 1:

result = num1 + num2;
printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);

break;

case 2:

result = num1 - num2;
printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);

break;

case 3:

result = num1 * num2;
printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);

break;

case 4:

if (num2 != 0) {

result = num1 / num2;
printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);

} else {

printf("Error: Division by zero is not allowed.\n");

}

break;

}

goto start;

return 0;

}



   /* 
          OUTPUT

--- Menu-Driven Calculator ---

1. Addition

2. Subtraction

3. Multiplication

4. Division

5. Exit

Enter your choice (1-5): 4

Enter the first number: 65

Enter the second number: 45

Result: 65.00 / 45.00 = 1.44

*/