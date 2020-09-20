// Cho đồ thị vô hướng G= được biểu diễn dưới dạng danh sách cạnh. Hãy tìm số thành phần liên thông của đồ thị..

// Input:

// Dòng đầu tiên đưa vào T là số lượng bộ test.
// Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh; Dòng tiếp theo đưa vào các bộ đôi u, v tương ứng với một cạnh của đồ thị.
// T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
// Output:

// Đưa ra số thành phần liên thông của đồ thị bằng thuật toán DFS.
#include <bits/stdc++.h>
using namespace std;

int v,e;
vector<int> ke[1005];
bool chuaxet[1005];

void DFS(int u){
    chuaxet[u]=false;
    for(int i = 0;i<ke[u].size();i++){
        if(chuaxet[ke[u][i]])
        DFS(ke[u][i]);
    }
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    chuaxet[u] =false;
    while(!q.empty()){
        int s= q.front();
        q.pop();
        for(int i = 0;i<ke[s].size();i++){
            if(chuaxet[ke[s][i]]){
                q.push(ke[s][i]);
                chuaxet[ke[s][i]]= false;
            }
        }
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i  =0;i<1001;i++){
            ke[i].clear();
        }
        cin>>v>>e;
        for(int i = 0;i<e;i++){
            int a,b;
            cin>>a>>b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        int tplt = 0;
        for(int i = 1;i<=v;i++){
            if(chuaxet[i]){
                tplt++;
                BFS(i);
            }
        }
        cout<<tplt<<endl;
    }
    return 0;
}