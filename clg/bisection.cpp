#include <iostream>
using namespace std;
#define EP 0.01
// An example function whose solution is determined using
// Bisection Method. The function is x^3 - x^2 + 2
double solution(double x) {
   return x*x*x - 4*x - 9;
}
// Prints root of solution(x) with error in EPSILON
void bisection(double a, double b) {
   if (solution(a) * solution(b) >= 0) {
      cout << "You have not assumed right a and b\n";
      return;
   }
   double c = a;
   while ((b-a) >= EP) {
      // Find middle point
      c = (a+b)/2;
      // Check if middle point is root
      if (solution(c) == 0.0)
         break;
       // Decide the side to repeat the steps
      else if (solution(c)*solution(a) < 0)
         b = c;
      else
         a = c;
   }
   cout << "The value of root is : " << c;
}
 // main function
int main() {
   double a =-500, b = 100;
   bisection(a, b);
   return 0;
}