// Cho hai số nguyên dương N và K. Nhiệm vụ của bạn là hãy liệt kê tất cả các tập con K phần tử của 1, 2, .., N. Ví dụ với N=5, K=3 ta có 10 tập con của 1, 2, 3, 4, 5 như sau: {1, 2, 3}, {1, 2, 4},{1, 2, 5},{1, 3, 4},{1, 3, 5},{1, 4, 5},{2, 3, 4},{2, 3, 5},{2, 4, 5},{3, 4, 5}.

// Input:

// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một cặp số tự nhiên N, K được viết trên một dòng.
// T, n thỏa mãn ràng buộc: 1≤T≤100; 1≤k ≤ n≤15.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
#include <bits/stdc++.h>

using namespace std;

long long a[1005];
long long n,k;

void init(){
    for(long long i = 1;i<=k;i++){
        a[i]=i;
    }
}

void genNext(){
    long long i = k;
    while(a[i]==n-k+i && i>0) i--;
    if(i>0){
        a[i]++;
        for(long long j = i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
}

bool isFinal(){
    for(long long i = 1;i<=k;i++){
        if(a[i]!=n-k+i) return false;
    }
    return true;
}

void display(){
    for(long long i =1;i<=k;i++){
        cout<<a[i];
    }
    cout<<" ";
}

void input(){
    cin>>n>>k;
}

long long main(){
    long long t;
    cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        input();
        init();
        display();
        while(!isFinal()){
            genNext();
            display();
        }
        cout<<endl;
    }
    return 0;
}