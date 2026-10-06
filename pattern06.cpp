/*
REQUIRED OUTPUT

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

#include <iostream>
using namespace std;

int main()
{
    int i;
    int j;
    int n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}
/*
Time complexity: O(n^2)
space complexity : O(3)
*/