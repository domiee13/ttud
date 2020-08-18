// Cho xâu nhị phân X[], nhiệm vụ của bạn là hãy đưa ra xâu nhị phân trước của X[]. Ví dụ X[] =”111111” thì xâu nhị phân trước của X[] là “111110”. Với xâu X[] =“000001” thì xâu nhị trước của X[] là “000000”. Chú ý: nếu xâu dữ liệu trong input là xâu đầu tiên thì trước nó sẽ là xâu cuối cùng.

// Input:

// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu nhi phân X.
// T, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤length(X)≤10^3.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

string s;
bool ok = false;

void init(){
    for(int i=0;i<s.size();i++){
        s[i]='1';
    }
}

void genNext(){
    int j = s.size()-1;
    while(s[j]=='0'){
        s[j]='1';
        j--;
    }
    if(j>=0){
        s[j]='0';
    }
    else init();
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        genNext();
        cout<<s<<endl;
    }
    return 0;
}