#include <iostream>
#include "Movie.h"

using namespace std;

Movie::Movie(string name_val, string rating_val, size_t wathced_val)
    : name{name_val}, rating{rating_val}, watched{wathced_val}
{
}

Movie::Movie(const Movie &source)
    : name{source.name}, rating{source.rating}, watched{source.watched}
{
  cout << "Copy ctor " << source.name << endl;
}