#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
  int n1=0,n2=0,n3=0,n, nn;
 
  vector<int> vector1(100,0);
  
  for (int i =0; i<100; i++){
    cin>> vector1[i];
    if (vector1[i]==1){
      n1++;
    }
    if (vector1[i]==2){
      n2++;
    }
    if (vector1[i]==3){
      n3++;
    }
  }
  nn=n1+n2;
  n=n1+n2+n3;
 
  vector<int> final(n,0);
 
  for (int i =0; i<n1; i++){
    final[i]=1;  
  }
  for (int i =n1; i<nn; i++){
    final[i]=2;
  }
  for (int i =nn; i<n; i++){
    final[i]=3;
  }
 
  for (int i =0; i<n; i++){
    if (i==n-1){
      cout << final[i] ;
    }
    else{
      cout << final[i] ;
      cout << "+";
    }
}
 
}
