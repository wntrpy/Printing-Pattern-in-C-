#include <iostream>
using namespace std;
/*
Input: 4

****
---3
--22
1111
*/

int main()
{
  int n;
  cout << "Num: ";
  cin >> n;

  for (int first = n; first > 0; first--)
  {
    cout << "*";
  }
  cout << endl;

  int a = n - 1;
  int b = 1;

  for (int i = n - 2; i > 0; i--)
  {
    for (int j = a; j > 0; j--)
    {
      cout << "_";
    }

    for (int num = b; num > 0; num--)
    {
      cout << a;
    }
    cout << endl;
    a--;
    b++;
  }

  for (int last = n; last > 0; last--)
  {
    cout << "1";
  }
}