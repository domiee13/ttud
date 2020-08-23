// Cho số nguyên dương N và K. Hãy tính NK modulo 109+7.

// Input:

// Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

// Mỗi test gồm 1 số nguyên N và K (1 ≤ N ≤ 1000, 1 ≤ K ≤ 109).

// Output: 

// Với mỗi test, in ra đáp án trên một dòng.

#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9+7;
long long n,k;

//a*b
long long Mul(long long a, long long b){
    if(b==0) return 0;
    long long tmp = Mul(a,b/2);
    if(b%2==1) return (tmp*2+a)%mod;
    return tmp*2%mod;
}

long long Pow(long long a, long long b){
    if(b==0) return 1;
    if(b==1) return a%mod;
    long long tmp = Pow(a,b/2);
    long long res = Mul(tmp,tmp);
    if(b%2==1) return res*a%mod;
    return res%mod;
}
long long main(){
    long long t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<Pow(n,k)<<endl;
    }
    return 0;
}