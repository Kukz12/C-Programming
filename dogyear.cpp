#include <iostream>

int main() {
  int dog_years;
  std::cout << "Enter age of dog:\n";
  std::cin >> dog_years;
  double hyears;
  hyears = 21;
  dog_years = dog_years - 2;
  hyears = hyears + dog_years*4;
  std::cout << "The age in human years is "<< hyears << "\n";
  
  
  
}
