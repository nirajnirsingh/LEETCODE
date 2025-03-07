class Solution {
public:
/////////////////////////////////////////////////////////////////// 
    //BRUTE FORCE APPROACH 


    // bool isprime(int num){

    //     int i=2;
    //     while(i <= sqrt(num)){
    //         if(num%i == 0){
    //             return false;
    //         }
    //         i++;
    //     }
    //     return true;
    // }

    // vector<int> closestPrimes(int left, int right) {
        
    //     int i = left;
    //     vector<int>primes;
        
    //     if(left == 1) left++;
    //     for(int i=left; i<=right; i++){
    //         if(isprime(i)){
    //             primes.push_back(i);
    //         }
    //     }
    //     vector<int>pair(2);
    //     int mindiff = INT_MAX;
    //     if(primes.size()<2) return {-1,-1};
        
    //     for(int i=1; i<primes.size(); i++){

    //         if(mindiff > primes[i]-primes[i-1]){
    //             mindiff = primes[i]-primes[i-1];
    //             pair[0] = primes[i-1];
    //             pair[1] = primes[i];
    //         }
    //     }

    //     if(pair[0] != -1 && pair[1] != -1)
    //         return {pair[0],pair[1]};

    //         return {-1,-1};
    // }

    vector<int> closestPrimes(int left, int right){

        vector<bool>isPrime(right+1,true);

        isPrime[0] = false;
        isPrime[1] = false;

        for(int i=2; i<right; i++){
           
           if( isPrime[i]){

            for(int j=2; i*j<= right; j++){

                isPrime[i*j] = false;
            }
           }
        }
        int mindiff = INT_MAX;
        vector<int>pair(2);
        vector<int>primes;
       for(int i=left; i <= right; i++){
            if(isPrime[i]){
                primes.push_back(i);
            }
        }
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