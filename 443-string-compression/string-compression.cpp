class Solution {
public:
    int compress(vector<char>& chars) {

       // vector<int>freq(26,0);
        int n=chars.size();
        //int ans=0;

        // for(int i=0; i<n; i++){
        //     freq[chars[i]-'a']++;
        // }
        vector<char>help;
        //chars.erase(chars.begin(),chars.end());
        
        // for(int i=0; i<26; i++){
        //     if(freq[i]>1)
        //     {
        //         chars.push_back(char(i+'a'));
        //         string temp = to_string(freq[i]);
        //         int k=0;
        //         while(k<temp.size())
        //         chars.push_back(temp[k++]);

        //     }
        //     else if(freq[i] == 1){
        //         chars.push_back(char(i+'a'));
        //     }
        // }
       // cout<<ans;
        int i=0;
        while(i<n){
            char ch=chars[i];
            int j=i+1;
            int count=1;
            help.push_back(chars[i]);
            while(j<n && chars[i] == chars[j]){
                count++;
                j++;
            }
            //cout<<j<<" ";
            if(count>1){
              string sh =  to_string(count);
              for(int k=0; k<sh.size(); k++){
                help.push_back(sh[k]);
              }
            }
            i=j;
        }
        
        chars = help;

        return chars.size();
        
    }
};