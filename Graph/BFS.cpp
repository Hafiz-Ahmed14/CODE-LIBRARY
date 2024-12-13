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
int dist[N], par[N];


int32_t main()
{
    BISMILLAH
        
     int n, m; cin >> n >> m;
     while(m--) {
      int u, v; cin >> u >> v;
      g[u].push_back(v);
      g[v].push_back(u);
     } 

    //BFS
     queue<int>q;
     q.push(1);
     vis[1]= true;
     dist[1] = 0;
     while(!q.empty()) {
      int u = q.front();
      q.pop();
      for(auto v: g[u]) {
          if(!vis[v]) {
              q.push(v);
              par[v] = u;
              dist[v] = dist[u] + 1;
              vis[v] = true;
          }
      }
     }
            
    ALHAMDULILLAH;
}
