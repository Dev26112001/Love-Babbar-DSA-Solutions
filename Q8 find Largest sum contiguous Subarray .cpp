#include <bits/stdc++.h>
using namespace std;

int maxsumsubarray(int a[]) {
	int maxsum=0;
	int cursum=0;
	
	for(int i=0;i<a.length;i++) {
		cursum = cursum + a[i];
		
		if(cursum>maxsum) {
			maxsum=cursum;
		}
		
		if(cursum<0) {
			cursum=0;
		}
	}
	return maxsum;
}

