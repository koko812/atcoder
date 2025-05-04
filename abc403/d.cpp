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
    ll n,m,q; cin>>n>>m>>q;
    vector<unordered_set<ll> > ch(210000);

    for (int i = 0; i < q; i++){
        ll t,x,y; cin>>t;
        if(t==1){
            cin>>x>>y;
            ch[x].insert(y);
        }
        else if(t==2){
            cin>>x;
            ch[x].insert(0);
        }
        else if(t==3){
            cin>>x>>y;
            if(ch[x].find(0)!=ch[x].end()){
                cout<<"Yes"<<endl;
            }else if(ch[x].find(y)!=ch[x].end()){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
}