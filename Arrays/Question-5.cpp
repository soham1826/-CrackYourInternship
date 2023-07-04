//Finding duplicate entry number
// My solution - i used arrays
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int p = nums.size();
        if(nums[i] == nums[i+1]){
            return nums[i];
        }
        i = i+1;
        while(i< p-1){
            if(nums[i]==nums[i+1] || nums[i] == nums[i-1]){
                return nums[i];
            }
            i =i+1;
        }
        if(nums[i] == nums[i-1]){
            return nums[i];
        }
        return -1;
    }
};

// ideal solution - using hashmap
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<bool>hash(nums.size(),false);
    for(int i=0;i<nums.size();i++)
        {
        if(hash[nums[i]]){return nums[i];}
        hash[nums[i]]=true;
        
        }
        
        return 1;
    }
};