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
    string t, u;
    cin >> t >> u;

    bool flag = 0;
    for (int i = 0; i < t.length(); i++)
    {
        //std::cout << i << endl;
        if (i + u.length() > t.length())
        {
            //std::cout << "over" << ' ' << i << endl;
            break;
        }
        if (!(t[i] == '?' || u[0] == t[i]))
        {
            //std::cout << "hatena" << endl;
            continue;
        }
        for (int j = 0; j < u.length(); j++)
        {
            //std::cout << t[i + j] << ' ' << u[j] << endl;
            if (!(t[i + j] == u[j] || t[i + j] == '?'))
            {
                //std::cout << "non" << endl;
                break;
            }
            if (j == u.length() - 1)
            {
                //std::cout << u.length();
                flag = 1;
            }
        }
        if (flag)
            break;
    }

    if (flag)
    {
        std::cout << "Yes" << endl;
    }
    else
    {
        std::cout << "No" << endl;
    }
}