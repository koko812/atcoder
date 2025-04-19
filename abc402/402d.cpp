#include <string>
#include <iostream>
#include <stdio.h>
#include <queue>
#include <unordered_set>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> buf(1100000);
    
    for (int i = 0; i < buf.size(); i++)
    {
        buf[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        //cout<<a<<' '<<b<<endl;
        buf[(a + b) % n]++;
    }
    long long total =0;
    for (int i = 0; i < n; i++)
    {
        total += buf[i];
    }
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += buf[i]*(total-buf[i]);
    }
    cout << ans/2 << endl;
}