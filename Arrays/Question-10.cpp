//SubArrays divisible by k
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> count(k,0);
        int sum= 0;
        for(int a:nums){
            sum += (a%k + k)% k;
            count[sum % k]++;

        }
        int result = count[0];
        for(int c : count){
            result += (c*(c-1))/2;
        }
        return result;

    }
};