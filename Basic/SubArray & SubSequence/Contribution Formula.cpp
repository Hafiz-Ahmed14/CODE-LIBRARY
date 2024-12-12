#include<bits/stdc++.h>
using namespace std;


int main()
{    
    
    //  contribution formula

    // 1 -- n  all pair sum 
    // 2 * n * a[i];

    // 1 -- n all pair multiply sum
    // a[i] * total_sum

    // 1 -- n all pair multiply multiply
    // a[i] * 2 ^ n;
    // a[i] ^ 2n;

    // all sub array sum 
    // a[i] * i * n - i + 1;

    // all subset sum
    // a[i] * 2 ^ n - 1

    // all subset min max sum
    // ans += (a[j] - a[i]) * (1 << (j - i - 1));


    // Subarry sum with multiply length
    // int cntribution = s(i, n) * i - (n - i + 1) * s(1, i) + (n - i + 1) * i;
    // ans += a[i] * cntribution;
            
    return 0;
}
