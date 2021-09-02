#include <bits/stdc++.h>

using namespace std;

vector<int> extractNumbers(string str)
{
  vector<int> numbers;
  smatch match;

  regex r("([0-9]+)"); // or you can also use \\d+ instead of [0-9]+ which also match any integers

  while (regex_search(str, match, r))
  {
    numbers.push_back(stoi(match.str(1)));
    str = match.suffix().str();
  }

  return numbers;
}

int main()
{
  string str;
  cout << "Enter the string: ";
  getline(cin, str);

  for (int number : extractNumbers(str))
  {
    cout << number << " ";
  }
  cout << endl;

  return 0;
}