#include <iostream>

using namespace std;

void double_data(int *int_ptr)
{
  *int_ptr *= 2;
}

int main()
{
  int value{10};
  int *int_prt{nullptr};

  cout << "Value: " << value << endl;
  double_data(&value);
  cout << "Value: " << value << endl;

  int_prt = &value;
  double_data(int_prt);
  cout << "Value: " << value << endl;

  return 0;
}