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
    int n; cin>>n;
    char s[n][n];
    char t[n][n];

    // こういう代入の関数は作っておいた方がいい？かもだが，パターンが多彩すぎてむずいような気もする
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>s[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>t[i][j];
        }
    }

    vector<int> cnts(4,0);
    cnts[1] += 1;
    cnts[2] += 2;
    cnts[3] += 3;

    //cnt
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(s[i][j]!=t[i][j]){
                cnts[0]++;
            }
        }
    }
    
    // rotate
    char ss[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ss[i][j] = s[n-j-1][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s[i][j] = ss[i][j];
            //cout<<ss[i][j];
        }
        //cout<<endl;
    }

    //cnt
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(s[i][j]!=t[i][j]){
                cnts[1]++;
            }
        }
    }


    // rotate
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ss[i][j] = s[n-j-1][i];
            //cout<<ss[i][j];
        }
        //cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s[i][j] = ss[i][j];
        }
    }

    //cnt
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(s[i][j]!=t[i][j]){
                cnts[2]++;
            }
        }
    }

    // rotate
    // 妖怪一回転足りない事件が発生した
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ss[i][j] = s[n-j-1][i];
            //cout<<ss[i][j];
        }
        //cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s[i][j] = ss[i][j];
        }
    }

    //cnt
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(s[i][j]!=t[i][j]){
                cnts[3]++;
            }
        }
    }

    sort(cnts.begin(), cnts.end());
    cout<<cnts[0]<<endl;
}