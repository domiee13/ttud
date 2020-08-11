// Viết chương trình kiểm tra một số nguyên dương bất kỳ (2 chữ số trở lên, không quá 9 chữ số) có chữ số bắt đầu và kết thúc bằng nhau hay không.

// Dữ liệu vào: Dòng đầu tiên ghi số bộ test. Mỗi bộ test viết trên một dòng số nguyên dương tương ứng cần kiểm tra. 

// Kết quả: Mỗi bộ test viết ra YES hoặc NO, tương ứng với bộ dữ liệu vào

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l = s.size();
        if(s[0]==s[l-1]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}