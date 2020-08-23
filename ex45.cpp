// Cho N sợi dây với độ dài khác nhau được lưu trong mảng A[]. Nhiệm vụ của bạn là nối N sợi dây thành một sợi sao cho tổng chi phí nối dây là nhỏ nhất. Biết chi phí nối sợi dây thứ i và sợi dây thứ j là tổng độ dài hai sợi dây A[i] và A[j].

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào số lượng sợi dây N; dòng tiếp theo đưa vào N số A[i] là độ dài của các sợi dây; các số được viết cách nhau một vài khoảng trống.
// T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N≤106; 0≤A[i]≤106.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

long long main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long tmp;
        priority_queue<long long, vector<long long>, greater<long long> > q;
        for(long long i = 0;i<n;i++){
            cin>>tmp;
            q.push(tmp);
        }
        long long res = 0;
        long long a,b;
        
        while(q.size()>1){
            a = q.top();q.pop();
            b = q.top();q.pop();
            res+=a+b;
            q.push(a+b);
        }   
        cout<<res<<endl;
    }
    return 0;
}