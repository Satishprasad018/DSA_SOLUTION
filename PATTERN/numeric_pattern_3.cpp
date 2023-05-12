/* numeric pattern 3 
      1 
     1 2
    1   3
   1     4
  1       5
 1         6
1 2 3 4 5 6 7
*/

#include <iostream>
using namespace std;
int main()
{
    int n = 7;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            if (i == 0 || i == 1 || i == n - 1 || j == 0 || j == i)
            {
                cout << j + 1<<" ";
            }
            else
            {
                cout<<"  " ;
            }
        }
        cout << endl;
    }
}