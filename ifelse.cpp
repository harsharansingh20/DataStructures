#include<iostream>
using namespace std;
 int main()
 {

#ifndef ONLINE JUDGE
  freopen("input.txt","r", stdin);
  freopen("output.txt","w", stdout);
#endif

int savings;
cin>>savings;

if (savings>7000)
{
  if (savings>10000){
    cout<<"roadtrip with neha \n";
  }else{
    cout<<"shopping with neha \n";
  }
  {
    /* code */
  }
  
} else if(savings>3000){
cout<<"rashmi \n";
}else{
  cout<<"friends\n";
}

 return 0;
 }

