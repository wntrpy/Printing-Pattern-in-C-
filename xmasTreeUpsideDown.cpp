#include <iostream>

using namespace std;

int main()
{
  int n;
  cout << "Num: ";
  cin >> n;

  for (int a = n / 4; a > 0; a--)
  {
    cout << "_";
  }
  for (int b = n / 2; b > 0; b--)
  {
    cout << "1";
  }
  cout << endl;

  for (int c = n / 2; c > 0; c--)
  {
    cout << "_";
  }
  cout << "1";
  cout << endl;

  for (int c = n / 2; c > 0; c--)
  {
    cout << "_";
  }
  cout << "1";
  cout << endl;

  for (int i = n; i > 0; i--)
  {
    cout << n;
  }
  cout << endl;

  int tempSpace = 1;
  int temp = n - 2;
  int tempNum = n - 2;

  for (int row = n / 2; row > 0; row--)
  {
    for (int col = tempSpace; col > 0; col--)
    {
      cout << "_";
    }
    for (int j = tempNum; j > 0; j--)
    {
      if (temp % 2 == 1)
      {
        cout << temp;
      }
    }
    cout << endl;
    tempSpace++;
    temp--;
    temp--;
    tempNum--;
    tempNum--;
  }
}