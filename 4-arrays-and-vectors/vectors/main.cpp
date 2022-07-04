#include <iostream>
#include <vector>

using namespace std;

int main()
{
  // vector<char> vowels; // empty
  // vector<char> vowels (5); // 5 initialized to zero
  vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

  cout << vowels[0] << endl;
  cout << vowels[4] << endl;

  // vector<int> test_scores (3); // 3 elements all init to zero
  // vector<int> test_scores(3, 100); // 3 elements all init to 100
  vector<int> test_scores{100, 98, 89};
  cout << "\nTest vector using array syntax:" << endl;
  cout << test_scores[0] << endl;
  cout << test_scores[1] << endl;
  cout << test_scores[2] << endl;

  cout << "\nTest vector using vector syntax:" << endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;
  cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;

  cout << "\nEnter 3 test scores: ";
  cin >> test_scores.at(0);
  cin >> test_scores.at(1);
  cin >> test_scores.at(2);

  cout << "\nUpdated test scores:" << endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;

  /* dynamic nature of vectors */
  cout << "\nEnter one more test score: ";
  int score_to_add{0};
  cin >> score_to_add;
  test_scores.push_back(score_to_add);

  cout << "\nEnter one more: ";
  cin >> score_to_add;
  test_scores.push_back(score_to_add);

  cout << "\nTest scores are now:" << endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;
  cout << test_scores.at(3) << endl;
  cout << test_scores.at(4) << endl;
  cout << "\nThere are now " << test_scores.size() << " scores in the vector" << endl;

  // cout << test_scores.at(10); // exception

  /* example of 2D-vector */
  vector<vector<int>> movie_ratins{
      {1, 2, 3, 4},
      {2, 1, 4, 4},
      {3, 2, 1, 1}};

  cout << "\nFirst reviewer, second movie: " << movie_ratins[0][1] << endl;
  cout << "\nSecond reviewer, third movie: " << movie_ratins.at(1).at(2) << endl;

  return 0;
}