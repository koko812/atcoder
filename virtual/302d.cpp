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

    // あかんこの問題も気狂いみたいにむずすぎてきつい
    // 単純に組み合わせ前列挙だと死ねるし，
    // かといって，それぞれの商品の価値がデカすぎて，配列に入れたりもできなくてそれもかなりきつい
    // ソートしてバイナリーサーチかな？とか思ったんだけど，それもキツい．（実装が）
    // いやまあ正直全部きつすぎなので，一旦解説を読むクソムーブをかましましょうか

    // バイナリーサーチなんてことはしなくても，普通にけつからとっていくだけでいいらしい
    // 商品の価値とかは考えず，脳筋ムーブでいけてしまうらしいくて萎えぽよピーナッツ
    // まあそういうことが世の常として捉えられる説もなくはない
    // けつからとっていくだけでも，確かにそれぞれは 2*10^5 なので，2倍するだけなので余裕になってしまうというわけ
    // マジでこの解放を思いついたやつが天才すぎて萎えてしまう

    // で，値の操作をするときは，けつからのほうが削除時間とかを考えるといいらしくて，まあ当たり前か
    ll n, m, d;
    cin >> n >> m >> d;

    vector<ll> a;
    vector<ll> b;

    for (int i = 0; i < n; i++)
    {
        ll buf;
        cin >> buf;
        a.push_back(buf);
        /* code */
    }

    for (int i = 0; i < m; i++)
    {
        ll buf;
        cin >> buf;
        b.push_back(buf);
        /* code */
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // end　をつけると怒られた．
    // end と back の違いがわからない今日この頃

    // cout<<a.back()<< endl;
    //  末尾参照をとっていって外していくみたいな動作って結局どういうことなの，って感じがしてる
    //  俺の解放はどの辺が不味かったのか，その辺の判断がつくようにしておきたいけど，まあ今すぐにはキツいか

    bool flag = true;
    ll ans = -1;

    while (flag)
    {
        if (a.empty() || b.empty())
            break;
        ll ae = a.back();
        ll be = b.back();
        ll diff = abs(ae - be);
        if (diff <= d)
        {
            flag = false;
            ans = ae + be;
            break;
        }
        if (ae >= be)
        {
            a.pop_back();
        }
        else
        {
            b.pop_back();
        }
    }
    cout<<ans<<endl;

    // ソートしてから，けつからとっていく方式，是非とも覚えておこう
    // というかこれ，解いた問題を一回改めてまとめ直す時間みたいなのを作ったほうがいいかもしれないな？
    // ある程度キーワードつけながら，コードを残しておくといいかもしれない
    // まあそれができれば苦労ねえよという話なんだ

    // 不等号にイコール抜けてていっぱい，ll で定義し忘れててもういっぱい
    // まあ，回答見て，コードが欠けているというのは悪いことではないと思うけど
    // 思いつかなかったというのは普通に反省だよな

    // empty, back, pop_back もきちんと覚えとこう
    // この調子で頑張って，ダイクストラ法とか，最小全域技とかも実装できるようになってくると熱いですね？
}