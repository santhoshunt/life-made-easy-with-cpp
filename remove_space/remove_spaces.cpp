#include <bits/stdc++.h>

using namespace std;

// modify the below string according to your needs
// By default it denotes all the leading & trailing white spaces, new line character etc..
string characters_to_erase = " \t\f\v\n\r";

string ltrim(string s)
{
  s.erase(0, s.find_last_not_of(characters_to_erase));
  return s;
}

string rtrim(string s)
{
  s.erase(s.find_first_not_of(characters_to_erase), string::npos);
  return s;
}

string trim(string s)
{
  return rtrim(ltrim(s));
}

int main()
{
  string str;
  cout << "Enter the string: ";
  cin >> str;

  trim(str);
  cout << "String after trim: " << str << endl;
}