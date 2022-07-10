#include <iostream>

using namespace std;

class InnerClass
{
public:
  InnerClass();
};

InnerClass::InnerClass()
{
  cout << "InnerClass default ctor was invoked" << endl;
}

class OuterClass
{
private:
  InnerClass inner;

public:
  OuterClass(InnerClass new_inner);
};

// /* Inner class created twice */
// OuterClass::OuterClass(InnerClass new_inner)
// {
//   cout << "OuterClass default ctor was invoked" << endl;
//   inner = new_inner;
// }

/* Inner class created once */
OuterClass::OuterClass(InnerClass new_inner)
    : inner{new_inner}
{
  cout << "OuterClass default ctor was invoked" << endl;
}

int main()
{
  InnerClass inner;
  OuterClass *outer = new OuterClass(inner);

  return 0;
}