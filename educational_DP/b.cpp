#include <string>
#include <iostream>
#include <stdio.h>
#include <queue>
#include <unordered_set>
#include <vector>
#include <iterator>
#include <math.h>

using namespace std;
typedef long long ll;

int main()
{
    int h, k;
    cin >> h >> k;
    int n[110000];
    ll memo[110000];
    for (int i = 1; i <= h; i++)
    {
        cin >> n[i];
        memo[i] = 10000000000;
    }

    memo[1] = 0;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            ll next = memo[i] + abs(n[i] - n[i + j]);
            if (memo[i + j] > next)
            {

                memo[i + j] = next;
            }
        }
    }
    std::cout << memo[h];
}