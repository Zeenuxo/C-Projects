//Nested If Else Statements
#include <stdio.h>

int main (){

 //Get user to Select a category 1 or  2
 int cat;
 printf("Press 1 (Language) or 2 (Number): ");
 scanf("%d", &cat);


 //Netsed IF statement, then else if, then else
 if(cat == 1){
   printf("You have selected LANGUAGE mode\n\n");

   int code;
   printf("Please Enter 1 for English, 2 for Hindi, 3 for Bhailang\n");
   scanf("%d", &code);

  if(code == 1){
   printf("You have chosen English.\n\n");
  }

  else if (code == 2){
   printf("You have chosen Hindi.\n\n");
  }

  else if (code == 3){
   printf("You have chosen Bhailang.\n\n");
  }

  else{
  printf("Please Try Again!");
 }
}


 //Prompt user of Category "NUMBER" mode
 else if (cat == 2){

  int num1;
  int num2;
  printf("You have selected NUMBER mode.\n\n");
  printf("Please Enter Num 1: \n");
  scanf("%d", &num1);

  printf("Please Enter Num 1: \n");
  scanf("%d", &num2);

  printf("Sum of numbers is: %d \n", num1 + num2);
}


//Prompt user of Neither "LANGUAGE" "NUMBER" mode
else {
  printf("You have not entered 'LANGUAGE' or 'NUMBER Mode'. Please Try again!");
}


return 0;
}
