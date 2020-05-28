#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int t;
    cout << "How much you wanna rotate ";
    cin >> t;

    int temp2[100];
    for (int i = 0; i < t; i++)
    {
        temp2[i] = arr[i];
    }
    int k = 0;

    for (int i = n - t; i < n; i++)
    {
        arr[k] = arr[i];
        k++;
    }
    for (int j = 0; j < k; j++)
    {
        arr[n] = temp2[j];
        n++;
    }

    for (int i = t; i < n; i++)
    {
        cout << arr[i];
    }
}