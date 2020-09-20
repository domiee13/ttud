// Cho đồ thị có hướng G= được biểu diễn dưới dạng danh sách cạnh. Hãy tìm đường đi từ đỉnh sÎV đến đỉnh tÎV trên đồ thị bằng thuật toán DFS.

// Input:

// Dòng đầu tiên đưa vào T là số lượng bộ test.
// Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào bốn số |V|, |E|, sÎV, tÎV tương ứng với số đỉnh, số cạnh,  đỉnh u, đỉnh v; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
// T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
// Output:

// Đưa ra đường đi từ đỉnh s đến đỉnh t của mỗi test theo thuật toán DFS của mỗi test theo khuôn dạng của ví dụ dưới đây. Nếu không có đáp án, in ra -1.
#include <bits/stdc++.h>
using namespace std;

int v,e,b,f;
vector<int> ke[1005];
bool chuaxet[1005];
int truoc[1005];

void BFS(int u){
    queue<int> q;
    q.push(u);
    chuaxet[u]=false;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for(int i = 0;i<ke[s].size();i++){
            if(chuaxet[ke[s][i]]){
                q.push(ke[s][i]);
                chuaxet[ke[s][i]] = false;
                truoc[ke[s][i]]= s;
            }
        }
    }
}

void DFS(int u){
    chuaxet[u]=false;
    for(int i = 0;i<ke[u].size();i++){
        if(chuaxet[ke[u][i]]){
            DFS(ke[u][i]);
            truoc[ke[u][i]] = u;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i = 0;i<1001;i++){
            ke[i].clear();
            truoc[i]=0;
        }
        cin>>v>>e>>b>>f;
        for(int i = 0;i<e;i++){
            int a,b;
            cin>>a>>b;
            ke[a].push_back(b);
        }
        DFS(b);
        vector<int> res;
        if(truoc[f]==0) cout<<-1<<endl;
        else{
            res.push_back(f);
            int tmp = truoc[f];
            while(tmp!=b){
                res.push_back(tmp);
                tmp = truoc[tmp];
            }
            res.push_back(b);
            for(int i = res.size()-1;i>=0;i--){
                cout<<res[i]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}