#include <bits/stdc++.h>

using namespace std;

long long main(){
    long long t;
    cin>>t;
    long long a[] = {1000,500,200,100,50,20,10,5,2,1};
    long long n=10;
    while(t--){
        long long k,res = 0;
        cin>>k;
        for(long long i = 0;i<n;i++){
            res+=k/a[i];
            k%=a[i];
        }
        cout<<res<<endl;
    }
    return 0;
}