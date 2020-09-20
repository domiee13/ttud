// Cho đồ thị có hướng G= được biểu diễn dưới dạng danh sách cạnh. Hãy viết thuật toán duyệt theo chiều sâu bắt đầu tại đỉnh uÎV (DFS(u)=?)

// Input:

// Dòng đầu tiên đưa vào T là số lượng bộ test.
// Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào ba số |V|, |E|, uÎV tương ứng với số đỉnh, số cạnh và đỉnh bắt đầu duyệt; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
// T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
// Output:

// Đưa ra danh sách các đỉnh được duyệt theo thuật toán DFS(u) của mỗi test theo khuôn dạng của ví dụ dưới đây.

#include <bits/stdc++.h>

using namespace std;
vector<int> ke[10005];
bool chuaxet[1005];
// bool chuaxet[1005]= {true}; //Khong memset o duoi se sai ?

void DFS(int u){
    cout<<u<<" ";
    chuaxet[u] = false;
    for(int i = 0;i<ke[u].size();i++){
        if(chuaxet[ke[u][i]]){
            DFS(ke[u][i]);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        for(int i =0;i<1006;i++){
            ke[i].clear();
        }
        int v,e,u;
        cin>>v>>e>>u;
        ke[v+5];
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i = 0;i<e;i++){
            int a,b;
            cin>>a>>b;
            ke[a].push_back(b);
        }
        DFS(u);
        cout<<endl;
    }
    return 0;
}