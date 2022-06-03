#include <stdio.h>


int factorial (long int num);




int main(){

  long int num;
  printf("Please enter a number for Factorial: ");
  scanf("%ld", &num);

  factorial(num);

  printf("Factorial of %ld is %d ", num, factorial(num));



  return 0;
}


int factorial (long int num){

 if (num == 1 || num == 0)  //if num <=1 //Base Condition
 return 1;                  //But also value for last recursive statement when reached will be 1, used to solve remaining function calls

 else return num * factorial(num-1);

}
