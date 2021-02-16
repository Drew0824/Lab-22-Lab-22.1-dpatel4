#include <iostream>
using namespace std;

/*    Intro to arrays
Step 1: Modify the program for 4 array elements instead of 2. There are comments in the code where you should be adjusting/adding code.

Step 2: Now modify the code to allow the user to input 4 numbers that get stored in the array. For example, to store the first number you could use a statement like:
cin >> numbers[0];
*/

int main() {
  // Modify the numbers array to hold 4 elements
  int numbers[4];
  cout << "Input 4 numbers" << endl;
  cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3];
  // Fill in code to also store the numbers 3 and 4 in the third and fourth array elements.

  cout << "\nThe numbers are:\n";
  cout << numbers[0] << endl;
  cout << numbers[1] << endl;
  cout << numbers[2] << endl;
  cout << numbers[3] << endl;
  // Fill in code to display the third and fourth numbers.

}