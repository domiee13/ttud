// Cho đồ thị vô hướng G= được biểu diễn dưới dạng danh sách cạnh. Hãy viết thuật toán duyệt theo chiều sâu bắt đầu tại đỉnh uÎV (DFS(u)=?)

// Input:

// Dòng đầu tiên đưa vào T là số lượng bộ test.
// Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E| +1 dòng: dòng đầu tiên đưa vào ba số |V|, |E| tương ứng với số đỉnh và số cạnh của đồ thị, và u là đỉnh xuất phát; |E| dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
// T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
// Output:

// Đưa ra danh sách các đỉnh được duyệt theo thuật toán DFS(u) của mỗi test theo khuôn dạng của ví dụ dưới đây.

#include <bits/stdc++.h>
using namespace std;

int v,e,s;
vector<int> ke[1005];
bool chuaxet[1005];
void DFS(int u){
    cout<<u<<" ";
    chuaxet[u]=false;
    for(int i = 0;i<ke[u].size();i++){
        if(chuaxet[ke[u][i]]){
            DFS(ke[u][i]);
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>v>>e>>s;
        for(int i = 0;i<1006;i++){
            ke[i].clear();
        }
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i = 0;i<e;i++){
            int a,b;
            cin>>a>>b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        DFS(s);
        cout<<endl;
    }
    return 0;
}