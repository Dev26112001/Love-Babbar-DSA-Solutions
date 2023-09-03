#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,k;
cin>>n>>K;

int A[n];

for(int i=0;i<n;i++) {
cin>>A[i];

map<int,int> m;
map<int,int> :: iterator itr;

for(int i=0;i<n;i++)
m[A[i]]++;

for(int i=0; i<n; i++)

if(m[k-A[i]]>0) {
cout<<A[i]<<","<<k-A[i]<<endl;
m[A[i]]=0;
count++;
}
cout<<count;
}




