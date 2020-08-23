#include <bits/stdc++.h>

using namespace std;

int a[100];
int n,k;
bool ok = false;

void init(){
    cin>>n>>k;
    for(int i = 1;i<=k;i++){
        a[i]=i;
    }
}

void display(){
    for(int i = 1;i<=k;i++){
        cout<<a[i];
    }
    cout<<" ";
}

void gen(){
    int i = k;
    while(a[i]==n-k+i && i>0) i--;
    if(i>0){
        a[i]++;
        for(int j = i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
    else ok = true;
}

int main(){
    int t;
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