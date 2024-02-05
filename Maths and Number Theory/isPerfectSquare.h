bool isPerfectSquare(int n){
    int x = sqrt(n); // 'sqrtl(n)' for long long 
    while(x * x > n) --x;
    while(x * x < n) ++x;
    return (x * x == n);
}
