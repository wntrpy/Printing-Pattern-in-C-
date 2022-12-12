#include <iostream>
using namespace std;
/*
Input:5
55555555555
_444444444
__3333333
___22222
____111
_____5
____111
___22222
__3333333
_444444444
55555555555
*/

int main()
{
  int n;
  cout << "Num: ";
  cin >> n;
  // start
  int result = n * 2 + 1;
  for (int first = result; first > 0; first--)
  {
    cout << n;
  }
  cout << endl;

  int a = result - 2;
  int tSpace = 1;
  int tNum = result - 2;
  int tempN = n - 1;

  for (int sRow = n - 1; sRow > 0; sRow--)
  {
    for (int sCol = tSpace; sCol > 0; sCol--)
    {
      cout << "_";
    }
    for (int i = tNum; i > 0; i--)
    {
      cout << tempN;
    }
    cout << endl;
    tSpace++;
    tNum--;
    tNum--;
    tempN--;
  }
  // end

  // start
  for (int mSpace = n; mSpace > 0; mSpace--)
  {
    cout << "_";
  }
  cout << n;
  cout << endl;
  for (int mSpace = n; mSpace > 0; mSpace--)
  {
    cout << "_";
  }
  cout << n;
  cout << endl;
  // end

  // start
  int tempS = n - 1;
  int o = 1;
  int tempC = o + 2;

  for (int rows = n - 1; rows > 0; rows--)
  {
    for (int cols = tempS; cols > 0; cols--)
    {
      cout << "_";
    }

    for (int j = tempC; j > 0; j--)
    {
      cout << o;
    }

    cout << endl;
    tempS--;
    o++;
    tempC++;
    tempC++;
  }

  for (int last = result; last > 0; last--)
  {
    cout << n;
  }
}