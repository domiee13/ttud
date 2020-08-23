#include <bits/stdc++.h>

using namespace std;

long long a[100];
long long n,k;
bool ok = false;

void init(){
    cin>>n>>k;
    for(long long i = 1;i<=k;i++){
        a[i]=i;
    }
}

void display(){
    for(long long i = 1;i<=k;i++){
        cout<<a[i];
    }
    cout<<" ";
}

void gen(){
    long long i = k;
    while(a[i]==n-k+i && i>0) i--;
    if(i>0){
        a[i]++;
        for(long long j = i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
    else ok = true;
}

long long main(){
    long long t;
    cin>>t;
    while(t--){
        init();
        while(!ok){
            display();
            gen();
        }
        ok = false;
    }
    return 0;
}