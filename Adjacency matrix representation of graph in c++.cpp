//adjacency list representation of graph
#include<bits/stdc++.h>
using namespace std;
vector<int>graph[1000];
int main ()
    {
        int V,E;
        cin>>V>>E;
        for(int i = 1;i<=E;i++)
        {
       int u,v;
       cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
        }
         for(int i = 1;i<=E;i++)
        {
       cout<<"Vertex "<<i;
      for(auto child: graph[i] )
      {
          cout<<" -> "<<child;
      }
      cout<<endl;
        }
    }

