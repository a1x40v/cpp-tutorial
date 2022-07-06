#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  const int alhpa_start{65};
  const int alpha_end{122};

  string input_str;
  string sipher_str;
  string decoded_str;

  cout << "Write message: ";
  getline(cin, input_str);

  for (char c : input_str)
  {
    int charValue{c};
    int cipher_value{};

    if (isalpha(c))
    {
      int delta{};
      delta = alpha_end - charValue;
      cipher_value = alhpa_start + delta;
      sipher_str.push_back(static_cast<char>(cipher_value));
    }
    else
    {
      sipher_str.push_back(c);
    }
  }

  cout << endl
       << "Encoded message: " << sipher_str << endl;

  for (char c : sipher_str)
  {
    int charValue{c};
    int cipher_value{};

    if (isalpha(c))
    {
      int delta{};
      delta = charValue - alhpa_start;
      cipher_value = alpha_end - delta;
      decoded_str.push_back(static_cast<char>(cipher_value));
    }
    else
    {
      decoded_str.push_back(c);
    }
  }

  cout << "Decoded message: " << decoded_str << endl;

  return 0;
}