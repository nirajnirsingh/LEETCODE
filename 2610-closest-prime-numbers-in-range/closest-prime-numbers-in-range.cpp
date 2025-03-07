class Solution {
public:

    bool isprime(int num){

        int i=2;
        while(i <= sqrt(num)){
            if(num%i == 0){
                return false;
            }
            i++;
        }
        return true;
    }

    vector<int> closestPrimes(int left, int right) {
        
        int i = left;
        vector<int>primes;
        
        if(left == 1) left++;
        for(int i=left; i<=right; i++){
            if(isprime(i)){
                primes.push_back(i);
            }
        }
        vector<int>pair(2);
        int mindiff = INT_MAX;
        if(primes.size()<2) return {-1,-1};
        
        for(int i=1; i<primes.size(); i++){

            if(mindiff > primes[i]-primes[i-1]){
                mindiff = primes[i]-primes[i-1];
                pair[0] = primes[i-1];
                pair[1] = primes[i];
            }
        }
        if(pair[0] != -1 && pair[1] != -1)
            return {pair[0],pair[1]};

            return {-1,-1};
    }
};