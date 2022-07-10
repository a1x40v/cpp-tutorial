#include <iostream>
#include "Movies.h"

using namespace std;

void Movies::display()
{
  cout << "Movies list: " << endl;
  for (const Movie &movie : data)
  {
    cout << "Name: " << movie.get_name() << ", Rating: " << movie.get_rating() << ", Watched: " << movie.get_watched() << endl;
  }
  cout << endl;
}

bool Movies::add_movie(string name, string rating, size_t wathced)
{
  for (const Movie &movie : data)
    if (movie.get_name() == name)
      return false;

  data.push_back(Movie{name, rating, wathced});

  return true;
};

bool Movies::inc_watched(string name)
{
  bool isUpdated{false};
  for (Movie &movie : data)
    if (movie.get_name() == name)
    {
      movie.set_watched(movie.get_watched() + 1);
      isUpdated = true;
    }
  return isUpdated;
};