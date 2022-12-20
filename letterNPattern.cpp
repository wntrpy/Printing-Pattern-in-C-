#include <iostream>
using namespace std;
/*
Num: 5

**    *
* *   *
*  *  *
*   * *
*    **

*/

int main()
{
  int n;
  cout << "Num: ";
  cin >> n;

  // start
  cout << "**";
  for (int fCol = n - 1; fCol > 0; fCol--)
  {
    cout << " ";
  }
  cout << "*";
  cout << endl;
  // end

  // start
  int tSp = 1;
  int one = 1;
  int tempS = n - 2;

  for (int row = n - 2; row > 0; row--)
  {
    cout << "*";

    for (int space = tSp; space > 0; space--)
    {
      cout << " ";
    }

    for (int st = one; st > 0; st--)
    {
      cout << "*";
    }

    for (int sp = tempS; sp > 0; sp--)
    {
      cout << " ";
    }

    for (int st = one; st > 0; st--)
    {
      cout << "*";
    }
    cout << endl;
    tSp++;
    tempS--;
  }

  cout << "*";
  for (int fCol = n - 1; fCol > 0; fCol--)
  {
    cout << " ";
  }
  cout << "**";
}