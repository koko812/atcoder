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
#include <set>

using namespace std;
typedef long long ll;

// 回転ごとに差を調べていけばOKなはず
// 回転と塗り合わせの動作は独立なので
// (この辺を数学的に証明したいところ)
// 差を求める関数の書き方がいまいちわからん
// xor とか取れればスマートなんだがまあそうもいかなさそうなので，愚直にとこう
// 回転の動作もよくわからんが，これも python とかでスマートに書けたら嬉しいんだがね
// 関数で作るとして，配列を全コピーせずにやる方法とかあるんだろうか，できれば参照渡しみたいあんことがしたい
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> > g(n+100);

    bool flag = false;
    string ans = "No";
    if (n != m)
    {
        flag = true;
    }
    //cout<<n<<m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
        if (g[a].size() > 2 || g[b].size() > 2)
        {
            flag = true;
        }
    }

    //cout<<n<<m;
    vector<int> visitList(n + 10, 0);
    int v = 1;
    visitList[1] = 1;
    for (int i = 0; i < m - 1; i++)
    {
        int nv = 0;
        for (int i =0; i< g[v].size(); i++)
        {
            if (!visitList[g[v][i]])
            {
                nv = g[v][i];
            }
        }
        if (!nv)
        {
            flag=true;
        }
        v = nv;
        visitList[v] = 1;
    }
    if (v == 1 || !flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << ans << endl;
    }
}