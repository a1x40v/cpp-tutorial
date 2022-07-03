#include <iostream>

using namespace std;

/* Global variables must be declared outside of any function.
 * They are automatically initialized to zero.
 */

int age{18};

int main()
{
  cout << age << endl;

  return 0;
}