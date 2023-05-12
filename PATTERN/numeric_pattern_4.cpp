/* numeric pattern 4 
1 2 3 4 5 
2     5
3   5
4 5
5
*/

#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (i == 0 || i == n-1 || i == n - 2 || j == 0 || j == n-i-1)
            {
                cout << i+j+1<<" " ;
            }
            else
            {
                cout<<"  " ;
            }
        }
        cout << endl;
    }
}