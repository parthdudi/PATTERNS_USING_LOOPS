/*
REQUIRED OUTPUT

A B C D E 
A B C D 
A B C 
A B 
A 

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    char j;
    cin >> n;

    for (i = n; i >0; i--)
    {
       for ( j = 65; j < 65+i; j++)
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