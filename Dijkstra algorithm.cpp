#include<bits/stdc++.h>
using namespace std;
#define sz 100000
#define inf (1<<28)
int cost [sz];
vector<int>weight[sz],adj[sz];
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
int dijkstra(int src,int dest)
{
    q.push({0,src});
    cost[src] = 0;
    int x,y;
    while (!q.empty())
    {
        y = q.top().first;//weight
        x = q.top().second;//vertex
        q.pop();
        for(int i = 0;i<adj[x].size();i++)
        {
            if(cost[x]  + weight[x][i]<cost[adj[x][i]])
            {
                cost[adj[x][i]] = cost[x]  + weight[x][i];
                q.push({cost[adj[x][i]],adj[x][i]});
            }
        }
    }
    return cost[dest];
}
void dijkstra_init(int n)
{
    for(int i = 0;i<n;i++)
    {
        cost[i] = inf;
    }
}
int main ()
{
    int u,v,c;
    int vertex,edge;
   cin>>vertex>>edge;
   for(int i = 0;i<edge;i++)
   {

     cin>>u>>v>>c;
     adj[u].push_back(v);
     adj[v].push_back(u);
     weight[u].push_back(c);
     weight[v].push_back(c);
   }
   int g,h;
   dijkstra_init( vertex);
  cin>>g>>h;
 int a =  dijkstra(g,h);
  cout<<a;

}
