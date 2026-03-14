#include <iostream>
using namespace std;

void prime(int n)
{
  if (n < 2)
  {
    // cout << "Not prime";
    return;
  }

  for (int i = 2; i < n - 1; i++)
  {
    if (n % i == 0)
      // cout << "Not prime";
      return;
  }
  cout << n << " ";
  return;
}

int main()
{
  int arr[5] = {2, 3, 5, 7, 9};

  for (int i = 0; i < 5; i++)
  {
    prime(arr[i]);
  }

  return 0;
}