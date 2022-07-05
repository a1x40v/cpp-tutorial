#include <iostream>

using namespace std;

int main()
{
  /* initialization (not assignment) */
  int num1{10};
  int num2{20};

  /* l-value (location) - r-value (content)
   */

  // num1 = 100;
  // num1 = num2;
  num1 = num2 = 300;

  cout << "num1 is " << num1 << endl;
  cout << "num2 is " << num2 << endl;

  return 0;
}