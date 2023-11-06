#include<iostream>
using namespace std ; 

int main()
{
    float m1 = 6.5 ; 
    float m2 = 3.1 ; 
    float r1 = 1.5 ; 
    float r2 = 2.8 ; 
    float v1 = 2.2 ; 
    float v2 = 3.6 ; 

    // Angular momentum is L = p*r ; 
    float L1 = -(m1*v1*r1) ; 
    float L2 = m2*v2*r2 ; 

    float L = L1 + L2 ; 
	cout << "Total angular momentum is: " << L;
}
