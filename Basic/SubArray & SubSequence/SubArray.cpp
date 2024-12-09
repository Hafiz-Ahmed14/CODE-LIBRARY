Code: 

#include<bits/stdc++.h>
using namespace std;


int main()
{    
    // Generating Subarray 
    for(int l = 0; l < n; l++) {
     for(int r = l; r < n; r++) {
         for(int i = l; i <= r; i++) {
             cout << a[i] <<" ";
         }
         cout << nl;
     }
    }


    // Generating Subsequence
    for(int mask = 0; mask < (1 << n); mask++) {
     for(int i = 0; i < n; i++) {
         if((mask>>i) & 1) {
             cout << a[i] <<" ";
         }
     }
     cout << nl;
    }

    // subarry sum
    ll max_sum = -1e18;
    for(int l = 0; l < n; l++) {
     ll current_sum = 0;
     for(int r = l; r < n; r++) {
         current_sum += a[r];
         max_sum = max(max_sum, current_sum);
     }
    }
    cout << max_sum << nl;

    // subarray sum optimize
    ll max_sum = -1e18;
    ll max_sum_so_far = -1e18;

    for(int l = 0; l < n; l++) {
     max_sum_so_far = max((ll)a[l], a[l] + max_sum_so_far);
     max_sum = max(max_sum, max_sum_so_far);
    }

    cout << max_sum << nl;
            
    return 0;
}
