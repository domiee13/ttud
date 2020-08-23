// Cho xâu nhị phân X[], nhiệm vụ của bạn là hãy đưa ra xâu nhị phân tiếp theo của X[]. Ví dụ X[] =”010101” thì xâu nhị phân tiếp theo của X[] là “010110”.

// Input:

// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu nhi phân X.
// T, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤length(X)≤103.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.


#include <bits/stdc++.h>

using namespace std;

string s;
bool ok = false;

void init(){
    for(int i=0;i<s.size();i++){
        s[i]='0';
    }
}

void genNext(){
    int j = s.size()-1;
    while(s[j]=='1'){
        s[j]='0';
        j--;
    }
    if(j>=0) s[j]='1';
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