#include<bits/stdc++.h>
using namespace std;
#define ll              long long int
#define ld              long double
#define mod             1000000007
#define inf             1e18
#define endl            "\n"
ll factor=0;
void calcFactor(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
               factor++;
                n/=i;
            }
        }
    }
    if(n>1){
        factor++;
    }
}
int main(int argc, char const *argv[]) {
    ll n;
    std::cin>>n;
    calcFactor(n);
    cout<<factor<<"\n";
    return 0;
}