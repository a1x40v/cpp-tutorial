#include <iostream>

using namespace std;

int main()
{
  int total{};
  int num1{}, num2{}, num3{};
  const int count{3};

  cout << "Enter 3 integers separated by spaces: ";
  cin >> num1 >> num2 >> num3;

  total = num1 + num2 + num3;

  double average{0.0};

  // average = (double)total/count; // old C style, doesn't provide "total" value check
  average = static_cast<double>(total) / count;

  cout << "The 3 numbers where: " << num1 << ", " << num2 << ", " << num3 << endl;
  cout << "The sum is: " << total << endl;
  cout << "The average is: " << average << endl;

  return 0;
}