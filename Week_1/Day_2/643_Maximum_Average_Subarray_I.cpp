class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int n=nums.size();

       int sum=0;
       for(int i=0; i<k; i++){
        sum+=nums[i];
       }
       int maxSum=sum;

       int startIdx=0; 
       int endIdx=k;

       while(endIdx<n){
        sum-=nums[startIdx];
        startIdx++;

        sum+=nums[endIdx];
        endIdx++;

        maxSum=max(maxSum, sum);
       }
       return (double)maxSum/k;
    }
};
