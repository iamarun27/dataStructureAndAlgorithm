#include <iostream>
using namespace std;

int main()
{
  // char arr[] = {'a', 'p', 'p','l','e'};
  //  cout << arr;
  //  for(int i=0;i<5;i++)
  //  {
  //    cout<<arr[i];
  //  }

  // char arr[10];
  // cin >> arr;
  // cout << arr;

  // string s = "Arun";
  // cout<<s;

  // string s = "Arun Kumar";
  // cout << s;

  // string s;
  // getline(cin, s);
  // cout << s << endl;
  // cout << s.size();

  // string s = "Ram is a \"good\" boy";
  // cout<<s;

  // reverse

  // string s = "Arun";
  // int start = 0;
  // int end = s.size() - 1;
  // while (start < end)
  // {
  //   char temp = s[start];
  //   s[start] = s[end];
  //   s[end] = temp;
  //   start++;
  //   end--;
  // }

  // cout << s;

  // size

  // string s = "arun";
  // int size = 0;

  // while (s[size] != '\0')
  // {
  //   size++;
  // }
  // cout << size;

  // palindrome

  string s = "naman";

  int start = 0;
  int end = s.size() - 1;
  while (start < end)
  {
    if (s[start] != s[end])
    {
      cout << "Not palindrome";
      return 0;
    }
    start++, end--;
  }
  cout << "Palindrome";

  return 0;
}