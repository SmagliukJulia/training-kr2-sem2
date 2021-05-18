#include <iostream>

using namespace std;

int R[18];
int main()
{
    int n;
    cin >> n;
    R[0] = 1;
    R[1] = 2;
    R[2] = 4;
    for (int i = 3; i <= n; i++)
    {
        R[i] = (R[i - 1] + R[i - 2] + R[i - 3]);
    }

    cout << R[n] << '\n';
    return 0;
}
