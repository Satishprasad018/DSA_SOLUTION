//good example of while loop , for loop se logic samaz me nahi aata

#include <iostream>
using namespace std;
void printdigit(int n)
{
  while(n!=0)
  {
    int rem = n%10 ;
    cout<<rem<<" " ;
    n=n/10 ;
  }
}
int main()
{
    int n;
    cin >> n;

    printdigit(n);
}