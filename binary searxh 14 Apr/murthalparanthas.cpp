#include <iostream>
using namespace std;
#define ll long long

bool isPossible(ll *rank,ll n,ll total_paranthas, ll mid){

	for (int i = 0; i < n; ++i)
	{
		ll r = rank[i], ct = 0, p = 1;
		
		while(ct + p*r <= mid){
			ct += p*r;

			total_paranthas--;

			if(total_paranthas == 0){
				return true;
			}
			p++;
		}
	}

	return false;
}

ll murthalParantha(ll *rank,ll n,ll total_paranthas){
	ll s = 1, e = 1e15;
	ll ans;
	while(s<=e){
		ll mid = (s+e)/2;
		if(isPossible(rank, n, total_paranthas, mid) == true){
			ans = mid;
			e = mid -1;
		}
		else{
			s = mid + 1;
		}
	}

	return ans;
}

int main(){

	ll total_paranthas,n,rank[100005];

	cin>>total_paranthas>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>rank[i];
	}

	cout << murthalParantha(rank,n,total_paranthas)<<endl;

	return 0;
}















