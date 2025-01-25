#include<bits/stdc++.h>
using namespace std;


int main()
{    
    int n; cin >> n;
    int a[n + 1];

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    } 

    for(int i = 1; i <= n; i++) {
        int j = i - 1;
        while(j >= 1 and a[j] > a[i]) {
            a[j + 1] = a[i];
            j--;
        }
        a[j + 1] = a[i];
    }

    for(int i = 1; i <= n; i++) {
        cout << a[i] << ' ';
    } 
            
    return 0;
}
