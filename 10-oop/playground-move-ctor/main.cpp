#include <iostream>
#include <vector>

using namespace std;

class Point
{
public:
  int *x;
  Point(int x_val)
  {
    x = new int;
    *x = x_val;
    cout << "Constructor for point x:" << *x << endl;
  }
  Point(const Point &source)
      : Point(*source.x)
  {
    cout << "Copy ctor for point x:" << *x << endl;
  }
  Point(Point &&source)
      : x{source.x}
  {
    source.x = nullptr;
    cout << "Move ctor for point x:" << *x << endl;
  }
  ~Point()
  {
    if (x != nullptr)
    {
      cout << "Destructor freeing for point x: " << *x << endl;
    }
    else
    {
      cout << "Destructor freeing for point x: nullptr" << endl;
    }
    delete x;
  }
};

void print_point(Point p)
{
  cout << "Value func" << endl;
  cout << "x: " << *p.x << endl;
}

void print_point(Point &&p)
{
  cout << "Right referece func" << endl;
  cout << "x: " << *p.x << endl;
}

int main()
{

  // Point &&p_ref = Point{10}; // doesn't work
  // vec.push_back(p_ref);

  vector<Point> vec;
  vec.push_back(Point{10});

  return 0;
}