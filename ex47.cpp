// Cho xâu ký tự S. Ta gọi giá trị của xâu S là tổng bình phương số lần xuất hiện mỗi ký tự trong S. Hãy tìm giá trị nhỏ nhất của xâu S sau khi thực hiện K lần loại bỏ ký tự.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là số K; phần thứ hai là một xâu ký tự S được viết trên một dòng.
// T, S, K thỏa mãn ràng buộc: 1≤T≤100;  1≤length(S)≤10000; 1≤K≤1000.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        string s;
        cin>>s;
        priority_queue<int, vector<int> > q;
        for(char i:s){
            q.push(count(s.begin(),s.end(),i));
        }
        for(int i =0;i<k;i++){
            int a = q.top();
            q.pop();
            a--;
            q.push(a);
            cout<<a<<endl;
        }
        int res=0;
        while(q.size()>0){
            int tmp = q.top();
            q.pop();
            res+=tmp*tmp;
        }
        cout<<res<<endl;
    }
    return 0;
}