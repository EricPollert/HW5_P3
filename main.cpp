#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  // initialize variables
  
  // conversion factors
  double K1; 
  double K2;
  double K3;

  int T;
  int W;
  
  K1 = 13.12;
  K2 = 11.37;
  K3 = 0.3965;
  

  // loops
  for(int T = 2; T <= 10; T += 4){ 
  for(int W = 5; W <= 11; W += 2){
    double WCI;
    WCI = K1 + ((0.6125) * T) - (K2 * pow(W, 0.16)) + (K3 * T * (pow(W, 0.16)));
    cout << WCI;
    
  
    }
    }
}