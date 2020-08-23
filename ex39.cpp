// Cho mảng A[] gồm N số có cả các số âm và số dương. Nhiệm vụ của bạn là tìm mảng con liên tục có tổng lớn nhất của mảng. Ví dụ với mảng A[]={-2, -5, 6, -2,-3, 1, 5, -6} ta có kết quả là 7 tương ứng với dãy con {6, -2, -3, 1, 5}.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào hai số N tương ứng với số phần tử của mảng; dòng tiếp theo đưa vào N số A[i]; các số được viết cách nhau một vài khoảng trống.
// T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ N≤100; -100≤A[i] ≤100.
// Output:

// Đưa ra tổng con liên tục lớn nhất của mỗi test theo từng dòng.

#include <bits/stdc++.h>

using namespace std;

long long maxCrossSum(long long a[], long long l, long long m,long long h){// l can duoi, h can tren
    long long sum = 0;
    long long left_sum = long long_MIN, right_sum=long long_MIN;
    for(long long i  = m;i>=l;i--){
        sum+= a[i];
        if(sum>left_sum) left_sum = sum;
    }
    for(long long i  = m+1;i<=h;i++){
        sum+= a[i];
        if(sum>right_sum) right_sum = sum;
    }
    return left_sum+right_sum;
}

long long maxSubSum(long long a[],long long l, long long h){
    if(l==h) return a[l];
    long long m = (l+h)/2;
    return max(max(maxSubSum(a,l,m),maxSubSum(a,m+1,h)),maxCrossSum(a,l,m,h));
}

long long main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(long long i = 0;i<n;i++){
            cin>>a[i];
        }
        cout<<maxSubSum(a,0,n-1)<<endl;
    }
    return 0;
}
