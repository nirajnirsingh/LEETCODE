class Solution {
public:
    char kthCharacter(int k) {

        string w = "a";
        
        
        while(w.size()<=k){

            string ap = "";
            for(char i:w){
                ap += char(i+1);
            }
            w += ap;
        }

        return w[k-1];
    }
};