/* Sample code to find difference of two numbers */

#include <iostream> // import library for input-output
using namespace std;  // tell compiler we want to use standard namespace (global)

int main(){

  int num1;
  int num2;
  int ans;

  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;

  ans = num1 - num2 ;
  cout << "The result of num1 - num2 is = " << ans << endl;

}
