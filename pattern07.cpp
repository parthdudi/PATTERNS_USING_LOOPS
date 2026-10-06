/*
REQUIRED OUTPUT



    *
   ***
  *****
 *******
*********


*/

#include <iostream>
using namespace std;

int main()
{
    int i;
    int a;
    int b;
    int j;
    int n;
    cin >> n;
    for (i = 0; i < n; i++)
    {

        for (a = 0; a < (n - i - 1); a++)
        {
            cout << " ";
        }
        for (j = 0; j < (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (b = 0; a < (n - i - 1); b++)
        {
            cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
/*
Time complexity: O(n^2)
space complexity : O(5)
*/