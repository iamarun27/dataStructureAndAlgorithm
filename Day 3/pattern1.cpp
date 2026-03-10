#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter the rows : ";
  cin >> num;

  int count = 1;

  for (int i = 1; i <= num; i++)
  {
    for (int j = 1; j <= num; j++)
    {
      // cout << "1 ";
      // cout<<j+1<<" ";
      // cout<<num-j+1<<" ";
      cout<<count<<" ";
      count++;
    }
    cout << endl;
  }
  return 0;
}