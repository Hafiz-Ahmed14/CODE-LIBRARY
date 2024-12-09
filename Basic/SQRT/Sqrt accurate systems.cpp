#include<bits/stdc++.h>
using namespace std;


int main()
{    
    // sqrt accurate systems

    ll n = 1e9;
    //ll ans = sqrt(n); // for integer
    ll ans = sqrtl(n); // for long long
    while(ans * ans <= n) ans++;
    while(ans * ans > n) ans--;
            
    return 0;
}
