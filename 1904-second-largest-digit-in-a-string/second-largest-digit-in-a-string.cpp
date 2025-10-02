class Solution {
public:
    int secondHighest(string s) {

        int secondLar = -1;
        int lar = -1;

        for (auto i : s) {
            int num;
            if (isdigit(i)) {
                num = i - '0';

                if (num > lar) {
                    secondLar = lar;
                    lar = num;
                }else if(num > secondLar && num < lar)
                  secondLar = num;
            }
        }

        return secondLar;
    }
};