#include <iostream>
using namespace std;
/*
Input: 5

_____1
____222
___33333
__4444444
_555555555
11111111111
_555555555
__4444444
___33333
____222
_____1
*/

void createPattern(int n)
{
  cout << "Num: ";
  cin >> n;

  int temp = 1;
  int track = 1;
  // start
  for (int spR = n; spR > 0; spR--)
  {
    for (int spC = spR; spC > 0; spC--)
    {
      cout << "_";
    }
    for (int i = track; i > 0; i--)
    {
      cout << temp;
    }
    cout << endl;
    temp++;
    track++;
    track++;
  }
  // end

  // start
  int r = n;

  for (int mid = r; mid > 0; mid--)
  {
    cout << "1";
  }
  cout << "*";

  for (int mid = r; mid > 0; mid--)
  {
    cout << "1";
  }
  cout << endl;
  // end

  // start
  int tSp = 1;
  int num = n;
  int counter = n * 2 - 1;

  for (int spR = n; spR > 0; spR--)
  {
    for (int spC = tSp; spC > 0; spC--)
    {
      cout << "_";
    }

    for (int j = counter; j > 0; j--)
    {
      cout << num;
    }
    cout << endl;
    tSp++;
    num--;
    counter--;
    counter--;
  }
}

int main()
{
  createPattern(5);
}
