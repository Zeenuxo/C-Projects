//User enters Temp Hot or Cold

#include <stdio.h>
#include <math.h>

  //Function Declaration or Prototype
 void temp(float num);


  int main(){

  //Formal Parameter (Receives a value) + Data Type

  float num;
  printf("Please enter a number to see hot or Cold: ");
  scanf("%f", &num);


  //Function Calling
  temp(num); //Arguement or Actual Parameter (Sends a value) + No Data Type

  return 0;
  }


  //Function Definition
  void temp(float num){

    if (num <= 15){
      printf("Temperature outisde is Cold.\n\n"); //Formal Parameter (Receives a value) + Data Type
    }
    else if (num >= 30){
      printf("It is very HOT outside. Please wera a sunscreen");
    }
    else{
      printf("Temperature outisde is Hot.\n\n");
    }
  }
