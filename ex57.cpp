#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int dp[n+5][n+5];
        memset(dp,0,sizeof(dp));
        string s;
        cin>>s;
        int res = 0;
        for(int i = 1;i<=s.size();i++){
            for(int j = 1;j<=n;j++){
                if(s[i-1]==s[j-1] && i!=j){
                    dp[i][j] = dp[i-1][j-1]+1;
                }
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        cout<<dp[n][n]<<endl;
    }
    return 0;
}