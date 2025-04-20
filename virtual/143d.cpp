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

// 普通にソートしてから解けばどうにかなるんじゃないかとか思ってるんだけど．
// 長さが限られてるので，配列のそのまま突っ込んでもいい模様．

// ダメだなんかこの解放じゃ限界をかんじる．
// 同じ数字がたくさんある時の鈍たんってどうしたらいいのか．
// 同じ数字群の最初にヒットするのか，最後にヒットするのかがわからん．一旦飛ばそう

//　なんか累積輪を使うのが勝ち筋らしい
// そんで，区間がどんどん絞られていくので，それをどうにかうまく扱いたいんだが，
// ちょっとペンがないと解けなさそうなのでやっぱりもう一回パスで
// 二重ループまで許容するという考え方は間違ってないらしい

int main()
{

    int N; cin>>N;
    //vector<int> l;
    int ls[1100];
    for (int i = 0; i < 1100; i++){
        ls[i] = 0;
    }
    

    for (int i = 0; i < N; i++)
    {
        int ll; cin>>ll;
        ls[ll] ++;
        //l.push_back(ll);
        /* code */
    }
    //sort(l.begin(), l.end())
    
}