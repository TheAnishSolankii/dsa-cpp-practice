#include <iostream>
using namespace std;
#define ll long long

bool isPossible(ll *books,ll n, ll students, ll mid){
	ll cs = 1, cp = 0;
	for (int i = 0; i < n; ++i)
	{
		if(cp + books[i] <= mid){
			cp += books[i];
		}
		else{
			cs ++;
			cp = books[i];
		}
	}

	if(cs > students){
		return false;
	}
	return true;
}

ll bookAllocation(ll *books,ll n, ll students){
	ll s = 0, e = 0;
	// Calculate search space
	for (int i = 0; i < n; ++i)
	{
		s = max(s,books[i]);
		e += books[i];
	}

	ll ans;

	while(s<=e){
		ll mid = (s+e)/2;

		if(isPossible(books,n,students,mid) == true){
			ans = mid;
			e = mid-1;
		}
		else{
			s = mid + 1;
		}
	}

	return ans;
}

int main(){

	ll t;
	cin>>t;

	ll n,students;
	ll books[100005];

	while(t>0){
		cin>>n>>students;

		for (ll i = 0; i < n; ++i)
		{
			cin>>books[i];
		}


		cout << bookAllocation(books,n,students)<<endl;
		t--;
	}

	return 0;
}