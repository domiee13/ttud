// ERROR
// Cho số nguyên dương N.

// Nhiệm vụ của bạn là hãy xác định xem có bao nhiêu ước số của N chia hết cho 2.

 

// Input:Dòng đầu tiên là số lượng bộ test T (T ≤ 100). Mỗi bộ test gồm một số nguyên N (1 ≤ N ≤ 109)

// Output:  Với mỗi test, in ra đáp án tìm được trên một dòng.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        if(n%2!=0) cout<<0<<endl;
        else{
            long res = 0;
            // long tmp = n/2;
            // res = (n-2)/tmp +1;
            cout<<res<<endl;
        }
    }
    return 0;
}