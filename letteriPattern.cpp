#include <iostream>
using namespace std;

/*
Num: 5

    O

    |
    |
    |
    |

*/

int main()
{
  int n;
  cout << "Num: ";
  cin >> n;

  for (int first = n - 1; first > 0; first--)
  {
    cout << " ";
  }
  cout << "O";
  cout << "\n\n";
  // end

  int a = n - 1;

  for (int i = a; i > 0; i--)
  {
    for (int j = a; j > 0; j--)
    {
      cout << " ";
    }
    cout << "|";
    cout << endl;
  }
}