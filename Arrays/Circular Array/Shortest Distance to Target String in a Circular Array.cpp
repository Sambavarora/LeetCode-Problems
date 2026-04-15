class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
       int move=-1;
       int next=-1;
       int i=startIndex;
       if(words[startIndex]==target)return 0;
       for(int j=1;j<=words.size();j++){
        i=(i+1)%words.size();
        if(words[i]==target){
            move=j;
            break;
        }
       } 
       i=startIndex;
       for(int j=1;j<=words.size();j++){
       i=(i-1+ words.size()) % words.size();
       if(words[i]==target){
        next=j;
        break;
        }
       }
       if(move==-1&&next==-1)return -1;
       if(move==-1)return next;
       if(next==-1)return move;
       return min(move,next);
    }
};