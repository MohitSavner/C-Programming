//Function Pointers

#include <stdio.h>

void function(int x) {
 printf("x: %d\n", x);
}

int main() {
  //Funtion pointer accepting int type 1 argument and returing void data type
  void (*function_pointer)(int);  //Declaring function Pointer
  
  //Function pointer will store memory address for a function
  function_pointer = &function ; //Setting function pointer to point function's address
  
  (*function_pointer)(5) ; // Dereferencing function pointer >> Accessing the function and calling the argument value 5

  return 0;
}

/*
Output: x: 5
*/
