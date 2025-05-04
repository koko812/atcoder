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
    int n;
    int sum=0;

    cin>>n;
    for(int i=0; i<n; i++){
        int buf; cin>>buf;
        if(i%2==0){
            sum+=buf;
        }
    }
    cout<<sum;
}