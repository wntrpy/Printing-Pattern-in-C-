#include <iostream>
using namespace std;
/*
Num: 5

*   *
*   *
*****
*   *
*   *

*/

int main()
{
  int n;
  cout << "Num: ";
  cin >> n;

  int q = n / 2;
  int w = n - 2;

  for (int r = q; r > 0; r--)
  {
    cout << "*";

    for (int s = w; s > 0; s--)
    {
      cout << " ";
    }
    cout << "*";
    cout << endl;
  }
  // end

  // start
  for (int mid = n; mid > 0; mid--)
  {
    cout << "*";
  }
  cout << endl;
  // end

  // start
  for (int r = q; r > 0; r--)
  {
    cout << "*";

    for (int s = w; s > 0; s--)
    {
      cout << " ";
    }
    cout << "*";
    cout << endl;
  }
}