// Hãy thực hiện thuật toán sắp xếp nổi bọt trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.

// Dữ liệu vào: Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá 100).

// Kết quả: Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số trong dãy cách nhau đúng một khoảng trống.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+5];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    bool swapped;
    for(int i = 0;i<n;i++){
        swapped = false;
        for(int j = 0;j<n;j++){
            if(a[j]>a[j+1]){
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                swapped = true;
            }
        }
        if(!swapped) break;
        else{
            cout<<"Buoc "<<i+1<<": ";
            for(int j = 0;j<n;j++){
                cout<<a[j]<<" ";
            }
        }
        cout<<endl;
    }
}