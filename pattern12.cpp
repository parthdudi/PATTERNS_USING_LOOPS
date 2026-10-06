/*
REQUIRED OUTPUT

1        1
12      21
123    321
1234  4321
1234554321

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
       for ( j = 1; j <=i ; j++)
       {
        cout << j;
       }
       for ( j = i+1; j <=2*n-i ; j++)
       {
        cout << " ";
       }
       for ( j= i; j > 0; j--)
       {
         cout << j;
       }

       cout << "\n";     
    }
return 0;
}
/*
Time complexity: O(n^2)
space complexity : O(3)
*/