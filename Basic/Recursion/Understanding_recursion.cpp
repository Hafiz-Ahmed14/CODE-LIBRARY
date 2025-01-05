
#include<bits/stdc++.h>
using namespace std;

int sum(int n) {
    cout << "We are at n = " << n << '\n';
    if(n == 0) {
        cout << "do not need to go further\n";
        cout << "Return 0 from function with n " << n << '\n';
        return 0;
    }
    int res = sum(n - 1) + n;
    cout << "returning " << res << "from function with n = " << n << '\n';
    return res;
}
int main()
{    
    cout << sum(5) << '\n'; 
            
    return 0;
}
