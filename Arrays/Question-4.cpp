// Chocolate distribution
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long min_diff = INT_MAX;
    long long i = 0;
    long long j = m-1;
    sort(a.begin(),a.end());
    while(j<n){
        min_diff = min(min_diff,a[j++]-a[i++]);
    }
    
    return min_diff;
    }   
};