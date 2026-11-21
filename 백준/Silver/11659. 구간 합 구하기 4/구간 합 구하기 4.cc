#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int n,c,t,s,e;
    cin>>n>>c;
    int arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        cin>>t;
        arr[i]=arr[i-1]+t;
    }
    for(int i=0;i<c;i++){
        cin>>s>>e;
        cout<<arr[e]-arr[s-1]<<"\n";
    }
    return 0;
}