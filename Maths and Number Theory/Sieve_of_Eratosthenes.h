const int MAXN = 1e6 + 10; // // '9 * 10^7' maximum 

vector<bool> isPrime(MAXN + 1, true);
isPrime[0] = isPrime[1] = false;

for(int i=2; i*i<=MAXN; i++){
    if(isPrime[i]){
        for(int j=i*i; j<=MAXN; j+=i){
            isPrime[j] = false;
        }
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


const int MAXN = 1e6 + 10; // '9 * 10^7' maximum 

vector<bool> isPrime(MAXN + 1, true); 
isPrime[0] = isPrime[1] = false; 

void Sieve(){
    for(int i=2; i*i<=MAXN; i++){
        if(isPrime[i]){
            for(int j=i*i; j<=MAXN; j+=i){
                isPrime[j] = false;
            }
        }
    }
}
