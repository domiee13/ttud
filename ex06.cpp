#include <bits/stdc++.h>

using namespace std;

long long main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long> a(n);
        vector<long> res;
        bool ok = false;
        for(long long i = 0;i<n;i++){
            cin>>a[i];
        }
        for(long long i = 0;i<n;i++){
            if(count(a.begin(),a.end(),a[i])>1){
                cout<<a[i]<<endl;
                ok = true;
                break;
            }
        }
        if(!ok) cout<<"NO"<<endl;
        
    }
    return 0;
}