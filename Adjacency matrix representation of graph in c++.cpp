//adjacency matrix representation of graph
#include<bits/stdc++.h>
using namespace std;
int graph[1000][1000];
int main ()
    {
        int V,E;
        cin>>V>>E;
        for(int i = 1;i<=E;i++)
        {
       int u,v;
       cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;
        }
         for(int i = 1;i<=V;i++)
        {
        for(int j = 1;j<=E;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
        }
       //Neighborhood check
       cout<<"Neighborhood Check: ";
       int n;
       cin>>n;
       cout<<"Neighborhood of "<<n<<" is:";
       for(int i=1;i<=E;i++)
       {
           if(graph[n][i]==1)
           {
               cout<<" "<<i<<" ";
           }
       }
    }
