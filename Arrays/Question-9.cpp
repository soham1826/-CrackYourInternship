// Best time to buy and sell stockes - II

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0;
        for(int i=1; i<=n-1; i++){
            int diff=prices[i]-prices[i-1];
            if(diff>0){ans+=diff;}
        }
        return ans;
    }
};