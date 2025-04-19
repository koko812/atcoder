#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string s, ans;
    cin >> s;
    ans = "";

    for(int i=0; i<s.length(); i++){
        if(std::isupper(s[i])){
            ans += s[i];
        }
    }
    cout << ans << endl;

}