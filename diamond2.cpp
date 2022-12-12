#include <iostream>
using namespace std;
/*
Input: 5

_____5
____444
___33333
__2222222
_111111111
55555*55555
_111111111
__2222222
___33333
____444
_____5
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
