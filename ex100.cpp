// Cho đồ thị vô hướng G= được biểu diễn dưới dạng danh sách cạnh. Hãy viết chương trình thực hiện chuyển đổi biểu diễn đồ thị dưới dạng danh sách kề.
//
// Input:
//
// Dòng đầu tiên đưa vào T là số lượng bộ test.
// Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E| +1 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh của đồ thị; |E| dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
// T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
// Output:
//
// Đưa ra danh sách kề của các đỉnh tương ứng theo khuôn dạng của ví dụ dưới đây. Các đỉnh trong danh sách in ra theo thứ tự tăng dần.
#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int v,e;
    cin>>v>>e;
    vector<int> ke[v+5];
    for(int i = 0;i<e;i++){
      int a,b;
      cin>>a>>b;
      ke[a].push_back(b);
      ke[b].push_back(a);
    }
    for(int i = 1;i<=v;i++){
      sort(ke[i].begin(),ke[i].end());
    }
    for (int i = 1;i<=v;i++){
      cout<<i<<": ";
      for(int j = 0;j<ke[i].size();j++){
        cout<<ke[i][j]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}
