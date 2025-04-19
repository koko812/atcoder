#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int N = 0;
    cin >> N; 
    bool login = 0;
    int cnt = 0;
    
    for(int i =0; i<N; i++){
        string s;
        cin >> s;
        if(s == "login"){
            login = 1;
        }else if(s == "logout"){
            login = 0;
        }
        if(s == "private"){
            if(!login){
                cnt ++;
            }
        }
    }
    
    cout << cnt << endl;
}