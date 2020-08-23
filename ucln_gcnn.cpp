// Viết chương trình tìm ước số chung lớn nhất và bội số chung nhỏ nhất của hai số nguyên dương a,b.

// Dữ liệu vào: Dòng đầu ghi số bộ test. Mỗi bộ test ghi trên một dòng 2 số nguyên a và b không quá 9 chữ số.

// Kết quả: Mỗi bộ test ghi trên 1 dòng, lần lượt là USCLN, sau đó đến BSCNN.

// Ví dụ:

#include <bits/stdc++.h>
using namespace std;

long long gcd(long a, long b){
    if(b==0) return a;
    return gcd(b,a%b);
}

long long main(){
    long long t;
    cin>>t;
    while(t--){
        long a,b;
        cin>>a>>b;
        long long res = gcd(a,b);
        cout<<res<<" "<<(a*b)/res<<endl;
    }
    return 0;
}