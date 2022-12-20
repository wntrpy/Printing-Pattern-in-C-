#include <iostream>
using namespace std;
/*
Num: 5

*****
  *
  *
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
  // end

  int a = n / 2;

  for (int i = a; i > 0; i--)
  {
    for (int j = a; j > 0; j--)
    {
      cout << " ";
    }
    cout << "*";
    cout << endl;
  }

  for (int first = n; first > 0; first--)
  {
    cout << "*";
  }
  cout << endl;
}