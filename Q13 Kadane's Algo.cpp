#include <bits/stdc++.h>
using namespace std;

class solution {
	public: int maxsubarray(int arr[], int n) {
		int maxsum = INT_MIN;
		int sum = 0;
		
		for(int i=0; i<n; i++) {
			sum = sum + arr[i];
			maxsum = max(maxsum,sum);
		}
		
		if(sum<0) {
			sum = 0;
		}
	}
	return maxsum;
};


