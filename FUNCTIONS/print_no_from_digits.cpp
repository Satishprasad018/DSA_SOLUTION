
#include <iostream>
using namespace std;
void printnum(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans * 10 + arr[i];
    }
    cout << ans;
}
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printnum(arr, n);
}