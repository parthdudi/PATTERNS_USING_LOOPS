/*
REQUIRED OUTPUT

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

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
        if (i % 2 == 0) // start with 0
        {
            for (j = 1; j <= i; j++)
            {
                if (j % 2 == 0)
                {
                    cout << "1 ";
                }
                else
                    cout << "0 ";
            }
        }
        else // start with 1
            for (j = 1; j <= i; j++)
            {
                if (j % 2 == 0)
                {
                    cout << "0 ";
                }
                else
                    cout << "1 ";
            }

        cout << "\n";
    }

    return 0;
}
/*
Time complexity: O(n^2)
space complexity : O(3)
*/