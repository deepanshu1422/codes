#include <iostream>
using namespace std;
int main()
{

    int *a = new int;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "value at " << i << " is"
             << " " << a[i] << " " << sizeof(a) << "\n";
    }
}