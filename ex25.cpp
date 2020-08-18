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

void init(){
    for(int i = 1;i<=k;i++){
        a[i]=n-k+i;
    }
}

void genNext(){
    int i = 1;
    while(a[i]==n-k+i && i<=k) i++;
    if(i>0){
        a[i]--;
        for(int j = 1;j<i;j++){
            a[j]++;
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