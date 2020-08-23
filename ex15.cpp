// Cho mảng A[] gồm n số nguyên khác nhau. Hãy đưa ra các phần tử của mảng theo khuôn dạng lớn nhất, nhỏ nhất, lớn thứ hai, nhỏ thứ 2, … Ví dụ với A[] = {9, 7, 12, 8, 6, 5} ta đưa ra : 12, 5, 9, 6, 8, 7.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là số phần tử của mảng n; dòng tiếp theo là n số A [i] của mảng A [];các số được viết cách nhau một vài khoảng trống.
// T, n thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤103.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

long long main(){
    long long t;
    cin>>t;
    while(t--){
        deque<long long> dq;
        long long n;
        cin>>n;
        long long tmp;
        for(long long i = 0;i<n;i++){
            cin>>tmp;
            dq.push_back(tmp);
        }
        sort(dq.begin(),dq.end(),greater<long long>());
        while(dq.size()){
            cout<<dq.front()<<" ";
            dq.pop_front();
            if(dq.size()){
                cout<<dq.back()<<" ";
                dq.pop_back();
            }
        }
        cout<<endl;
    }
    return 0;
}