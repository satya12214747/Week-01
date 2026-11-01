class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(int i=0;i<sentences.size();i++)
        {
            int space=0;
            string s=sentences[i];
            for(int j=0;j<s.length();j++){
                if(s[j]==' ') space++;
            }
            // words = spaces + 1
            ans=max(ans,space+1);
        }
        return ans;
    }
};
