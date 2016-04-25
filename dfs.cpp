#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
vector< vector<int> > g(1000);
vector<int> v(1000);
void DFS(int s)
{		
	v[s]=1;
	
		vector< int > :: iterator col;
		for(col=g[s].begin();col!=g[s].end();col++)
		{	
			if(v[*col]==0)
			{
			DFS(*col);
			
			
			}
		}
	cout<<s<<" ";
	

}
int main()
{	int e,n;
	cout<<"NODES AND EDGES?\n";
	cin>>n>>e;
				

	g.resize(n);
	
		cout<<"Enter edges\n";
	while(e--)
	{	int a1,a2;
		
		cin>>a1>>a2;
		g[a1].push_back(a2);

	
	}
	

	vector< int > :: iterator col;

	for(int i=1;i<=n;i++)
{
	fill(v.begin(),v.end(),0);
	cout<<"From "<<i<<":";
	DFS(i);
	cout<<"\n";
}	
	

}
