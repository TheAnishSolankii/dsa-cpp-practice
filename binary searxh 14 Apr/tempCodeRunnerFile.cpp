#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long 
bool ispossible(ll *a, ll n, ll cows, ll d){
    ll pc = 1, x = a[0];
    for (int i = 1; i < n; i++)
    {
        if(a[i] -x>=d){
            pc++;
            x=a[i];
            if(pc == cows)
            return true;


        }
    }
    return false;

}

ll aggressivecows(ll *a, ll n, ll cows){
    sort(a, a+n);
    ll s = 0, e = a[n-1]- a[0];
    ll ans;
    while(s<=e){
        ll mid =(s+e)/2;
        if(ispossible(a,n,cows,mid) == true){
            ans = mid;
            s = mid + 1;

        }else{
            e = mid - 1;

        }
    }
    return ans;
}
int main(){
    ll n, cows;
    ll a[100005];
    cin >> n >> cows;
    for (int i = 0; i < n ; i++){
        cin >> a[i];

    }
    cout << aggressivecows(a, n, cows) << endl;
    return 0;

}