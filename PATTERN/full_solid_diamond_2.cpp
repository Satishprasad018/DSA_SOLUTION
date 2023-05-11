/*full solid diamond pattern
     *
    ***
   *****
  *******
 *********
***********
 *********
  *******
   *****
    ***
     *
*/

#include<iostream>
using namespace std;
int main()
{
    int n=6 ;
    for (int i = 0; i < n; i++)
    {
       for (int r = 0; r < n-i-1; r++)
       {
          cout<<" " ;
       }
       for (int c = 0; c < 2*i+1; c++)
       {
          cout<<"*";
       }
       cout<<"\n" ;
    }
    int  co=n-1 ;
    for (int j = 0; j < co; j++)
    {
       for (int r = 0; r < j+1; r++)
       {
          cout<<" " ;
       }
       for (int c = 0; c < 2*co-2*j-1; c++)  //2*(co-j)-1
       {
          cout<<"*";
       }
       cout<<"\n" ;
    }
    
}