#include <bits/stdc++.h>
using namespace std;

class solution {
	public:
		int maxprofit(vector<int>&&prices) {
			int n = prices.n;
			int mxright = prices[n-1]
			int mxprofit = 0;
			
			for(int i=n-2;i>=0;i-- ) {
				mxright = max(prices[i], mxright);
				mxprofit = max(mxprofit, mxright-prices[i]);
			}
			return mxprofit;
		}
};


