class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxdist=0;
        int j=0,i=0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                maxdist=max(maxdist,j-i);
                j++;
            }
            else{
                i++;
            }
        }
        // for(int i=0;i<nums1.size();i++){
        //     for(int j=i;j<nums2.size();j++){
        //         if(nums1[i]<=nums2[j]){
        //             maxdist=max(maxdist,j-i);
        //         }
        //         else{
        //             break;
        //             i++;
        //         }
        //     }
        // }
        return maxdist;
    }
};