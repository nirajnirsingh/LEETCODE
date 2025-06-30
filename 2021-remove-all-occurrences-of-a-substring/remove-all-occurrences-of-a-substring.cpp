class Solution {
public:
    string removeOccurrences(string s, string part) {

        int n=part.size();
        for(int i=0;i<s.size();i++){

         if(s.find(part) < s.size())
         {
            s.erase(s.find(part), n);
            i=-1;
            //cout<<s<<endl;
         }
        }
        return s;
    }

};