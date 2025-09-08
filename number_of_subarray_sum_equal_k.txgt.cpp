class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     int presum=0,count=0;
     int n=nums.size();
     map<int,int>mp;
     mp[0]++;
     for(int i=0;i<n;i++){
       presum+=nums[i];
       int remove=presum-k;
       count+=mp[remove];
       mp[presum]++;
     }
     return count;

    }
};