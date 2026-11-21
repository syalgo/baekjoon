#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[9],s=0,res=0;
    for(int i=0;i<9;i++){
        cin>>arr[i];
        s+=arr[i];
    }
    sort(arr,arr+9);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(i==j){
                continue;
            }
            if(s-arr[i]-arr[j]==100){
                arr[i]=-1;
                arr[j]=-1;
                res=1;
                break;
            }
        }
        if(res==1){
            break;
        }
    }
    for(int i=0;i<9;i++){
        if(arr[i]!=-1){
            cout<<arr[i]<<"\n";
        }
    }
    return 0;
}