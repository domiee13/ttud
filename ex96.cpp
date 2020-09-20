// Hãy thực hiện thuật toán sắp xếp chọn trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.

// Dữ liệu vào: Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá 100).

// Kết quả: Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số trong dãy cách nhau đúng một khoảng trống.

// Ví dụ:

// Input

// Output

// 4

// 5 7 3 2

// Buoc 1: 2 7 3 5

// Buoc 2: 2 3 7 5

// Buoc 3: 2 3 5 7

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+5];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int i,j,min_idx;
    for(int i = 0;i<n-1;i++){
        min_idx = i;
        for(int j = i+1;j<n;j++){
            if(a[j]<a[min_idx]){
                min_idx = j;
            }
        }
        swap(a[min_idx],a[i]);
        cout<<"Buoc: "<<i+1<<": ";
        for(int i  =0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

