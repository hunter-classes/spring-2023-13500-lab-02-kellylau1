#include <cmath>
#include <iostream>

int main() {
  int integer, squared_int; 
  std::cout << "Please enter an integer: ";
  std::cin >> integer;

  if (integer <= 0 || integer >= 100) {
    do {
      std::cout << "Please re-enter: ";
      std::cin >> integer;
    } while (integer <= 0 || integer >= 100);
  }
  
  squared_int = pow(integer, 2);
    std::cout << "Number squared is: " << squared_int << 
std::endl;
  return 0;
}
