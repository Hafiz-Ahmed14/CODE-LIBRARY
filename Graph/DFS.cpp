/***************************************************/
/*                  Md. HAFIZ AHMED                */
/*               DEPARTMENT OF CSE,BAUET           */
/***************************************************/
#include<bits/stdc++.h>
using namespace std;

//Define start and end marco
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0
#define ll long long
#define pb push_back
#define nl '\n'

const int N = 1e5 + 9;
vector<int>g[N];
bool vis[N];

// dfs
void dfs(int u) {
  vis[u] = true;
  for(auto v: g[u]) {
      if(!vis[v]) {
          dfs(v);
      }
  }
}

int32_t main()
{
    BISMILLAH
        
     int n, m; cin >> n >> m;
     while(m--) {
      int u, v; cin >> u >> v;
      g[u].push_back(v);
      g[v].push_back(u);
     } 

     dfs(1);
            
    ALHAMDULILLAH;
}
