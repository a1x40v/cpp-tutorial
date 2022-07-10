#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include "Movie.h"

using namespace std;

class Movies
{
private:
  vector<Movie> data;

public:
  void display();
  bool add_movie(string name, string rating, size_t wathced);
  bool inc_watched(string name);
};

#endif // _MOVIES_H_