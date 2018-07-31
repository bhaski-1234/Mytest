#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,x,y;
   cin>>n;
   while(n--){
       cin>>x>>y;
       if(x>=y && (x+y)%2 == 0 && x-y<=2){
           if(x%2 == 0 && y%2 == 0){
               cout<<x+y<<"\n";
           }
           else {
               cout<<x+y-1<<"\n";
           }
       }
       else{
           cout<<"No Number"<<"\n";
       }
   }
    
}
