bool is_prime(ll n){
    if(n<=3 and n!=1) return 1;
    if(n%2==0 or n%3==0) return 0;

    for(ll i=5; i*i<=n; i+=6){
        cout<<i<<" ";
        if(n%i==0 or n%(i+2)==0){
            return 0;
        }
    }
    return 1;
}
