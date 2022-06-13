#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,k;
    cin >> a>>k;
    int b[a];
    for(int i=0; i<a; i++){
       cin >> b[i];
    }
   

    int st=0;
    int end=a-1;

    while(st<=end){
        int mid=st+(end-st)/2;

        if(k==b[mid]){
            cout<<mid<<endl;
            return 0;
        }
        else if(b[mid]<k){
            st=mid+1;

        }
        else{
            end=mid-1;
        }
        

    }
    cout<<"not found"<<endl;
}