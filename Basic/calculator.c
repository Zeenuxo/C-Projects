//Use switch to detect user given code for Weekdays
#include <stdio.h>

int main (){

char ops;
float num1;
float  num2;

printf("Please enter the Operator (+ - * / %%) you want to use: ");
scanf("%c", &ops);

printf("Please enter Number 1:  ");
scanf("%d", &num1);


printf("Please enter Number 2:  ");
scanf("%d", &num2);

//switch expression = variable you wish to use switch on
switch (ops) {
  case '+':
  printf("Addition of %d + %d = %d \n", num1, num2, num1 + num2);
  break;

  case '-':
  printf("Subtraction of %d - %d = %d \n", num1, num2, num1 - num2);
  break;

  case '^':
  printf("Multiplication of %f * %f = %f \n", num1, num2, num1 ^ num2);
  break;

  case '/':
  printf("Diviison of %d / %d = %d \n", num1, num2, num1 / num2);
  break;

  case '%':
  printf("Modulus of %d %% %d = %d \n", num1, num2, num1 % num2);
  break;

  default:
  printf("You have not entered an Operator! Please try again.\n");

}

return 0;

}
