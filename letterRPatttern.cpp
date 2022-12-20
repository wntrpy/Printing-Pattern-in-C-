#include <iostream>
using namespace std;
/*
Num: 5

***
___
***
_
__
___

*/

int main()
{
  int n;
  cout << "Num: ";
  cin >> n;

  for (int first = n - 1; first > 0; first--)
  {
    cout << "*";
  }
  cout << endl;
  // end

  // start
  cout << "*";
  for (int i = n - 2; i > 0; i--)
  {
    cout << " ";
  }
  cout << "*";
  cout << endl;

  for (int first = n - 1; first > 0; first--)
  {
    cout << "*";
  }
  cout << endl;
  // end

  // start
  int a = n / 2 + 1;
  int tempSp = 1;
  int z = 1;

  for (int last = a; last > 0; last--)
  {
    cout << "*";

    for (int space = tempSp; space > 0; space--)
    {
      cout << " ";
    }

    for (int h = z; h > 0; h--)
    {
      cout << "*";
    }
    cout << endl;
    tempSp++;
  }
}