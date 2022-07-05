#include <iostream>

using namespace std;

/*
  1 dollar is 100 cents
  1 quarter is 25 cents
  1 dime is 10 cents
  1 nickel is 5 cents
  1 penny is 1 cent
*/

int main()
{
  const int cents_for_dollar{100};
  const int cents_for_quarter{25};
  const int cents_for_dime{10};
  const int cents_for_nickel{5};

  cout << "Enter an amount in cents: ";
  int remainder{};
  cin >> remainder;

  int dollars{};
  dollars = remainder / cents_for_dollar;
  remainder %= cents_for_dollar;

  int quarters{};
  quarters = remainder / cents_for_quarter;
  remainder %= cents_for_quarter;

  int dimes{};
  dimes = remainder / cents_for_dime;
  remainder %= cents_for_dime;

  int nickels{};
  nickels = remainder / cents_for_nickel;
  remainder %= cents_for_nickel;

  int pennies{};
  pennies = remainder;

  cout << "Dollars: " << dollars << endl;
  cout << "Quarters: " << quarters << endl;
  cout << "Dimes: " << dimes << endl;
  cout << "Nickels: " << nickels << endl;
  cout << "Pennies: " << pennies << endl;

  return 0;
}