class Solution {
public:
    string prefix(string s1,string s2)
    {
        string ans="";
        int i=0,j=0;
        while(i<s1.length() || j<s2.length())
        {
            if(s1[i]==s2[j])
            {
                ans+=s1[i];
            }
            else
                return ans;
            i++;
            j++;
        }
        return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        if(strs.size()==0)
        {
                return ans;
        }
        if(strs.size()==1)
        {
                return strs[0];
        }
        if(strs.size()==2)
        {
            return prefix(strs[0],strs[1]);
        }
        ans=prefix(strs[0],strs[1]);
        for(int i=2;i<strs.size();i++)
        {
            ans=prefix(ans,strs[i]);
        }
        

        
        return ans;
        
    }
};