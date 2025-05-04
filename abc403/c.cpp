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
    // 待ってマジでわからなくてやばい
    // 10 3
    // 1 6 2 10 2 3 2 10 6 4
    // この場合どうすればいい？とりあえずソートする
    // 1 2 2 2 3 4 6 6 10 10
    // とりあえず消さなくていいやつは除外
    // この場合，3 か 6 しかない，否， 1 と 4 もあった
    // でこれらの組み合わせのうち，少ない方を消したらいいだけ
    // ただ，複数重なってきてる場合はどうしたらいいのかという話
    // 貪欲にやっていいのかが謎すぎる，プラマイ勘定ででかい順から消していけばいいのかという話
    // いやまあそれはそれでいい気がするわ，で，毎回値が変わるのをソートしていけばいいだけの話
    // いや違う，最後だけは，消す数が少ないのを優先して消したいか
    // いや違う，これは結局のところ D のやつが0個にならないと仕方ないので，どうすれないいんだ
    // 1 2 2 2 3 4 6 6 9 9 9 10 10 12 12  とかなってたらどうする？
    // 結局のところ，ある等差数列ごとにしか考えないから，どんな順番でやっても同じか，
    // その等差数列内で，どれだけ消す数を減らせるかという話で
    // で，それは普通に貪欲にやっても大丈夫なはず（願望）
    // それで実装しましょう（普通に実装がきつい)
    // こういう，貪欲でいいのかよくないかの判断を高速でできるようになりたい

    vector<int> a(1100000);
    vector<int> dif(1100000);
    vector<pair<int,int> > ank(1100000);

    int n,d; cin>>n>>d;

    for (int i = 0; i < 1100000; i++)
    {
        a[i]=0; dif[i]=-1000000000;
    }
    
    for (int i = 0; i < n; i++)
    {
        int aa;cin>>aa;
        a[aa]++;
    }

    for(int i=0; i<1100000; i++){
        if(a[i]!=0) dif[i]=0;
        if(i-d>=0){
            dif[i]+=a[i-d];
        }
        if(i+d<=1100000){
            dif[i]+=a[i+d];
        }
    }
    
    for(int i=0; i<1100000; i++){
        if(dif[i]>0){
            pair<int,int> p;
            p.first=dif[i]-a[i];
            p.second=i;
            ank[i]=p;
        }
    }

    vector<pair<int,int> > nank = ank;
    sort(ank.begin(), ank.end());
}