// Cho số tự nhiên N và một hoán vị X[] của 1, 2, .., N. Nhiệm vụ của bạn là đưa ra hoán vị tiếp theo của X[]. Ví dụ N=5, X[] = {1, 2, 3, 4, 5} thì hoán vị tiếp theo của X[] là {1, 2, 3, 5, 4}.

// Input:

// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là số N; dòng tiếp theo đưa vào hoán vị X[] của 1, 2, .., N.
// T, N, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N≤10^3.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

#include <bits/stdc++.h>
using namespace std;

long long a[1005];
long long n;

void init(){
    for(long long i =- 1;i<=n;i++){
        a[i]=i;
    }
}

void input(){
    cin>>n;
    for(long long i = 1;i<=n;i++){
        cin>>a[i];
    }
}

void genNext(){
    long long i = n-1;
    while(a[i]>a[i+1] && i>0) i--;
    if(i>0){
        long long j = n;
        while(a[i]>a[j]) j--;
        swap(a[i],a[j]);
        long long l = i+1;
        long long r = n;
        while(l<r){
            swap(a[l],a[r]);
            l++;r--;
        }
    }
    else init();
}

void display(){
    for(long long i =1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

long long main(){
    long long t;
    cin>>t;
    while(t--){
        input();
        genNext();
        display();
    }
    return 0;
}