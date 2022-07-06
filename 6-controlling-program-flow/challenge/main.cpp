#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> numbers;
  char choice{};

  while (true)
  {
    cout << endl
         << endl;

    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    cout << endl;

    /* Print numbers */
    if (choice == 'P' || choice == 'p')
    {
      if (numbers.size() == 0)
      {
        cout << "[] - the list is emty";
      }
      else
      {
        cout << "[ ";
        for (int number : numbers)
          cout << number << " ";
        cout << "]";
      }
      continue;
    }

    /* Adding numbers */
    if (choice == 'A' || choice == 'a')
    {
      cout << "Write integer: ";
      int number{};
      cin >> number;
      numbers.push_back(number);
      cout << endl
           << number << " added";
      continue;
    }

    /* Display mean */
    if (choice == 'M' || choice == 'm')
    {
      if (numbers.size() == 0)
      {
        cout << "Unable to calculate the mean - no data";
      }
      else
      {
        double mean{};
        int sum{};
        for (int number : numbers)
          sum += number;
        mean = static_cast<double>(sum) / numbers.size();
        cout << "Mean is: " << mean;
      }
      continue;
    }

    /* Display smallest  */
    if (choice == 'S' || choice == 's')
    {
      if (numbers.size() == 0)
      {
        cout << "Unable to determine the smallest number - list is empty";
      }
      else
      {
        int smallest{};
        smallest = numbers.at(0);
        for (int number : numbers)
          if (number < smallest)
            smallest = number;
        cout << "The smallest number is " << smallest;
      }
      continue;
    }

    /* Display largest */
    if (choice == 'L' || choice == 'l')
    {
      if (numbers.size() == 0)
      {
        cout << "Unable to determine the largest number - list is empty";
      }
      else
      {
        int largest{};
        largest = numbers.at(0);
        for (int number : numbers)
          if (number > largest)
            largest = number;
        cout << "The largest number is " << largest;
      }
      continue;
    }

    /* Quit */
    if (choice == 'Q' || choice == 'q')
      break;

    cout << "Unknown selection, please try again";
  }

  cout << "\nGoodbye!" << endl;

  return 0;
}