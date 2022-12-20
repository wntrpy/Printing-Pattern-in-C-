#include <iostream>
using namespace std;
/*
Num: 5

*****
*   *
*   *
*   *
*****

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

  int a = n - 2;
  int counter = 1;

  for (int i = a; i > 0; i--)
  {
    for (int b = counter; b > 0; b--)
    {
      cout << "*";
    }
    for (int c = n - 2; c > 0; c--)
    {
      cout << " ";
    }
    cout << "*";
    cout << endl;
  }

  for (int first = n; first > 0; first--)
  {
    cout << "*";
  }
}