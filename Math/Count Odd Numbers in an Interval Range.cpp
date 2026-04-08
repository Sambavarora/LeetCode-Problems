class Solution {
public:
    int countOdds(int low, int high) {
        // complexity=O(1)
       int total=high-low+1;
       if(total%2==0){
        int ans=total/2;
        return ans;
       }
       else{
        if(low%2==0){
        return total/2;
        }
        else{
            return total/2+1;
        }
       }
       
    //    Complexity=O(n)
        // int count=0;
        // for(int i=low;i<=high;i++){
        //     if(i%2!=0){
        //         count++;
        //     }
        // }
        // return count;
    }
};