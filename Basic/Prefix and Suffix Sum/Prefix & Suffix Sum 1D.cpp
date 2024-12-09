//Code:
#include<bits/stdc++.h>
using namespace std;


int main()
{    
    // suffix sum
    ll suffix[n + 2];
    suffix[n + 1] = 0;
    for(int i = n; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + a[i];
    }
    

    //prefix sum 
    ll prefix[n + 1];
    prefix[0] = 0;
    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + a[i];
    }
 
            
    return 0;
}
