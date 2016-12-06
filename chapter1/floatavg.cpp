/* compute average of two floating point numbers */

#include <iostream> // import library for input-output
using namespace std;  // tell compiler we want to use standard namespace (global)

int main(){

  float num1;
  float num2;
  float average;

  cout << "Enter first float number: ";
  cin >> num1;
  cout << "Enter second float number: ";
  cin >> num2;

  average = (num1 + num2) / 2 ;
  cout << "The average of the two floating numbers is = " << average << endl;

}
