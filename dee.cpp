#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many elements do you want to enter \n";
    cin >> n;
    int *arr = new int;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter "
             << "(" << n << ")"
             << " element";
        cin >> arr[i];
    }
    int sum;
    cout << "Enter the sum you want to find : ";
    cin >> sum;

    int current_sum;
    for (int i = 0; i < n; i++)
    {
        current_sum = arr[i];

        for (int j = i + 1; j <= n; j++)
        {
            if (current_sum == sum)
            {
                cout << "Sum found between index " << i << " and" << j - 1;
            }
            if (current_sum > sum || j == n)
            {
                break;
            }
            current_sum = current_sum + arr[j];
        }
    }
}
