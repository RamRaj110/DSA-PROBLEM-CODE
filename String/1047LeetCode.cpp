//LeetCode-1047. Remove All Adjacent Duplicates In String


class Solution {
public:
    string removeDuplicates(string s) {
        //Take Empty String.
       string ans = "";

       int i = 0;
       while(i < s.length()){
            if(ans.length() > 0 && ans[ans.length() -1] == s[i]){
                //Remove Last Char.whose in empty string.
                ans.pop_back();
            }else{
                //Add Char whose not in empty string.
                ans.push_back(s[i]);
            }
            i++;
       }
       return ans;
    }
};