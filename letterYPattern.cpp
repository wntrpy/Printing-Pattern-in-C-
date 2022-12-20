#include <iostream>
using namespace std;
/*
Num: 5

*     *
 *   *
  * *
   *
   *
   *

*/

int main()
{
  int n;
  cout << "Odd Num: ";
  cin >> n;

  cout << "*";
  for (int first = n; first > 0; first--)
  {
    cout << " ";
  }
  cout << "*";
  cout << endl;
  // end

  // start
  int temp = 1;
  int q = 1;
  int e = n - 2;

  for (int a = n / 2; a > 0; a--)
  {
    for (int b = temp; b > 0; b--)
    {
      cout << " ";
    }

    for (int i = q; i > 0; i--)
    {
      cout << "*";
    }

    for (int w = e; w > 0; w--)
    {
      cout << " ";
    }

    for (int i = q; i > 0; i--)
    {
      cout << "*";
    }
    cout << endl;
    temp++;
    e--;
    e--;
  }
  // end

  // start
  int p = n / 2 + 1;

  for (int last = p; last > 0; last--)
  {
    cout << " ";
  }
  cout << "*";
  cout << endl;

  for (int last = p; last > 0; last--)
  {
    cout << " ";
  }
  cout << "*";
  cout << endl;

  for (int last = p; last > 0; last--)
  {
    cout << " ";
  }
  cout << "*";
  cout << endl;
}