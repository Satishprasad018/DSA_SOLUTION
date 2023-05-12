/* numeric pattern 1
    1
   232
  34543
 4567654
567898765
*/

#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<<i+j+1 ;
        }
        for (int j = 0; j < i; j++)
        {
            cout<<2*i-j ;
        }
        
        
        cout << endl;
    }
}