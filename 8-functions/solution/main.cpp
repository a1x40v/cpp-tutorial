#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

void print_menu();
void print_numbers(const vector<int> &numbers);
void add_number(vector<int> &numbers);
void print_mean(const vector<int> &numbers);

int main()
{
  vector<int> numbers;
  char choice{};

  do
  {
    print_menu();

    cout << endl
         << "Enter your choice: ";

    cin >> choice;
    choice = tolower(choice);

    switch (choice)
    {
    case 'p':
      print_numbers(numbers);
      break;

    case 'a':
      add_number(numbers);
      break;

    case 'm':
      print_mean(numbers);
      break;

    default:
      cout << endl
           << "Unknown selection, please try again" << endl;
      break;
    }

  } while (choice != 'q');

  cout << endl
       << "Goodbye" << endl;

  return 0;
}

void print_menu()
{
  cout << endl;
  cout << "P - Print numbers" << endl;
  cout << "A - Add a number" << endl;
  cout << "M - Display mean of the numbers" << endl;
  cout << "S - Display the smallest number" << endl;
  cout << "L - Display the largest number" << endl;
  cout << "Q - Quit" << endl;
}

void print_numbers(const vector<int> &numbers)
{
  cout << endl;
  if (numbers.size() == 0)
    cout << "[] - the list is empty";
  else
  {
    cout << "[ ";
    for (auto num : numbers)
      cout << num << " ";
    cout << "]";
  }
  cout << endl;
}

void add_number(vector<int> &numbers)
{
  int num_to_add{};
  cout << "Enter an integer to add to the list: ";
  cin >> num_to_add;
  numbers.push_back(num_to_add);
  cout << endl
       << num_to_add << " added" << endl;
}

void print_mean(const vector<int> &numbers)
{
  if (numbers.size() == 0)
    cout << "Unable to calculate mean - no data" << endl;
  else
  {
    int total{};
    for (auto num : numbers)
      total += num;
    cout << "The mean is : " << static_cast<double>(total) / numbers.size() << endl;
  }
}