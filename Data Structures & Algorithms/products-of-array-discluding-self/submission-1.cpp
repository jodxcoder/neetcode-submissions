class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> arr(nums.size());
        arr[0]=0;
        for(int i=1;i<nums.size()-1;i++){
            int k=0,l=nums.size()-1;
            int pro1=1;
            int pro2=1;
            while(k<i){
                pro1=pro1*nums[k];
                k++;
            }
            while(l>i){
                pro2=pro2*nums[l];
                l--;
            }
            arr[i]=pro1*pro2;
        }
        int s=nums.size()-1;
        int pro3=1;
        while(s>0){
            pro3=pro3*nums[s];
            s--;
        }
        arr[0]=pro3;
        int j=0;
        int pro4=1;
        while(j<nums.size()-1){
            pro4=pro4*nums[j];
            j++;
        }
        arr[arr.size()-1]=pro4;
        return arr;
    }
};
