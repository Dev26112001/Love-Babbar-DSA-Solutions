//Find if there is any subarray with sum equal to 0

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		
		int a[n+1];
		
		for(int i=0;i<=n;i++){
			cin>>a[i];
			
			int s = 0;
			
			unordered_map<int,int>m;
			
			for(int i=1;i<n;i++){
				s=s+a[i];
				
				if(s==0 or m[s] or a[i]==0){
					f=1;
					break;
					
				}
				else{
					m[s]=1;
				}
			}
			if (f==1) cout<<"Yes/n";
			else cout<<No;
		}
		return 0;
	}
}
