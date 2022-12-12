#include <iostream>
using namespace std;
/*
Input: 5
__1
_333
55555
_333
__1


Input: 7
___1
__333
_55555
7777777
_55555
__333
___1
*/

int main()
{
  int n;
  cout << "Num: ";
  cin >> n;

  int temp = 1;
  int tempS = n / 2;

  for (int i = tempS; i > 0; i--)
  {
    for (int j = i; j > 0; j--)
    {
      cout << "_";
    }
    for (int k = temp; k > 0; k--)
    {
      cout << temp;
    }
    cout << endl;
    tempS--;
    temp++;
    temp++;
  }

  for (int m = n; m > 0; m--)
  {
    cout << n;
  }
  cout << endl;

  int tempSp = 1;
  int v = n - 2;

  for (int r = n / 2; r > 0; r--)
  {
    for (int ro = tempSp; ro > 0; ro--)
    {
      cout << "_";
    }

    for (int h = v; h > 0; h--)
    {
      cout << v;
    }
    cout << endl;
    tempSp++;
    v--;
    v--;
  }
}
