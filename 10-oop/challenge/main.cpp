#include <iostream>
#include "Movies.h"

using namespace std;

void add_movie(Movies &movies, string name, string rating, size_t watched)
{
  if (movies.add_movie(name, rating, watched))
  {
    cout << "Added";
  }
  else
  {
    cout << "Already exists";
  }

  cout << endl;
}

void increment_watched(Movies &movies, string name)
{
  if (movies.inc_watched(name))
  {
    cout << name << " watch incremented";
  }
  else
  {
    cout << name << " not found";
  }
  cout << endl;
}

int main()
{
  Movies movies;

  add_movie(movies, "Harry Pother", "G", 5);
  add_movie(movies, "Harry Pother", "G", 5);
  add_movie(movies, "Senderela", "PG", 10);

  movies.display();

  increment_watched(movies, "Senderela");
  increment_watched(movies, "XXX");

  movies.display();

  return 0;
}