#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int M_E[30001];
int H[30001];
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) cin >> H[i];

    M_E[1] = 0;
    M_E[2] = abs(H[2] - H[1]);

    for (int i = 3; i <= n; i++)
    {
        M_E[i] = min(M_E[i - 2] + 3 * abs(H[i] - H[i - 2]), M_E[i - 1] + abs(H[i] - H[i - 1]));
    }

    cout << M_E[n] << '\n';
    return 0;
}
