// Cho ba hình chữ nhật. Các bạn được phép xoay hình nhưng không được phép xếp chồng lấn lên nhau, hỏi 3 hình chữ nhật đó có thể ghép thành một hình vuông được hay không

// Input: Dòng đầu ghi số bộ test. Mỗi test có ba dòng, mỗi dòng ghi hai số nguyên dương là chiều rộng và chiều cao của hình chữ nhật (các số đều không quá 100).

// Output: Ghi ra YES nếu có thể tạo thành hình vuông, NO nếu không thể. 

// Ví dụ:

#include <bits/stdc++.h>

using namespace std;

int a[6];
int pos[6];
int n = 6,k=3,sum=0;
bool ok = false;

void init(){
    for(int i = 1;i<=n;i++){
        pos[i]=i;
    }
}

void display(){
    for(int i =1;i<=k;i++){
        cout<<pos[i]<<" ";
    }
    cout<<endl;
}

void backTrack(int i){
    for(int j = pos[i-1]+1;j<=n-k+i;j++){
        pos[i]=j;
        if(i==k){
            int s=0;
            for(int i = 1;i<=k;i++){
                s+=a[pos[i]];
            }
            if(s==sum-s){
                ok = true;
                cout<<"YES"<<endl;
                return; 
            }
        }
        else backTrack(i+1);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        for(int i = 1;i<=6;i++){
            cin>>a[i];
            sum+=a[i];
        }
        backTrack(1);
        if(!ok) cout<<"NO"<<endl;
        ok = false;
        sum = 0;
    }
    return 0;
}