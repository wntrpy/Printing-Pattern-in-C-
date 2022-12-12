#include <iostream>
using namespace std;
/*
Input: 5

_____5
____444
___33333
__2222222
_111111111
55555555555
_111111111
__2222222
___33333
____444
_____5
*/

void createDiamon(int n)
{
  cout << "Num: ";
  cin >> n;

  int tS = n;
  int temp = n;
  int tNum = 1;
  // start
  for (int spR = tS; spR > 0; spR--)
  {
    for (int spC = spR; spC > 0; spC--)
    {
      cout << "_";
    }
    for (int i = tNum; i > 0; i--)
    {
      cout << temp;
    }
    cout << endl;
    temp--;
    tNum++;
    tNum++;
  }
  // end

  // start
  for (int m = n; m > 0; m--)
  {
    cout << n;
  }
  cout << "*";
  for (int m = n; m > 0; m--)
  {
    cout << n;
  }
  cout << endl;
  // end

  int tSp = 1;
  int r = n * 2 - 1;
  int v = 1;

  for (int row = n; row > 0; row--)
  {
    for (int col = tSp; col > 0; col--)
    {
      cout << "_";
    }
    for (int u = r; u > 0; u--)
    {
      cout << v;
    }

    cout << endl;
    tSp++;
    v++;
    r--;
    r--;
  }
}

int main()
{
  createDiamon(5);
}