#include <iostream>
using namespace std;
/*
Input: 7 
7777777777777
6_____6_____6
5_____5_____5
4_____4_____4
3_____3_____3
2_____2_____2
111111*111111
2_____2_____2
3_____3_____3
4_____4_____4
5_____5_____5
6_____6_____6
7777777777777
*/

int main()
{
  int input;

  cout << "Input: ";
  cin >> input;
  // First Column
  int result = input * 2 - 1;

  for (int firstCol = result; firstCol > 0; firstCol--)
  {
    cout << input;
  }
  cout << "\n";

  // Upper Body
  int sourceCol = input - 1;
  int sourceSpace = input - 2;
  int counter = 2;

  for (int nextCol = sourceCol - 1; nextCol > 0; nextCol--)
  {
    cout << sourceCol;
    for (int remainingCol = counter; remainingCol > 0; remainingCol--)
    {
      for (int space = sourceSpace; space > 0; space--)
      {
        cout << "_";
      }
      cout << sourceCol;
    }
    sourceCol--;
    cout << "\n";
  }

  // Middle Part
  int one = 1;

  for (int middleCol = input - 1; middleCol > 0; middleCol--)
  {
    cout << one;
  }
  cout << "*";
  for (int middleCol = input - 1; middleCol > 0; middleCol--)
  {
    cout << one;
  }
  cout << "\n";

  // Lower Body
  int temp = 2;
  int sourceColumn = input - 2;

  for (int nextCol = sourceColumn; nextCol > 0; nextCol--)
  {
    cout << temp;
    for (int remainingCol = counter; remainingCol > 0; remainingCol--)
    {
      for (int space = sourceSpace; space > 0; space--)
      {
        cout << "_";
      }
      cout << temp;
    }
    temp++;
    cout << "\n";
  }

  // Last Column
  for (int lastCol = result; lastCol > 0; lastCol--)
  {
    cout << input;
  }
  cout << "\n";
}
