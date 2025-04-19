#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string s;
    int n, k = 0;
    cin >> n >> k;
    cin >> s;
    s = '.' + s + '.';
    int cnt = 0;
    int ocnt = 0;

    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] == 'o')
        {
            s[i - 1] = '.';
            s[i + 1] = '.';
            ocnt ++;
        }
    }

    for (int i = 1; i < s.size() - 1; i++)
    {
        if(s[i] == '?') cnt++;
    }
    //cout << s << endl;
    cout<<k<<cnt<<ocnt<<endl;

    if ((k-ocnt)==cnt)
    {
        for (int i = 1; i < s.size() - 1; i++)
        {
            if (s[i] == '?')
            {
                s[i] = 'o';
            }
        }
    }

    string ans = "";
    for (int i = 1; i < s.size() - 1; i++)
    {
        ans += s[i];
    }

    std::cout << ans << endl;
}