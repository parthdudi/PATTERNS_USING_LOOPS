/*
REQUIRED OUTPUT

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    int j;
    cin >> n;

    for (i = 0;i< n; i++)
    {  
       for ( j = 1; j <= n-i; j++)
       {
       cout << "*";
       }
       for ( j = 0; j < 2*i ; j++)
       {
        cout << " ";
       }
       for ( j = n-i; j >0; j--)
       {
        cout << "*";
       }
       cout << "\n";     
    }
    for ( i = 1; i <= n; i++)
    {
        for ( j = 0; j < i; j++)
        {
            cout << "*";
        }
        for ( j = 0; j < 2*(n-i); j++)
        {
            cout << " ";
        }
        for ( j = 1; j <=i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
return 0;
}
/*
Time complexity: O(n^2)
space complexity : O(3)
*/