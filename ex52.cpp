// Cho mảng A[] gồm n phần tử, mảng B[] gồm m phần tử khác nhau. Các phần tử của mảng A[] và B[] chưa được sắp xếp. Hãy tìm mảng hợp và giao được sắp giữa A[] và B[]. Ví dụ với A[] = {7, 1, 5, 2, 3, 6}, B[]={3, 8, 6, 20, 7} ta có mảng hợp Union = {1, 2, 3, 5, 6, 7, 8, 20}, mảng giao Intersection = {3, 6}.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm ba dòng: dòng đầu tiên đưa vào n, m là số phần tử của mảng A[] và B[]; dòng tiếp theo là n số A [i] của mảng A [];dòng tiếp theo là m số B[i] của mảng B[]; các số được viết cách nhau một vài khoảng trống.
// T, n, m, A[i], B[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, m, A[i], B[i] ≤105.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int d[100005] = {0};
        int a,b,tmp;
        cin>>a>>b;
        for(int i = 0;i<a+b;i++){
            cin>>tmp;
            d[tmp]++;
        }
        for(int i = 0;i<100005;i++){
            if(d[i]>0) cout<<i<<" ";
        }
        cout<<endl;
        for(int i = 0;i<100005;i++){
            if(d[i]>1) cout<<i<<" ";
        }
        cout<<endl;    
        }
    return 0;
}