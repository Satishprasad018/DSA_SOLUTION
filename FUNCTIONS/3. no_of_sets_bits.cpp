#include <iostream>
using namespace std;

int setsbits(int n)
{
    int count = 0;

    while (n != 0)
    {
        if (n & 1 == 1)
        {
            count++;
        }

        n = n >> 1;
    }
    cout << "no. of sets bits are : " << count;
}
int main()
{
    int n;
    cin >> n;

    setsbits(n);
}
