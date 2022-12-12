#include <iostream>
using namespace std;
/*
Input: 5

----1
---333
--55555
-111*111
--55555
---333
----1
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
  int theNextVariableToBeUsed = n - 2;

  for (int r = n / 2; r > 0; r--)
  {
    for (int ro = tempSp; ro > 0; ro--)
    {
      cout << "_";
    }

    for (int h = theNextVariableToBeUsed; h > 0; h--)
    {
      cout << theNextVariableToBeUsed;
    }
    cout << endl;
    tempSp++;
    theNextVariableToBeUsed--;
    theNextVariableToBeUsed--;
  }
}