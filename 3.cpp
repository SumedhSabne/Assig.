#include<iostream>
#include <iostream>
#include <cmath>

int main() {
  double m = 0.10; 
  double w = 5.0; 
  double r1 = 30.0 / 100.0; 
  double r2 = 50.0 / 100.0; 

  double force = m * pow(w, 2); 
  // calculating the centrifugal force of inertia

  double distance = r2 - r1; 

  double work = force * distance * cos(0); 

  double x = work * 10;

  std::cout << "X = " << x << std::endl;
return 0;

}
