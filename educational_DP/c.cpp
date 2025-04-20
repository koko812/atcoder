#include <string>
#include <iostream>
#include <stdio.h>
#include <queue>
#include <unordered_set>
#include <vector>
#include <iterator>
#include <math.h>
#include <algorithm>
#include <functional>
#include <cassert>

using namespace std;
typedef long long ll;

int main()
{
    int n, k;
    cin >> n;
    int memo[110000][3];
    for (int i = 0; i < n + 100; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            memo[i][j] = 0;
        }
    }

    cin >> memo[0][0] >> memo[0][1] >> memo[0][2];
    for (int i = 0; i < n - 1; i++)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        for (int j = 0; j < 3; j++)
        {
            memo[i + 1][j] = a[j] + max(memo[i][(j + 1) % 3], memo[i][(j + 2) % 3]);
        }
    }
    int ans = *max_element(begin(memo[n-1]), end(memo[n-1]));
        cout << ans << endl;
}