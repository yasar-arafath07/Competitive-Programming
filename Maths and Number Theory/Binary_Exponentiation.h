// Computing Power of a number using Binary Exponentiation
// a - Base, n - Exponent 
long long binPow(long long a, long long n){
    long long res = 1; 

    while(n > 0){
        if(n & 1){
            res = res * a;
        }
        a = a * a; 
        n >>= 1; // n /= 2; 
    }
    return res;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Computing power of a number under modulo 'M' using Binary Exponentiation
long long customPow(long long a, long long n, long long M){
    long long res = 1;

    while(n > 0){
        if(n & 1){
            res = (res * a) % M;
            n--;
        }
        else{
            a = (a % M * a % M) % M;
            n >>= 1; // n = n / 2; 
        }
    }
    return res;
}
