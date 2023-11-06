#include <iostream>
#include <cmath>

int main() {
  double m = 4.0; // mass in kg
  double I = 1.6e-2; // moment of inertia in kgm²
  double r = 0.10; // radius in meters
  double v = 4.0; // linear velocity in m/s
  double g = 9.8; // acceleration due to gravity in m/s²

  // Calculate angular velocity using v = ? * r
  double omega = v / r;

  // Calculate kinetic energy
  double kineticEnergy = 0.5 * I * pow(omega, 2);

  // Calculate potential energy (which is zero in this case)

  // Calculate total energy
  double totalEnergy = kineticEnergy;

  std::cout << "Total Energy = " << totalEnergy << " J" << std::endl;
 
}
