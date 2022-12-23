#include <iostream>
using namespace std;
/*
Num: 5

5555555555
4444  4444
333    333
22      22
1        1
1        1
22      22
333    333
4444  4444
5555555555

*/

int main()
{
  int n;
  int one = 1;
  cout << "Num: ";
  cin >> n;

  // start
  for (int first = n * 2; first > 0; first--)
  {
    cout << n;
  }
  cout << endl;
  // end

  // start
  int a = n - 1;
  int tSp = 2;

  for (int i = n - 1; i > 0; i--)
  {
    for (int j = a; j > 0; j--)
    {
      cout << a;
    }

    for (int k = tSp; k > 0; k--)
    {
      cout << " ";
    }

    for (int j = a; j > 0; j--)
    {
      cout << a;
    }
    cout << endl;
    a--;
    tSp++;
    tSp++;
  }
  // end

  // start
  int temp = 1;
  int res = n * 2 - 2;

  for (int i = n - 1; i > 0; i--)
  {
    for (int j = temp; j > 0; j--)
    {
      cout << temp;
    }

    for (int space = res; space > 0; space--)
    {
      cout << " ";
    }

    for (int j = temp; j > 0; j--)
    {
      cout << temp;
    }
    cout << endl;
    temp++;
    res--;
    res--;
  }
  // end

  // start
  for (int last = n * 2; last > 0; last--)
  {
    cout << n;
  }
  cout << endl;
  // end
}