/*
REQUIRED OUTPUT

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

*/

# include <iostream>
using namespace std;

int main(){
    int i;int j;int n; 
    cin >> n;
    for (i = 1; i <n+1; i++)
    {
        for ( j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    

    return 0;
}

/*
Time complexity: O(n^2)
space complexity : O(3)
*/