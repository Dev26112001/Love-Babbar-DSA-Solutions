#include <iostream>
#include <bits/stdc++.h>
using namespcae std;

class rearrange {
	public(int a[], int n) {
		int i = 0;
		int j = n-1;
		
		while(i<n) {
			while(i<n-1 && a[i]>0)
			i++;
			
		while(j>=0 && a[j]<0)
		j--;
		
		if(i<j)
		swap(a,i,j)
		
		if(i==0 || i==n)
		return;
		}
		
		int k = 0;
		
		while(k<n && i<n) {
			swap(a,k,i);
			i++;
			k+=2;
		}
		
		static void swap(int a[], int i, int j) {
			int c = a[i];
			a[i] = a[j];
			a[j] = c
		}
		
		public static void main(string args[]) {
			int a[] = {2,3,-4,-1,6,-9}
			int n = a.length;
			rearrange(a,n);
			
			for(int i=0;i<a.length;a++)
			cout<<a[i];
			}
		}
	}
};
