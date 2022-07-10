#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

using namespace std;

class Movie
{
private:
  string name;
  string rating;
  size_t watched;

public:
  string get_name() const { return name; }
  void set_name(string val) { name = val; }
  string get_rating() const { return rating; }
  void set_rating(string val) { rating = val; }
  size_t get_watched() const { return watched; }
  void set_watched(size_t val) { watched = val; }
  Movie(string name_val, string rating_val, size_t watched_val);
  Movie(const Movie &source);
};

#endif // _MOVIE_H_