/*
REQUIRED OUTPUT

    A   
   ABA   
  ABCBA   
 ABCDCBA   
ABCDEDCBA   

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    char j;
    int a=1;
    cin >> n;

    for (i = 1; i <= n; i++)
    {  
       for ( j = 0; j < n-i; j++)
       {
        cout << " ";
       }
       a=1;
       for ( j = 65; a<=i;j++ )
       {
        cout << j;
        a++;
       }
        
       for ( j = 65+i-2; j >= 65; j--)
       {
        cout << j;
       }
       for ( j = n+1; j < 2*n-1; j++)
       {
        cout << " ";
       }
       cout << "\n";     
    }
return 0;
}
/*
Time complexity: O(n^2)
space complexity : O(4)
*/