/* floyds pattern
1
23
456
78910
1112131415
161718192021
22232425262728
*/
#include <iostream>
using namespace std;
int main()
{
    int n = 7,c=1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<c<<" " ;
            c++ ;
        }
        cout<<endl ;
    }
    
}