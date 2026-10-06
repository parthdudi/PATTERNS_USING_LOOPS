/*
REQUIRED OUTPUT

E
DE
CDE
BCDE
ABCDE

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    char j;
    cin >> n;

    for (i = 4; i >=0 ; i--)
    {  
       for ( j = 65+i; j <= 65+n ; j++)
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