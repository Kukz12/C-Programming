#include <iostream>

int main() {
   
  double tempf;
  std::cout << "Enter temperature in degrees Fahreinheit.\n";
  std::cin >> tempf;
  double tempc;
  tempc = (tempf - 32)/1.8;
  std::cout << "The temperature is "<< tempc <<" degrees Celsius.\n";
 
}
