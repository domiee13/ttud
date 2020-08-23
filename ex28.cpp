// Cho xâu ký tự S bao gồm các ký tự in hoa khác nhau. Hãy đưa ra tất cả các hoán vị của xâu ký tự S. Ví dụ S=”ABC” ta có kết quả {ABC ACB BAC BCA CAB CBA}. 

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test là một xâu ký tự S được viết trên 1 dòng.
// T, S thỏa mãn ràng buộc: 1≤T≤10; 1≤length(S) ≤10;
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

bool chuaxet[10005];
int a[10005];
string s;

void Try(int i){
    for(int j = 0;j<s.size();j++){
        if(chuaxet[j]){
            a[i] = j;
            chuaxet[j]=false;
            if(i==s.size()){
                for(int l = 1;l<=s.size();l++){
                    cout<<s[a[l]];
                }
                cout<<" ";
            }
            else Try(i+1);
            chuaxet[j]=true;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        memset(chuaxet,true,sizeof(chuaxet));
        cin>>s;
        Try(1);
        cout<<endl;
    }   
    return 0;
}