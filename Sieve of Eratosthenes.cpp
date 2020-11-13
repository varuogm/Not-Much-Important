  ll maxN;
	maxN = 100000;
	ll a[maxN+1];
	for(ll i=2;i<=maxN;i++) 
	  a[i]=1;
	a[0] =0; a[1] =0; 
	
	for(ll i=2;i*i<=maxN;i++){
		if(a[i]){
			for(ll j=i*i;j<=maxN;j+=i){
				a[j] = 0;
			}
		}
	}
