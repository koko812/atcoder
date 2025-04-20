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
    int n, w;
    cin >> n >> w;
    ll memo[200000];
    
    for (int i = 0; i <= w; i++)
    {
        memo[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        ll a,b;
        cin >> a >> b;
        for(int j = w; j >= a; j--){
            ll rep = memo[j-a] + b;
            if (rep > memo[j])
            {
                memo[j] = rep;
            }
            
        }
    }
    cout << memo[w] << endl;