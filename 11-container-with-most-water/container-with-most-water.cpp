class Solution {
public:
    int maxArea(vector<int>& h) {

        int area = 0;
        // for(int i=0; i<h.size(); i++){
        //     int minh = 0;
        //     for(int j=i+1; j<h.size(); j++){
        //          minh = min(h[i],h[j])*(j-i);
        //         area = max(minh,area);
        //     }
        
        
        // }

        int i = 0;
        int j = h.size()-1;
         int maxA = 0; 
        while(i<j){
        //    int breadth = j-i;
        //    int minh = min(h[i],h[j]);
           area =  min(h[i],h[j]) *(  j-i);
            maxA = max(area,maxA);  

            if(h[i]>h[j]){
                 j--;
            }
            else{ 
                i++;
            }
        }
        
        return maxA;
    }
};