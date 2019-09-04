#include <iostream>
using namespace std;
int main()
{
    int t;

    cin >> t;
    for (int i = 0; i < t; i++)
    {

        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = i; j >= 0; j--)
            {

                if (a[j] <= a[i])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            b[i] = count;
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}