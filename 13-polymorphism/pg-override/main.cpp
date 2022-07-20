#include <iostream>

class Base
{
public:
  virtual void print_num(int num)
  {
    std::cout << "Base. Num = " << num << "\n";
  }
};

class Derived : public Base
{
public:
  virtual void print_num(int num)
  {
    std::cout << "Derived. Num = " << num << "\n";
  }
};

int main()
{
  Base *p1 = new Base;
  Base *p2 = new Derived;

  p1->print_num(10);
  p2->print_num(20);

  delete p1;
  delete p2;

  return 0;
}