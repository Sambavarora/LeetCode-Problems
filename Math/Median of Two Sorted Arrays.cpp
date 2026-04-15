class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector <int>merge;
      for(int x:nums1)merge.push_back(x); 
      for(int x:nums2)merge.push_back(x);
      sort(merge.begin(),merge.end());
      if(merge.size()%2!=0){
        double median=merge[merge.size()/2];
        return median;
      }
      else{
        double median=(merge[merge.size()/2]+merge[merge.size()/2-1])/2.0;
        return median;
      }
      return -1;
    }
};