#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector<string> *const v)
{
  for (auto str : *v)
    cout << str << " ";
  cout << endl;
}

void display(int *array, int sentinel)
{
  while (*array != sentinel)
    cout << *array++ << " ";
  cout << endl;
}

int main()
{
  vector<string> names{"Alex", "Helen", "Bob"};

  display(&names);

  int scores[]{100, 98, 97, 79, 85, -1};
  display(scores, -1);

  return 0;
}