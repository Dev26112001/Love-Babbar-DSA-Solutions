#include <bits/stdc++.h>
using namespace std;

class duplicates {
	public static void main(string args[]) {
		int a[] = {1,2,3,4,4,5,6,3};
		for(int i=0;i<a.length();i++) {
			for(int j=i+1; j<a.length;j++) {
				if(a[i]== a[j]) {
					system.out.println(a[j]);
				}
			}
		}
	}




