class Solution {
public:
    string convert(string s, int numrow) {
        vector<string> ans(numrow,"");
        for(int i=0;i<ans.size();i++)
        {
            ans[i].resize(s.length());
        }
        if(numrow==1 || s.length()<=numrow)
        {
            return s;
        }
        int flag=0,col=0,row=0;
        int i=0;
        while(s[i]!='\0')
        {
            if(flag==0)
            {
                ans[row][col]=s[i];
                i++;
                if(row==numrow-1)
                {
                    flag=1;
                }
                else
                    row++;
            }
            else if(flag==1)
            {
                if(row==1)
                {
                    col++;
                    row--;
                    flag=0;
                }
                else
                {
                row--;
                col++;
                ans[row][col]=s[i];
                i++;
                }
            }
        }
        string ret="";
        int count=0;
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].length();j++)
            {
                if(ans[i][j]!='\0')
                {
                    ret+=ans[i][j];
                    count++;
                    if(count==s.length())
                    {
                        return ret;
                    }
                }
            }
        }
        return ret;
        
        
    }
};