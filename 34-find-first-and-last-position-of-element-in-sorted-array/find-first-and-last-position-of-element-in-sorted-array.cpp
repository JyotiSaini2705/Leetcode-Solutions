class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int first = -1;
        

        while(i <= j){
            int mid = i + ( j-i) / 2;

            if(nums[mid] == target){
                first = mid;
                j = mid - 1;
            }
            else if( nums[mid] < target ){
                i = mid +1;
            }
            else{
                j= mid -1;
            }
        }




        i = 0;
        j = n-1;
        int last = -1;
        

        while(i <= j){
            int mid = i + ( j-i) / 2;

            if(nums[mid] == target){
                last = mid;
                i = mid + 1;
            }
            else if( nums[mid] < target ){
                i = mid +1;
            }
            else{
                j= mid -1;
            }
        }
        return { first , last};
    }
};