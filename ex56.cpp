// Cho 2 xâu S1 và S2. Hãy tìm xâu con chung dài nhất của 2 xâu này (các phần tử không nhất thiết phải liên tiếp nhau).

// Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 20). Mỗi test gồm hai dòng, mô tả xâu S1 và S2, mỗi xâu có độ dài không quá 1000 và chỉ gồm các chữ cái in hoa.

// Output:  Với mỗi test, in ra độ dài dãy con chung dài nhất trên một dòng.

#include <bits/stdc++.h>

int F[1005][1005];
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int res = 0;
        memset(F,0,sizeof(F));
        for(int i = 1;i<=s1.size();i++){
            for(int j = 1;j<=s2.size();j++){
                if(s1[i-1]==s2[j-1]) F[i][j] = F[i-1][j-1]+1;//Do dai day chung tai vi tri truoc do +1
                else F[i][j]= max(F[i-1][j],F[i][j-1]);
                res = max(res,F[i][j]);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}