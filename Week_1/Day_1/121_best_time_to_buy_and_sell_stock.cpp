class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n=prices.size();
    int profit=0;
    int ans=0;
    int minprice=prices[0];

    for(int i=1; i<n; i++){
        minprice=min(minprice, prices[i]);
        profit=prices[i]-minprice;
        ans=max(ans,profit);
    }
    return ans;
    }
};
