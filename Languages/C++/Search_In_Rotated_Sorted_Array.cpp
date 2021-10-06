#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll  long long int
using namespace __gnu_pbds;
using namespace std;

typedef tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update> pbds;

#define test   ll T;cin >> T;while (T--)
#define f(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
#define rf(i, a, b) for (ll i = (ll)a; i >= (ll)b; i--)
#define pb push_back

const ll MOD = 1000000000 + 7;
const ll MOD1 = 998244353;
 
 ll search(vector<ll> nums, ll target) {
        ll n=nums.size();
        ll lo=0,hi=n-1;
        if(nums[0]==target)
            return 0;
        if(nums[n-1]==target)
            return n-1;
        while(lo<=hi)
        {
            ll mid=lo+(hi-lo)/2;
            if(nums[mid]==target)
                return mid;
           
            else if(nums[mid]>=nums[lo])
            {
               if(target>=nums[lo]&&target<=nums[mid])
                   hi=mid-1;
                else
                    lo=mid+1;
            }
            else
            {
               if(target>=nums[mid]&&target<=nums[hi])
                   lo=mid+1;
                else
                    hi=mid-1;
            }
        }
        return -1;
        
    
    }

int main()
{
   //fast;
    
   ll n;
   cin>>n;
   vector<ll>v(n);
   
   for(ll i=0;i<n;i++)
    cin>>v[i];

    ll target;
   cin>>target;

    ll ans=search(v,target);

    if(ans!=-1)
    cout<<"Element present at index "<<ans<<"\n";
    else
    cout<<"Element not present\n";

 
  
cerr << "Time Elapsed : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
   return 0;
 
}