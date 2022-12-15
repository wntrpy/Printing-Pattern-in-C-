#include <iostream>
using namespace std;
/*
Input: 5

*****
    1
   22
  333
 4444
55555
 4444
  333
   22
    1
*****
*/

int main()
{
  int n;
  cout << "Num: ";
  cin >> n;

  for (int first = n; first > 0; first--)
  {
    cout << "*";
  }
  cout << endl;

  int temp = 1;
  int tempS = n - 1;

  for (int i = tempS; i > 0; i--)
  {
    for (int j = i; j > 0; j--)
    {
      cout << " ";
    }

    for (int k = temp; k > 0; k--)
    {
      cout << temp;
    }
    cout << endl;
    temp++;
    tempS--;
  }

  for (int last = n; last > 0; last--)
  {
    cout << n;
  }
  cout << endl;

  int a = n - 1;
  int b = 1;

  for (int i = n - 1; i > 0; i--)
  {
    for (int j = b; j > 0; j--)
    {
      cout << " ";
    }

    for (int q = a; q > 0; q--)
    {
      cout << a;
    }
    cout << endl;
    b++;
    a--;
  }

  for (int d = n; d > 0; d--)
  {
    cout << "*";
  }
}