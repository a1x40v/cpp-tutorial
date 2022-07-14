#include <cstring>
#include <iostream>
#include "Mystring.h"

Mystring::Mystring()
    : str{nullptr}
{
  str = new char[1];
  *str = '\0';
}

Mystring::Mystring(const char *s)
    : str{nullptr}
{
  if (s == nullptr)
  {
    str = new char[1];
    *str = '\0';
  }
  else
  {
    str = new char[std::strlen(s) + 1];
    std::strcpy(str, s);
  }
}

// Copy ctor
Mystring::Mystring(const Mystring &source)
    : str{nullptr}
{
  str = new char[std::strlen(source.str) + 1];
  std::strcpy(str, source.str);
  std::cout << "Copy ctor used" << std::endl;
}

Mystring::~Mystring()
{
  if (str == nullptr)
  {
    std::cout << "Calling destructor for Mystring : nullptr" << std::endl;
  }
  else
  {
    std::cout << "Calling destructor for Mystring : " << str << std::endl;
  }
  delete[] str;
}

// Move ctor
Mystring::Mystring(Mystring &&source)
    : str(source.str)
{
  source.str = nullptr;
  std::cout << "Move ctor used" << std::endl;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs)
{
  std::cout << "Using Copy assignment" << std::endl;
  if (this == &rhs)
    return *this;
  delete[] this->str;
  str = new char[std::strlen(rhs.str) + 1];
  std::strcpy(this->str, rhs.str);
  return *this;
}

Mystring &Mystring::operator=(Mystring &&rhs)
{
  std::cout << "Using Move assignment" << std::endl;
  if (this == &rhs)
    return *this;
  delete[] this->str;
  str = rhs.str;
  rhs.str = nullptr;
  return *this;
}

void Mystring::display() const
{
  std::cout << str << " : " << get_length() << std::endl;
}

int Mystring::get_length() const
{
  return std::strlen(str);
}

const char *Mystring::get_str() const { return str; }