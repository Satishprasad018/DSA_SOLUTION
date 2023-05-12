/* numbered half inverted pyramid
1234567
123456
12345
1234
123
12
1
*/

#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "enter rows : ";
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j+1;
        }
        cout<<endl ;
    }
}