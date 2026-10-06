class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        int i =0, j=n-1,ans1=0,ans2=0;
        while(i<j){
            if( arr[i] + arr[j]> target)j--;
            else if( arr[i]+ arr[j] <target)i++;
            else{
               ans1=i+1;
               ans2=j+1;
               break;
            } 
        }
        return{ans1,ans2};
    }
};