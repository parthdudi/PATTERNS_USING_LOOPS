/*
REQUIRED OUTPUT

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5 

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int size = 2 * n - 1;

    for(int i = 1; i <= size; i++) {
        for(int j = 1; j <= size; j++) {

            // Upper left triangle
            if(i <= n && j <= n) {
                if(j <= i)
                    cout << n - j + 1 << " ";
                else
                    cout << n - i + 1 << " ";
            }
            // Upper right triangle
            else if(i <= n && j > n) {
                if(j >= size - i + 1)
                    cout << j - n + 1 << " ";
                else
                    cout << n - i + 1 << " ";
            }
            // Lower left triangle
            else if(i > n && j <= n) {
                if(j <= size - i + 1)
                    cout << n - j + 1 << " ";
                else
                    cout << i - n + 1 << " ";
            }
            // Lower right triangle
            else {
                if(j >= i)
                    cout << j - n + 1 << " ";
                else
                    cout << i - n + 1 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

/*
Time complexity : O(n^2)
space complexity : O(4)
*/    