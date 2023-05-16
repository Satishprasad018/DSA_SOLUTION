/*
    1
   121
  12321
 1234321
123454321

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
            cout << (" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        for (int j = 0; j < i; j++)
        {
            cout << i - j;
        }
        cout << endl;
    }
}