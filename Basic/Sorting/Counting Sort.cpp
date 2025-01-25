#include<bits/stdc++.h>
using namespace std;


int main()
{    
    int n; cin >> n;
    int a[n + 1];
    int mx = 0;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        int mx = max(mx, a[i]);
    } 

    int cnt[mx + 1];

    memset(cnt, 0, sizeof(cnt));

    for(int i = 1; i <= n; i++) {
        cnt[a[i]]++;
    }

    for(int i = 1; i <= mx; i++) {
        for(int i = 1; i <= cnt[i]; i++) {
            cout << i << " ";
        }
    } 
            
    return 0;
}
