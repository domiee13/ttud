// Cho hai số N, K và một tập con K phần tử X[] =(X1, X2,.., XK) của 1, 2, .., N. Nhiệm vụ của bạn là hãy đưa ra tập con K phần tử tiếp theo của X[]. Ví dụ N=5, K=3, X[] ={2, 3, 4} thì tập con tiếp theo của X[] là {2, 3, 5}.

// Input:

// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là hai số N và K; dòng tiếp theo đưa vào K phần tử của X[] là một tập con K phần tử của 1, 2, .., N.
// T, K, N, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤K≤N≤10^3.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

int a[1005];
int n,k;

void init(){
    for(int i = 1;i<=k;i++){
        a[i]=i;
    }
}

void genNext(){
    int i = k;
    while(a[i]==n-k+i && i>0) i--;
    if(i>0){
        a[i]++;
        for(int j = i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
    else init();
}

void display(){
    for(int i =1;i<=k;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void input(){
    cin>>n>>k;
    for(int i = 1;i<=k;i++){
        cin>>a[i];
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        input();
        genNext();
        display();
    }
    return 0;
}