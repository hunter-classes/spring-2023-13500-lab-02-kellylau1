#include <iostream>

int main() {
  int myData[10];
  for (int i = 0; i < 10; i++) {
    myData[i] = 1;
    std::cout << myData[i] << " ";
  }
  std::cout << std::endl;

  int index, value;
  do {
    std::cout << "Input index: "; 
    std::cin >> index;

    if (index < 0 || index >= 10) {
      std::cout << "Index out of range. Exit." << std::endl;
      break;
    }
    
    std::cout << "Input value: ";
    std::cin >> value;
    myData[index] = value;

    for (int i = 0; i < 10; i++) {
      std::cout << myData[i] << " ";
    }

    std::cout << std::endl;
  } while (index >= 0 && index < 10);

  return 0;
}
