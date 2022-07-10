#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
  string name;
  int health;
  int xp;

public:
  void set_name(string name_val)
  {
    name = name_val;
  }
  // Overload Constructors
  Player()
  {
    cout << "No args ctor called" << endl;
  }
  Player(string name)
  {
    cout << "String arg ctor called" << endl;
  }
  Player(string name, int health, int xp)
  {
    cout << "Three args ctor called" << endl;
  }
  // Destructor
  ~Player()
  {
    cout << "Destructor called for " << name << endl;
  }
};

int main()
{
  {
    Player slayer;
    slayer.set_name("Slayer");
  }

  cout << "--------------------" << endl;

  {
    Player frank;
    frank.set_name("Frank");
    Player hero("Hero");
    hero.set_name("Hero");
    Player villian("Villian", 100, 12);
    villian.set_name("Villian");
  }

  cout << "--------------------" << endl;

  Player *enemy = new Player;
  enemy->set_name("Enemy");

  Player *level_boss = new Player("Level boss", 1000, 300);
  level_boss->set_name("Level Boss");

  delete enemy;
  delete level_boss;

  return 0;
}