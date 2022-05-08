#include<bits/stdc++.h>
using namespace std;

void answer()
{
    int n,a,b;
    cin>>n>>a>>b;

    if(max(a,b) - min(a,b) > 2|| max(a,b) - min(a,b) <= 0){
        cout<<0<<endl;}

    else if(min(a,b) == 1 or max(a,b) == n or max(a,b)-min(a,b) == 2){ cout<<1<<endl;}
    else {cout<<2<<endl;}
}

int main()
{
 
  
  int t;
  cin>>t;
  while(t-->0){answer();}
  return 0;
}

