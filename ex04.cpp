#include <bits/stdc++.h>

using namespace std;

bool tang(string s){
    for(long long i = 0;i<s.size()-1;i++){
        if(s[i]>s[i+1]) return false;
    }
    return true;
}

bool giam(string s){
    for(long long i = 0;i<s.size()-1;i++){
        if(s[i]<s[i+1]) return false;
    }
    return true;
}

long long main(){
    long long t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(tang(s) || giam(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}