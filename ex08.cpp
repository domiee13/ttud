// ERROR
// Cho số nguyên dương N.

// Nhiệm vụ của bạn là hãy xác định xem có bao nhiêu ước số của N chia hết cho 2.

 

// Input:Dòng đầu tiên là số lượng bộ test T (T ≤ 100). Mỗi bộ test gồm một số nguyên N (1 ≤ N ≤ 109)

// Output:  Với mỗi test, in ra đáp án tìm được trên một dòng.

#include <bits/stdc++.h>

using namespace std;

long long main(){
    long long t;
    cin>>t;
    while(t--){
        long n,i;
        cin>>n;
        long res = 0;
        for(long i = 2;i*i<n;i++){
            if(n%i==0){
                if(i%2==0) res++;
                if((n/i)%2==0) res++;
            }
        }
        if(i*i==n && i%2==0) res++;
        if(n%2==0) res++;
        cout<<res<<endl;
}
    return 0;
}