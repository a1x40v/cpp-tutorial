#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main()
{

  Mystring a{"Hello"}; // overloaded ctor
  Mystring b;          // no-args ctor

  // copy assignment
  b = a;                // b.operator=(a)
  b = "This is a test"; // b.operator=("This is a test")

  vector<Mystring> vec;
  vec.push_back("Alex");
  vec.push_back("Bob");

  cout << "=== Loop 1 ======" << endl;
  for (const Mystring &s : vec)
    s.display();

  cout << "=== Loop 2 ======" << endl;
  for (Mystring &s : vec)
    s = "Changed";

  cout << "=== Loop 3 ======" << endl;
  for (const Mystring &s : vec)
    s.display();

  Mystring c{"Hello"};  // Overloaded ctor
  c = Mystring{"Hola"}; // Overloaded ctor then move assignment
  c = "Bonjour";        // Overloaded ctor then move assignment

  return 0;
}