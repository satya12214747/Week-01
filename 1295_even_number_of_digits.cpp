class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int num=nums[i], d=0;
            while(num>0){
                d++;
                num/=10;
            }
            if(d%2==0)
                count++;
        }
        return count;
    }
};
