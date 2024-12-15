#include<bits/stdc++.h>
using namespace std;

//Define start and end marco
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0
#define int long long
#define pb push_back
#define nl '\n'

const int N = 105;
const int M = 1e5 + 5;
int n, W, w[N], v[N];
int dp[N][M];

int Knapsack(int i, int weight) {
    if(i == n + 1) return 0;
    if(dp[i][weight] != -1) return dp[i][weight];
    int ans = Knapsack(i + 1, weight);
    if(weight + w[i] <= W)  ans = max(ans, Knapsack(i + 1, weight + w[i]) + v[i]);
    return dp[i][weight] = ans;
}

int32_t main()
{
    BISMILLAH
        
    cin >> n >> W;

    memset(dp, -1, sizeof(dp));

    for(int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    } 

    cout << Knapsack(1, 0) << nl;
            
    ALHAMDULILLAH;
}
