class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        int n = arr.size();
        int boat=0;
        sort(arr.begin(), arr.end());
        int i =0,j=n-1;
      
        while(i<=j){
            if(i==j){
            boat++;
            break;
         }
        if(arr[i]+arr[j]>limit){
            boat++;
            j--;}
         else if(arr[i]+arr[j]<=limit){
            boat++;
            i++;
            j--;
         }
         
        }
         return boat;
    }
};