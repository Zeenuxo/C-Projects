//Function is a Block of code that performs a task for us. It can be used multiple times which means it increases code usability
//void printf will be in Function definition
//Functions can only return one value at a time

#include <stdio.h>


//Function Declaration or Prototype
void calculate_price(float value);


int main(){

 float value = 100.0;
 calculate_price(value);
 printf("value is: %f", value); //This will be printed 2nd
 // This parameter is not affected by prameters in declaration or definition as they only receive a copy from main function.

return 0;
}



//Function Definition
void calculate_price(float value){
 value = value + (0.18 * value);
 printf("final price is:  %f", value); //This will be printed 1st
}
