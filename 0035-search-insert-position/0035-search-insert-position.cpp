class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
  int n = nums.size();
        int i=0 , j = n-1;
        if(nums[0]> target )  return 0;
         if(nums[n-1]< target )  return n;
        while(i<=j){
            int mid = i+ (j-i)/2;
            if(nums[mid]> target ) j = mid-1;
 else if( nums[mid]< target ) i = mid +1 ;
else return mid;
        }
    
    return i;
}
};