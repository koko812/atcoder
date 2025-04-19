#include <string>
#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main()
{
    string s, ans;
    int N  = 0;
    cin >> N;
    queue<int> q;

    int n=0;
    int m = 0;
    for(int i=0; i<N; i++){
        cin>>n;
        if(n==1){
            cin>>m;
            q.push(m);

        }else{
            cout<<q.front()<<endl;
            q.pop();
        }
    }

}