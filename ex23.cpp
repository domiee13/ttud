// Cho số tự nhiên N và một hoán vị X[] của 1, 2, .., N. Nhiệm vụ của bạn là đưa ra hoán vị tiếp theo của X[]. Ví dụ N=5, X[] = {1, 2, 3, 4, 5} thì hoán vị tiếp theo của X[] là {1, 2, 3, 5, 4}.

// Input:

// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là số N; dòng tiếp theo đưa vào hoán vị X[] của 1, 2, .., N.
// T, N, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N≤10^3.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

#include <bits/stdc++.h>
using namespace std;

int a[1005];
int n;

void init(){
    for(int i =- 1;i<=n;i++){
        a[i]=i;
    }
}

void input(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
    }
}

void genNext(){
    int i = n-1;
    while(a[i]>a[i+1] && i>0) i--;
    if(i>0){
        int j = n;
        while(a[i]>a[j]) j--;
        swap(a[i],a[j]);
        int l = i+1;
        int r = n;
        while(l<r){
            swap(a[l],a[r]);
            l++;r--;
        }
    }
    else init();
}

void display(){
    for(int i =1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        input();
        genNext();
        display();
    }
    return 0;
}