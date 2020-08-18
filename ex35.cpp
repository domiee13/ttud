// Một máy ATM hiện có n (n ≤ 30) tờ tiền có giá trị t[1], t[2], …, t[n]. Hãy tìm cách trả ít tờ nhất với số tiền đúng bằng S (các tờ tiền có giá trị bất kỳ và có thể bằng nhau, mỗi tờ tiền chỉ được dùng một lần).

// Input: Dòng đầu tiên ghi số bộ test T (T<10). Mỗi bộ test gồm 2 số nguyên n và S (S ≤ 109). Dòng thứ hai chứa n số nguyên t[1], t[2], …, t[n] (t[i] ≤ 109)

// Output: Với mỗi bộ test ghi ra số tờ tiền ít nhất phải trả.

//      Nếu không thể tìm được kết quả, in ra -1.

#include <bits/stdc++.h>

using namespace std;

int pos[50], t[50], stop=0,n,s;
bool ok =false;

//Sinh to hop
void sinh(int k){
    int i = k;
    while(i>0 && pos[i]==n-k+i) i--;
    if(i==0) stop=1;
    else{
        pos[i]++;
        for(int j=i+1;j<=k;j++){
            pos[j]=pos[j-1]+1;
        }
    }
}

int main(){
    int T;
    cin>>T;
    while(T--){    
        cin>>n>>s;
        //Nhap gia tri tien
        for(int i = 1;i<=n;i++){
            cin>>t[i];
        }
        for(int i = 1;i<=n;i++){
            stop = 0;
            ok = false;
            //Khoi tao
            for(int j=1;j<=i;j++){
                pos[j]=j;
            }
            while(!stop){
                int res =0;
                for(int j = 1;j<=i;j++){
                    res+=t[pos[j]];
                }
                if(res==s){
                    ok = true;
                    cout<<i<<endl;
                    break;
                }
                else sinh(i);                
            }
            if(ok) break;
        }
        if(!ok) cout<<-1<<endl;
    }
    return 0;
}