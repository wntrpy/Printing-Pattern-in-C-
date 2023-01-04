#include <iostream>
using namespace std;
/*
555555555
4___4___4
3___3___3
2___2___2
1111*1111
2___2___2
3___3___3
4___4___4
555555555
*/

int main()
{
  int n;
  cout << "Num: ";
  cin >> n;

  // star
  int result = n * 2 - 1;

  for (int first = result; first > 0; first--)
  {
    cout << n;
  }
  cout << endl;
  // end

  // start
  int q = n - 1;

  for (int i = n - 2; i >> 0; i--)
  {
    cout << q;
    for (int space = n - 2; space > 0; space--)
    {
      cout << "_";
    }
    cout << q;
    for (int space = n - 2; space > 0; space--)
    {
      cout << "_";
    }
    cout << q;
    cout << endl;
    q--;
  }
  // end

  // start
  for (int mid = n - 1; mid > 0; mid--)
  {
    cout << "1";
  }
  cout << "*";
  for (int mid = n - 1; mid > 0; mid--)
  {
    cout << "1";
  }
  cout << endl;
  // end

  // start
  int temp = 2;

  for (int i = n - 2; i >> 0; i--)
  {
    cout << temp;
    for (int space = n - 2; space > 0; space--)
    {
      cout << "_";
    }
    cout << temp;
    for (int space = n - 2; space > 0; space--)
    {
      cout << "_";
    }
    cout << temp;
    cout << endl;
    temp++;
  }
  // end

  // start
  for (int last = result; last > 0; last--)
  {
    cout << n;
  }
}