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
#include <set>

using namespace std;
typedef long long ll;

int main()
{
    char a = 'a';
    string buf; cin>>buf;
    set<char> alphaList;
    set<char> sList;
    set<char> result;

    char ans;
    for (int i = 0; i < 26; i++)
    {
        alphaList.insert(a+i);
        //std::cout<<alphaList[i]<<endl;
        /* code */
    }
    for (int i = 0; i < buf.length(); i++){
        sList.insert(buf[i]);
    }

    set_difference(alphaList.begin(), alphaList.end(), sList.begin(), sList.end(), inserter(result, result.end()));
    std::cout<< *result.begin()<<endl;
    
}