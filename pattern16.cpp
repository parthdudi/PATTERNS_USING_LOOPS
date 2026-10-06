/*
REQUIRED OUTPUT

A
BB
CCC
DDDD
EEEEE

*/

#include <iostream>
using namespace std;

int main()
{
    int n;int a = 1;
    int i;
    char j;
    cin >> n;

    for (i = 1; i <= n; i++)
    {  
       for ( j = 64+ i ; a<=i ;)
       {
        cout << j ;
        a++;
       }
       a=1;
       cout << "\n";     
    }
return 0;
}
/*
Time complexity: O(n^2)
space complexity : O(3)
*/ 