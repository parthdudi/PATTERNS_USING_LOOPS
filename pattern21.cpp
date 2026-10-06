/*
REQUIRED OUTPUT

****

*  *

*  *

*  *

****

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    int j;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (j = 0; j < n - 1; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (j = 1; j < n; j++)
            {
                if (j == 1 || j == n - 1)
                {
                    cout << "*";
                }
                else
                    cout << " ";
            }
        }

        cout << "\n\n";
    }
    return 0;
}
/*
Time complexity: O(n^2)
space complexity : O(3)
*/