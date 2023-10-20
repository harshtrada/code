#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int temp;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int k = 2;; k++)
        {
            temp = (pow(2, k)) - 1;
            if (a[i] % temp == 0)
            {
                x = a[i] / temp;
                cout << x << endl;
                break;
            }
        }
    }
    return 0;
}
