#include <iostream>

int main() {
  long int index, value; 
  long int fib[60];
  fib[0] = 0;
  fib[1] = 1;
  
  std::cout << fib[0] << std::endl; 
  std::cout << fib[1] << std::endl; 
  
  for(index = 2; index < 60; index++) {
    value = fib[index-1] + fib[index-2];
    fib[index] = value;
    std::cout << value << std::endl; 
  }
  
return 0; 
}
