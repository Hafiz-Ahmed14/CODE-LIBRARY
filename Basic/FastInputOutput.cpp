#include<bits/stdc++.h>
using namespace std;


int main()
{    
    ios_base::sync_with_stdio(0);cin.tie(0); 

    // using endl and there first go to buffer then at the time it is flush
    // for(int i = 1; i <= 10; i++) {
    //     cout << i << endl;
    //     this_thread::sleep_for(chrono::seconds(1));
    // }


    // using \n and there first go to buffer then flush it all the value at a time
    // for(int i = 1; i <= 10; i++) {
    //     cout << i << '\n;
    //     this_thread::sleep_for(chrono::seconds(1));
    // }

    // Check the program execuation time
    clock_t st = clock();
    int n = 1e9;
    long long sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    clock_t en = clock();

    cout << 1.0 << (en - st) / CLOCKS_PER_SEC << "s\n;"
            
    return 0;
}
