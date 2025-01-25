#include<bits/stdc++.h>
using namespace std;

//Define start and end marco
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0
#define ll long long
#define pb push_back
#define nl '\n'

const double esp=1e-6;

double ok(double x) {
	return x * x + sqrt(x);
}

int32_t main()
{
	BISMILLAH
		
	double c;  cin >> c;

	double l=0, r=1e5, ans;
	while((r - l) > esp) {
		double mid = (l + r) / 2;
		if(ok(mid) >= c) {
			ans = mid;
			r = mid;
		}
		else l = mid;
	} 

	cout << fixed << setprecision(6) << ans << nl;
		    
	ALHAMDULILLAH;
}
