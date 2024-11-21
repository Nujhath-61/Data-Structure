
#include<bits/stdc++.h>
using namespace std;
vector<int>graph[1000];
int vis[1000];
void dfs(int start)
{
    vis[start] = 1;
    cout<<start<<" ";

   for(auto child: graph[start] )
   {
       if(vis[child] == 0)
       {
           dfs(child);
       }
   }
}
int main ()
{

int v,e;
cin>>v>>e;
for(int i=1;i<=e;i++)
   {
       int u,v;
       cin>>u>>v;
       graph[u].push_back(v);
        graph[v].push_back(u);


   }
printf("Enter Starting Node:\n");
int s;
scanf("%d",&s);
printf("DFS TRAVERSAL FROM VERTEX %d is:\n",s);
dfs(s);
}
