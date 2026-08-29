class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int AS =0;
        int ans = 0;
        int SOA=0;
        for(int i=0;i<n;i++){
            SOA+= nums[i];
        
        }
        AS= n*(n+1)/2;
        ans= AS-SOA;
        return ans;
    }
};