class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxProduct = nums[0];
        int minProduct = nums[0];
        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            int tempMax = max({nums[i],
                               nums[i] * maxProduct,
                               nums[i] * minProduct});

            int tempMin = min({nums[i],
                               nums[i] * maxProduct,
                               nums[i] * minProduct});

            maxProduct = tempMax;
            minProduct = tempMin;

            ans = max(ans, maxProduct);
        }

        return ans;
    }
};