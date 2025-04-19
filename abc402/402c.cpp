#include <string>
#include <iostream>
#include <stdio.h>
#include <queue>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<unordered_set<int> > us_list;

    for (int i = 0; i < M; i++)
    {
        int n = 0;
        cin >> n;
        vector<int> buf;
        for (int j = 0; j < n; j++)
        {
            int tmp = 0;
            cin >> tmp;
            buf.push_back(tmp);
        }
        unordered_set<int> us(buf.begin(), buf.end());
        us_list.push_back(us);
    }
    /*
    for (auto it=us_list[1].begin(); it != us_list[1].end(); ++it)
    {
        std::cout<<"it" << *it << "\n";
    }*/

    for (int i = 0; i < N; i++)
    {
        int n = 0;
        cin >> n;
        int cnt = 0;
        for (int j = 0; j < us_list.size(); j++)
        {
            us_list[j].erase(n);
            // cout << us_list[i].empty() << endl;
            if (us_list[j].empty())
            {
                cnt++;
            }
            /*
            for (auto it=us_list[j].begin(); it != us_list[j].end(); ++it)
                {
                    std::cout<<"it" << *it << "\n";
                }
            }*/
        //cout << " -------------- " << endl;
    }
        cout<< cnt << endl;
}}