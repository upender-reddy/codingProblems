#include <bits/stdc++.h>
#define MA(x,y) ((x) > (y) ? (x) : (y))

using namespace std;

const int N = 4000005;

int n, m;

vector <vector <int> > a, dp;
vector <int> msl, msr, d;

void input(){
    scanf("%d %d", &n, &m);

    msl.resize(m+2,0);
    d = msr = msl;

    a.resize(n+2, d);
    dp = a;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void sol(){
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++){
            msl[j] = MA(msl[j-1] + a[i][j],0);
        }
        for (int j = m; 0 < j; j--){
            msr[j] = MA(msr[j+1] + a[i][j],0);
		}
		
        d[1] = dp[i-1][1] + a[i][1];
        dp[i][1] = d[1] + msr[2];
        for (int j = 2; j <= m; j++) {
            d[j] = MA(d[j-1] + a[i][j], dp[i-1][j] + a[i][j] + msl[j-1]);
            dp[i][j] = d[j] + msr[j + 1];
           
        }
        
        d[m] = dp[i-1][m] + a[i][m];
        dp[i][m] = MA(dp[i][m], d[m] + msl[m - 1]);
        for (int j = m - 1; 0 < j ; j--) {
            d[j] = MA(d[j+1] + a[i][j], dp[i-1][j] + a[i][j] + msr[j+1]);
            dp[i][j] = MA(dp[i][j], d[j] + msl[j - 1]);
        }
    }

    int ans = dp[n][1];
    for (int i = 2; i <= m; i++) {
        ans = MA(ans, dp[n][i]);
    }

    printf("%d\n", ans);
}

int main() {
    input();
    sol();
    return 0;
}
