#include <iostream>
using namespace std;

int mid;
int x;
int search(int arr[], int ei, int x, int si = 0)
{
    if (ei >= si)
    {
        mid = (si + ei) / 2;
        if (x == mid)
        {

            return mid;
        }
        else if (x > mid)
        {

            return search(arr, ei, x, si = mid + 1);
        }
        else if (x < mid)
        {

            return search(arr, ei = mid - 1, x, si);
        }
    }
    return -1;
}

int main()
{
    cout << "How many elements you want to enter \n";
    int n;
    cin >> n;
    int *arr = new int;

    cout << "Enter" << n << "elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "What do you want to search";
    cin >> x;
    int ans;
    ans = search(arr, n, x, 0);

    cout << "Element found at " << ans;
}
