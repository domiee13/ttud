// Dãy số Fibonacci được xác định bằng công thức như sau:

// F[0] = 0, F[1] = 1;

// F[n] = F[n-1] + F[n-2] với mọi n >= 2.

// Các phần tử đầu tiên của dãy số là 0, 1, 1, 2, 3, 5, 8, ...

// Nhiệm vụ của bạn là hãy xác định số Fibonaci thứ n. Do đáp số có thể rất lớn, in ra kết quả theo modulo 109+7.

// Input:

// Dòng đầu tiên là số lượng bộ test T (T ≤ 1000).

// Mỗi test bắt gồm một số nguyên N (1 ≤ N ≤ 109).

// Output: 

// Với mỗi test, in ra đáp án trên một dòng.

#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9 +  7;

vector<long long> F;
long long fibo(long long n){
    if(n==0) return 0;
    if(n==1) return 1;
    return (fibo(n-2)%mod+fibo(n-1)%mod)%mod;
}

void init(){
    F[0]=0;
    F[1]=1;
    for(long long i = 2;i<=1000000000-2;i++){
        F[i] = F[i-2]+F[i-1];
    }
}

long long main(){
    long long t;
    cin>>t;
    init();
    while(t--){
        long long n;
        cin>>n;
        cout<<F[n]<<endl;
    }
    return 0;
}