#include <iostream>
using namespace std;
/*
Input: 5

____XXXXXXX________XXXXXX
___XXXXXXXXX______XXXXXXXX
__XXXXXXXXXXX____XXXXXXXXXX
_XXXXXXXXXXXXX__XXXXXXXXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
_XXXXXXXXXXXXXXXXXXXXXXXXXXX
__XXXXXXXXXXXXXXXXXXXXXXXXX
___XXXXXXXXXXXXXXXXXXXXXXX
____XXXXXXXXXXXXXXXXXXXXX
_____XXXXXXXXXXXXXXXXXXX
______XXXXXXXXXXXXXXXXX
_______XXXXXXXXXXXXXXX
________XXXXXXXXXXXXX
_________XXXXXXXXXXX
__________XXXXXXXXX
___________XXXXXXX
____________XXXXX
_____________XXX
______________X

*/

int main()
{
  int n;
  cout << "Num: ";
  cin >> n;

  // start
  int q = n - 1;
  int w = n + 2;
  int e = n * 2 - 2;
  int r = n + 1;

  for (int i = q; i > 0; i--)
  {
    for (int j = i; j > 0; j--)
    {
      cout << "_";
    }

    for (int k = w; k > 0; k--)
    {
      cout << "X";
    }

    for (int l = e; l > 0; l--)
    {
      cout << "_";
    }

    for (int m = r; m > 0; m--)
    {
      cout << "X";
    }

    cout << endl;
    q--;
    w++;
    w++;
    e--;
    e--;
    r++;
    r++;
  }
  // end

  // start
  int t = n * 6 - 1;

  for (int i = t; i > 0; i--)
  {
    cout << "X";
  }
  cout << endl;
  for (int i = t; i > 0; i--)
  {
    cout << "X";
  }
  cout << endl;

  // end

  // start

  int y = 1;
  int u = n * 6 - 3;

  for (int i = n * 3 - 1; i > 0; i--)
  {
    for (int j = y; j > 0; j--)
    {
      cout << "_";
    }

    for (int k = u; k > 0; k--)
    {
      cout << "X";
    }

    cout << endl;
    y++;
    u--;
    u--;
  }
  // end
}