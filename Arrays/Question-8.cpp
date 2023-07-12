//Two sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans ;
        for(int i = 0;i<nums.size();i++){
            for(int j = 1;j<nums.size();j++){
                if((nums[i] + nums[j]) == target){
                    vector <int> :: iterator it1= find(ans.begin() ,ans.end(),i);
                    vector <int> :: iterator it2 = find(ans.begin() ,ans.end(),j);
                    if(it1 == ans.end() && it2 == ans.end() && i!=j){
                        ans.push_back(i);
                        ans.push_back(j);
                    }

                }
            }
        }
        return ans;
    }
};