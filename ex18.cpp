//Kiem tra xem 1 so co phai so smith khong
#include <bits/stdc++.h>

using namespace std;

long long sum(vector<long long> a){
    long long res = 0;
    for(long long i  = 0;i<a.size();i++){
        res+= a[i];
    }
    return res;
}

long long main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a;
        vector<long long> b;
        long long tmp = n;
        for(long long i = 2;i<n;i++){
            while(tmp%i==0){
                a.push_back(i);
                tmp/=i;
            }
        }
        tmp = n;
        while(tmp){
            b.push_back(tmp%10);
            tmp/=10;
        }
        if(sum(a)==sum(b)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}