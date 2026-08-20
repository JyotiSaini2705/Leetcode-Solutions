class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
         k = k %n;
       vector<int> ans;

        int j = n-k;

        while(j < n){
          ans.push_back(nums[j]);
            j++;
        }

        int i = 0;
        while(i < n-k){
           ans.push_back(nums[i]);
            i++;
        }

        for (int i = 0; i < n; i++) {
            nums[i] = ans[i];
        }

    }
};