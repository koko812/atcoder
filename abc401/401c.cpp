#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

int fibo(int k)
{
    if(k < 1) return 1;
    long a = 1;
    long b = 1;
    long c = 0;
    long div = 1000000000;
    for (int i = 0; i < k+1; i++)
    {
        c = a+b;
        a = b%div;
        b = c%div;
    }
    return c%1000000000;
}

int main()
{
    int n,k = 0;
    cin >> n >> k;

    long long ans = fibo(n-k);

    std::cout << ans  << endl;
}