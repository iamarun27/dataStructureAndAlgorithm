#include <iostream>
using namespace std;

int main()
{
  char c;
  cout << "Enter the letter to check : ";
  cin >> c;

  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
  {
    cout << "Vowel";
  }
  else
    cout << "Consonants";

  return 0;
}