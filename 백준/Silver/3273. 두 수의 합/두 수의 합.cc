#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t,ans=0,k;
    int arr[1000001]={};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        arr[t]=1;
    }
    cin>>k;
    for(int i=1;i<1000001;i++){
        if(arr[i]==1){
            if(1<=k-i && k-1<=1000000){
                if(arr[k-i]==1){
                    ans++;
                }    
            }
        }
    }
    cout<<ans/2;
    return 0;
}