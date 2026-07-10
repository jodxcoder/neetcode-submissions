class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> arr(nums1.size()+nums2.size());
        int i=0,j=0,k=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                arr[k]=nums1[i];
                k++;
                arr[k]=nums2[j];
                k++;
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                arr[k]=nums1[i];
                k++;
                i++;
            }
            else{
                arr[k]=nums2[j];
                k++;
                j++;
                }
        }
        while(i<nums1.size()){
            arr[k]=nums1[i];
            k++;
            i++;
        }
        while(j<nums2.size()){
            arr[k]=nums2[j];
            k++;
            j++;
        }
        int l=0,r=arr.size()-1;
        while(l<r-1){
            l++;
            r--;
        }
        return (arr[l]+arr[r])/2;
    }
};
