#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,s=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int c=n;
    for(int i=0;i<n;i++){
        s+=arr[i]*c;
        c--;
    }
    cout<<s;
    return 0;
}