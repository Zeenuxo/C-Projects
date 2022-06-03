#include <stdio.h>

//argc    - int      %d    use printf
//*argv[] - char     %s    use for loop argv[i]


int main(int argc, char *argv[]){

  for (int i=0; i <= argc; i++){

    printf("At Index - %d, argc is: %d\t", i, argc);
    printf("argv is: %s\n", argv[i]);

  }

  //1 - Run Terminal in folder
  //2 - ./argc-argv.exe hello world hello hello tamil nadu
  //3 - It will show history via Command Line in Terminal


return 0;


}
