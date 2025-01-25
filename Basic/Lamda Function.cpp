#include<bits/stdc++.h>
using namespace std;


int main()
{    
    // lamda function

    // [capture](parameters)-> return type {
    //     ... code
    // };

    // auto get_sum = [](int a, int b) -> int{
    //     return a + b;
    // };

    // auto return type
    // auto get_sum = [](int a, int b) {
    //     return a + b;
    // };

    //Capture by value
    // int value = 10;
    // auto get_sum = [=](int a, int b) {
    //     return a + b + value;
    // };

    // capture by reference
    // int x = 50;
    // auto get_sum = [&](int a, int b) {
    //     x += 40;
    //     return a + b + x;
    // };

    // capture many variable
    // int a = 5, b = 6;
    // auto get_sum = [x, &y](int a, int b) {
    //     y += 40;
    //     return a + b + x + y;
    // };

    // cout << get_sum(3, 5) << '\n'


    // Application of lamda function

    int n, m; cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    auto get_id = [](int i ,int j) {
        return i * m + j;
    };

    int ans[n * m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            ans[get_id(i, j)] = a[i][j];
        }
    }

    for(int i = 0; i < n * m; i++) {
        cout << ans << " ";
    }
            
    return 0;
}
