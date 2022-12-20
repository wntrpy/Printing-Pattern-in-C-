#include <iostream>
using namespace std;
/*
Num: 5

    **
   * *
  *  *
 *   *
******
     *
     *

*/

int main()
{
  int n;
  cout << "Num: ";
  cin >> n;

  for (int first = n - 1; first > 0; first--)
  {
    cout << " ";
  }
  cout << "**";
  cout << endl;
  // end

  int q = n - 2;
  int w = 1;
  int e = 1;

  for (int i = q; i > 0; i--)
  {
    for (int j = i; j > 0; j--)
    {
      cout << " ";
    }

    for (int k = w; k > 0; k--)
    {
      cout << "*";
    }

    for (int l = e; l > 0; l--)
    {
      cout << " ";
    }

    for (int k = w; k > 0; k--)
    {
      cout << "*";
    }

    cout << endl;
    q--;
    e++;
  }
  // end

  // start

  for (int mid = n + 1; mid > 0; mid--)
  {
    cout << "*";
  }
  cout << endl;

  // end

  // start
  if (n > 10)
  {
    for (int lSp = n; lSp > 0; lSp--)
    {
      cout << " ";
    }
    cout << "*";
    cout << endl;
    for (int lSp = n; lSp > 0; lSp--)
    {
      cout << " ";
    }
    cout << "*";
    cout << endl;
    for (int lSp = n; lSp > 0; lSp--)
    {
      cout << " ";
    }
    cout << "*";
    cout << endl;
  }
  else
  {
    for (int lSp = n; lSp > 0; lSp--)
    {
      cout << " ";
    }
    cout << "*";
    cout << endl;
    for (int lSp = n; lSp > 0; lSp--)
    {
      cout << " ";
    }
    cout << "*";
    cout << endl;
  }
}