#include <iostream>

using namespace std;

int main()
{
  // char vowels[]{'a', 'e', 'i', 'o', 'u'};
  // cout << "\nThe first vowel is: " << vowels[0] << endl;
  // cout << "The last vowel is: " << vowels[4] << endl;

  // double hi_temps[]{90.1, 98.1, 77.5, 81.6};
  // cout << "The first hight temperature is: " << hi_temps[0] << endl;
  // hi_temps[0] = 100.7;
  // cout << "The first hight temperature is now: " << hi_temps[0] << endl;

  /* initialize all to 0 */
  int zeros[5]{};

  /* initialize all to 0 */
  int test_scores[]{100, 90, 80, 70, 60};
  cout << "First: " << test_scores[0] << endl;
  cout << "Second: " << test_scores[1] << endl;
  cout << "Third: " << test_scores[2] << endl;
  cout << "Fourth: " << test_scores[3] << endl;
  cout << "Fifth: " << test_scores[4] << endl;

  cout << "\nEnter 5 test scores: ";
  cin >> test_scores[0];
  cin >> test_scores[1];
  cin >> test_scores[2];
  cin >> test_scores[3];
  cin >> test_scores[4];

  cout << "\nThe updated array is: " << endl;
  cout << "First: " << test_scores[0] << endl;
  cout << "Second: " << test_scores[1] << endl;
  cout << "Third: " << test_scores[2] << endl;
  cout << "Fourth: " << test_scores[3] << endl;
  cout << "Fifth: " << test_scores[4] << endl;

  cout << "\nValue of the array name is: " << test_scores << endl;

  return 0;
}