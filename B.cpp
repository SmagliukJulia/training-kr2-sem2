#include <iostream>
using namespace std;

int R[21];
int main()
{
    int n;
    cin >> n;
    R[1] = 3;
    R[2] = 8;
    for (int i = 3; i <= n; i++)
    {
        R[i] = (2 * R[i - 1] + 2 * R[i - 2]);
    }

    cout << R[n] << '\n';
    return 0;
}
