#include <iostream>

int main(){
   
   //Compile time error occurs if we remov e semicolon
   std::cout << "Hello Word!" << std::endl;

   //Run time error. Division by zero.
   int value = 7/0;
   std::cout << "value : " << value << std::endl;

    return 0;
}