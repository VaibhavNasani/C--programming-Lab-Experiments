/*
Exp 7 Task 1
Title:WAP to find the largest element in array.
Name: Vaibhav Nasani 
Class:First Year
Div:C
Roll no.:045
UIN:241P048
*/

#include <stdio.h>

int main() {
  int n;
  double arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  // storing the largest number to arr[0]
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %.2lf", arr[0]);

  return 0;
}

OUTPUT :
Enter the number of elements (1 to 100): 5
Enter number1: 1
Enter number2: 43
Enter number3: 667
Enter number4: 978
Enter number5: 12309
Largest element = 12309.00
Process returned 0 (0x0)   execution time : 26.274 s
Press any key to continue.