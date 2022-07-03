#include <iostream>

using namespace std;

int main()
{
  cout << "Hello world" << endl;

  /* print on one line without space */
  cout << "Hello";
  cout << "World" << endl;

  /* \n character doesn't flush the buffer */
  cout << "Hello\nOut\nThere\n";

  int num1;
  int num2;
  double num3;

  // cout << "Enter an integer: ";
  // cin >> num1;
  // cout << "You entered: " << num1 << endl;

  /* can read two ints at the time from the buffer */
  // cout << "Enter a first integer: ";
  // cin >> num1;
  // cout << "Enter a second integer: ";
  // cin >> num2;
  // cout << "You entered " << num1 << " and " << num2 << endl;

  // cout << "Enter 2 integers separated with a space: ";
  // cin >> num1 >> num2;
  // cout << "You entered " << num1 << " and " << num2 << endl;

  cout << "Enter a double: ";
  cin >> num3;
  cout << "You entered: " << num3 << endl;

  return 0;
}