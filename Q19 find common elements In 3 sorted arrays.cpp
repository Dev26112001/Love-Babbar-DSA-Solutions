#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class commonsorted {
	static void findcommon(int a[], int b[], int c[]) {
		int i=0,j=0,k=0;
		
		while(i<a.length() && j<b.length() && k<c.length()) {
			if(a[i]==b[j]  && b[j]==c[k]) {
				
			
			cout<<a[i];
			i++;
			j++;
			k++;
		}
		else if(a[i] < b[j])
		i++;
		
		else if(b[j]<c[k])
		j++;
		
		else
		k++;
		}
	}
	
	public static void main(string args[]) {
		int a[] = {1,5,10,20};
		int b[] = {5,7,14,20};
		int c[] = { 3,4,5,10,20,40,80}
		findcommon(a,b,c);	
		}
};
