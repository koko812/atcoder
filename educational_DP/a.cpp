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
    int h;
    cin >> h;
    int n[110000];
    ll memo[110000];
    for (int i = 1; i <= h; i++)
    {
        cin >> n[i];
        memo[i] = 10000000000;
    }

    memo[1] = 0;
    for (int i = 1; i <= h + 2; i++)
    {
        ll next = memo[i] + abs(n[i] - n[i + 1]);
        ll nnext = memo[i] + abs(n[i] - n[i + 2]);
        if (memo[i + 1] > next)
        {

            memo[i + 1] = next;
        }
        if (memo[i + 2] > nnext)
        {

            memo[i + 2] = nnext;
        }
    }
    std::cout << memo[h];
}