#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player
{
  // attributes
  string name; // std:string initialize as emtpy string
  int health;  // garbage data
  int xp;

  // methods
  void talk(string);
  bool is_dead();
};

class Account
{
  // attributes
  string name{"Account"}; // initialization
  double balance{0.0};

  // methods
  bool deposit(double);
  bool withdraw(double);
};

int main()
{
  Account frank_account;
  Account jim_account;

  Player frank;
  Player hero;

  Player players[]{frank, hero};

  vector<Player> player_vec{frank};
  player_vec.push_back(hero);

  Player *enemy{nullptr};
  enemy = new Player;

  delete enemy;

  return 0;
}