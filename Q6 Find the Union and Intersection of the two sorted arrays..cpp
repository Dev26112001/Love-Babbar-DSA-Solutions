//Find the Union and Intersection of the two sorted arrays.
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		
		int a[n], b[n];
		
		unordered_map<int,int>map;
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			map[a[i]]++;
		}
		
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			map[b[i]]++;
		}
		
		cout<<map.size()<<endl;
	}
}
