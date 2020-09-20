// Cho hai số N, K và một tập con K phần tử X[] =(X1, X2,.., XK) của 1, 2, .., N. Nhiệm vụ của bạn là hãy đưa ra tập con K phần tử trước đó của X[]. Ví dụ N=5, K=3, X[] ={2, 3, 5} thì tập con trước đó của X[] là {2, 3, 4}. Chú ý nếu tập con trong input là đầu tiên thì trước đó là tập con cuối cùng.

// Input:

// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là hai số N và K; dòng tiếp theo đưa vào K phần tử của X[] là một tập con K phần tử của 1, 2, .., N.
// T, K, N, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤K≤N≤103.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

int a[1005];
int n,k;

void gen(){
    int i = k;
    while(a[i]==n-k+i) i--;
    if(i==k){//So cuoi cung khac n
        while(a[i]==a[i-1]+1 && i>0) i--;
        if(i==0){//1 2 3 ... k
            for(int j=1;j<=k;j++){
                cout<<n-k+j<<" ";
            }
            cout<<endl;
        }
        else{
            a[i]--;
            for(int j =i+1;j<=k;j++){
                a[j]++;
            }
            for(int j=1;j<=k;j++){
                cout<<a[j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        int  i =k;
        while(a[i]==a[i-1]+1) i--;
        a[i]--;
        for(int j=1;j<=k;j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;

    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i  =1;i<=k;i++){
            cin>>a[i];
        }
        gen();
    }
    return 0;
}