#include <bits/stdc++.h>
using namespace std;

class solution {
	public int jump(int [] nums) {
		int jump = 0;
		int pos = 0;
		int des = 0;
		
		for(int i = 0; i<nums.length-1;i++) {
			des = Math.max(des,nums[i]+1);
			
			if(pos==i){
				pos = des;
				jump++;
			}
		}
		return jump;
	}
};
