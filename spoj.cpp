#include<bits/stdc++.h>
using namespace std;
int main(){
    long x,y,i;
   cin>>x>>y;
    while(x != 0 && y != 0){
       
        int arr[x],arr1[y];
        for( i = 0;i<x;++i){
           cin>>arr[i];
        }
        for(i = 0;i<y;++i){
         cin>>arr1[i];
        }
        sort(arr,arr+x);
        sort(arr1,arr1+y);
   if(arr[0] == arr1[1] || arr[0] > arr1[1] ){
       cout<<"N"<<"\n";
   }
   else{
       cout<<"Y"<<"\n";
   }
   cin>>x>>y;
    }
} 
