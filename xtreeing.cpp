#include <iostream>
using namespace std;
/*
Input: 7
______1
_____2*2
____3***3
___4*****4
__5*******5
_6*********6
7777777777777
______1
______1
___1111111
*/

int main()
{
  int n;
  cout << "Input: ";
  cin >> n;

  // start
  for (int firstSp = n - 1; firstSp > 0; firstSp--)
  {
    cout << "_";
  }

  int one = 1;
  cout << one;
  cout << endl;
  // end

  // start
  int temp = 2;
  int tempStar = 1;

  for (int spRow = n - 2; spRow > 0; spRow--)
  {
    for (int spCol = spRow; spCol > 0; spCol--)
    {
      cout << "_";
    }
    for (int nextNum = 1; nextNum > 0; nextNum--)
    {
      cout << temp;
      for (int star = tempStar; star > 0; star--)
      {
        cout << "*";
      }
      cout << temp;
    }
    cout << endl;
    temp++;
    tempStar++;
    tempStar++;
  }
  // end

  // start
  int a = n * 2 - 1;
  for (int lower = a; lower > 0; lower--)
  {
    cout << n;
  }
  cout << endl;
  // end

  // start
  int b = n - 1;
  for (int trunk = b; trunk > 0; trunk--)
  {
    cout << "_";
  }
  cout << one;
  cout << endl;

  for (int trunk = b; trunk > 0; trunk--)
  {
    cout << "_";
  }
  cout << one;
  cout << endl;
  // end

  // start
  int q = n / 2;

  for (int lastSp = q; lastSp > 0; lastSp--)
  {
    cout << "_";
  }
  for (int lastNum = n; lastNum > 0; lastNum--)
  {
    cout << one;
  }
  // end
}
