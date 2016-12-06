#include <iostream> // import library for input-output
// using namespace std;  // tell compiler we want to use standard namespace (global)
using std::cout;  // tell compiler we want to use standard cout
using std::cin;  // tell compiler we want to use standard cin
using std::endl;  // tell compiler we want to use standard endl

int main(){

  int num1;
  int num2;
  int sum;

  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;

  sum = num1 + num2 ;
  cout << "The sum of the two numbers is = " << sum << endl;

}
