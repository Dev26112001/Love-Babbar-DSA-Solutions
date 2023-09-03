#include <bits/stdc++.h>
using namespace std;

int solve(int *arr, int n, int k) {
	sort(arr,arr+n);
	int ans = arr[n-1]-arr[0];
	
	for(int i=1;i<n;i++) {
		int max = max(arr[n-1]-k, arr[i-1]+k);
		int min = min(arr[0]+k, arr[i]-k);
		
		int diff = max - min;
		ans = min(ans, diff);
	}
	return ans;
}

int main() {
	freopen("input.txt", "r", stdin);
	int n;
	cin>>n;
	int arr[1000];
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int k;
	cin>>k;
	
	cout<<solve(arr,n,k)<<endl;
	return 0;
}



