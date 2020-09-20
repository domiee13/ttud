// Hãy thực hiện thuật toán sắp xếp chèn trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.

// Dữ liệu vào: Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá 100).

// Kết quả: Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số trong dãy cách nhau đúng một khoảng trống.

// Ví dụ:

// Input

// Output

// 4

// 5 7 3 2

// Buoc 0: 5

// Buoc 1: 5 7

// Buoc 2: 3 5 7

// Buoc 3: 2 3 5 7

#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+5];
    for(int  i =0;i<n;i++){
        cin>>a[i];
    }
    //Sap xep chen
    int i,key,j;
    for(int i = 1;i<n;i++){
        key = a[i];
        j =i - 1;
        while(j>=0&& a[j]>key){
            a[j+1]=a[j];
            j-=1;
        }
        a[j+1]=key;
        cout<<"Buoc: "<<i<<": ";
        for(int i = 0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}