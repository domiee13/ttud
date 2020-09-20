// Cho đồ thị vô hướng G= được biểu diễn dưới dạng danh sách cạnh. Hãy viết thuật toán duyệt theo chiều rộng bắt đầu tại đỉnh uÎV (BFS(u)=?)

// Input:

// Dòng đầu tiên đưa vào T là số lượng bộ test.
// Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào ba số |V|, |E|, uÎV tương ứng với số đỉnh, số cạnh và đỉnh bắt đầu duyệt; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
// T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
// Output:

// Đưa ra danh sách các đỉnh được duyệt theo thuật toán BFS(u) của mỗi test theo khuôn dạng của ví dụ dưới đây.
//      Ví dụ:

// Input:

// Output:

// 1

// 6 9 1

// 1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6

// 1 2 3 5 4 6

#include <bits/stdc++.h>

using namespace std;

int v,e,u;
vector<int> ke[1005];
bool chuaxet[1005];

void BFS(int u){
    queue<int> stk;
    stk.push(u);
    chuaxet[u]=false;
    while(!stk.empty()){
        int s = stk.front();
        stk.pop();
        cout<<s<<" ";
        for(int i = 0;i<ke[s].size();i++){
            if(chuaxet[ke[s][i]]){
                stk.push(ke[s][i]);
                chuaxet[ke[s][i]]=false;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i =0;i<1006;i++){
            ke[i].clear();
        }
        memset(chuaxet,true,sizeof(chuaxet));
        cin>>v>>e>>u;
        for(int i = 0;i<e;i++){
            int a,b;
            cin>>a>>b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        BFS(u);
        cout<<endl;
    }
    return 0;
}