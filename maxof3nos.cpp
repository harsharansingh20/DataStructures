#include<iostream>
using namespace std;
 int main()
 {

// #ifndef ONLINE JUDGE
//   freopen("input.txt","r", stdin);
//   freopen("output.txt","w", stdout);
// #endif

int a,b,c;
cin >>a>>b>>c;

if (a>b)
{
    if (a>c)
    {
       cout<<"a is greatest \n";
    }
    else{
    cout<<"c is greatest\n";
}
}
else
  {
    if (b>c)
    {
              cout<<"b is greatest \n";

    }
    else{
               cout<<"c is greatest \n";

        }
  }



return 0;
 }