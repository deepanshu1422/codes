#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int *a = new int;
    int *b = new int;
    cout << "How many elements do you want to enter \n";
    int n;
    cin >> n;
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int counter;
    while (a[i] > 0)
    {
        i++;
        counter++;
        cout << "dee";
    }

    int diff = n - counter;
    // if(diff>counter)
    // {

    // }

    i = 0;
    for (int k = 0; k < n; k++)
    {

        b[k] = a[i];
        i++;
        k++;
        b[k] = a[counter];
    }

    for (int i = 0; i < n; i++)
    {
        cout << b[i];
    }
}
