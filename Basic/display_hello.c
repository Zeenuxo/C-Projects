//while loops

#include <stdio.h>


void display(int num1,int num2);


int main(){

  int num1;
  printf("Where you want counting to start from? -  ");
  scanf("%d", &num1);


  int num2;
  printf("Where you want counting to end? -  ");
  scanf("%d", &num2);

  display(num1, num2);


  return 0;
}


void display(int num1,int num2){

  //num1 = 1;
  while (num1 <= num2){
   printf("%d - Hello World\n", num1);
   num1++;

  }

}
