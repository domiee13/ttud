// Cho đồ thị vô hướng G= được biểu diễn dưới dạng danh sách cạnh. Hãy tìm đường đi từ đỉnh sÎV đến đỉnh tÎV trên đồ thị bằng thuật toán DFS.

// Input:

// Dòng đầu tiên đưa vào T là số lượng bộ test.
// Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào bốn số |V|, |E|, sÎV, tÎV tương ứng với số đỉnh, số cạnh,  đỉnh u, đỉnh v; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
// T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
// Output:

// Đưa ra đường đi từ đỉnh s đến đỉnh t của mỗi test theo thuật toán DFS của mỗi test theo khuôn dạng của ví dụ dưới đây. Nếu không có đáp án, in ra -1.
//       Ví dụ:

// Input:

// Output:

// 1

// 6  9 1 6

// 1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6

// 1 2 3 4 5 6
#include <bits/stdc++.h>
using namespace std;

int v,e,b,f;
vector<int> ke[10005];
bool chuaxet[1005];
int truoc[1005];

void DFS(int u){
    chuaxet[u] = false;
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
        for(int i = 0;i<1005;i++){
            ke[i].clear();
            truoc[i] = 0;
        }
        cin>>v>>e>>b>>f;
        for(int i = 0;i<e;i++){
            int a,b;
            cin>>a>>b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        DFS(b);
        vector<int> res;
        if(truoc[f]==0) cout<<-1<<endl;
        else{
            res.push_back(f);
            int tmp= truoc[f];
            while(tmp!=b){
                res.push_back(tmp);
                tmp = truoc[tmp];
            }
            res.push_back(b);
        }
        for(int i  =res.size()-1;i>=0;i--){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}