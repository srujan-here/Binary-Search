#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,k;
    cin >> a>>k;
    int b[a];
    for(int i = 0; i < a;i++){
        cin>>b[i];
    }
    int ans=-1;
    int st=0,end=a-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(b[mid]==k){
            ans=mid;   //st=mid+1 when finding the last occurance
            end=mid-1;
        }
        else if(b[mid]>k){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    cout<<ans<<endl;
}