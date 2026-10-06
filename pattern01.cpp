/*
REQUIRED OUTPUT

* * * *
* * * *
* * * *
* * * *

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
        for (j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}
/*
Time complexity: O(n^2)
space complexity : O(3)
*/