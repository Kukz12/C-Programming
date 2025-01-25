class Solution {
public:
    int lengthOfLastWord(string s) {
        int sum=0;
        int i=s.length()-1;
        for(;i>=0;i--)
        { 
            if(i==0)
            {
              break;
            }
            if(s[i]!=' ')
            {
            if(s[i-1]==' ')
            {
                break;
            }
            }
        }
        for(;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
            sum=sum+1;
            }
        }
        return sum;
    }
};
