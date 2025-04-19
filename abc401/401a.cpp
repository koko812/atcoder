#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int S = 0;
    string ans = "";
    cin >> S; 
    if(200<=S && S<=299){
        ans = "Success"; 
    }else{
        ans = "Failure";
    }
    cout << ans << endl;
}