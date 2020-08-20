#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int t, n;
  cin>> t;
 
  for (int i =0; i<t; i++){
    cin>>n;
    int a[n];
    int cambios, BienAcomodados=0, MalAcomodados=0;
 
    for (int j =0; j<n; j++){
      cin>> a[j];
        if(a[j]%2==0){
          BienAcomodados++;
        }
        else{
          BienAcomodados--;
        }
 
        if(a[j]%2 != j%2){
          MalAcomodados++;
        }
    }
 
    if(n%2!=BienAcomodados){
      cout<<-1<<endl;
    }
    else{
      cambios=MalAcomodados/2;
      cout<<cambios<<endl;
    }
    
  }
}
