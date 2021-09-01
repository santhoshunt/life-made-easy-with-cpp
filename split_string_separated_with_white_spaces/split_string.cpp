#include <bits/stdc++.h>

using namespace std;

vector<string> split(string str)
{
  stringstream ss(str);
  vector<string> splited_strings;
  string s;

  // using stringstream to get the words from the string
  while (ss >> s)
  {
    splited_strings.push_back(s);
  }

  return splited_strings;
}

int main()
{
  string str;
  cout << "Enter the string: ";
  getline(cin, str);

  // printing the data from the split method
  for (auto s : split(str))
  {
    cout << s << endl;
  }

  return 0;
}