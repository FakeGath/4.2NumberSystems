// library that includes iostream for basic commands
#include <iostream>



int main(){
    // Variable declaration 
   int number1 = 15; // Decimal
   int number2 = 017;    // Octal
   int number3 =  0x0f; // Hexadecimal
   int number4 = 0b00001111; // Binary

   //Prints out in different ways the number 15.

   std::cout<< "Number 1 : "<< number1<< std :: endl;
   std::cout<< "Number 2 : "<< number2<< std :: endl;
   std::cout<< "Number 3 : "<< number3<< std :: endl;
   std::cout<< "Number 4 : "<< number4<< std :: endl;
    
    return 0;
}