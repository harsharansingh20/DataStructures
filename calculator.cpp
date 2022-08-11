#include<iostream>
using namespace std;
int main()
{

int n1,n2;
cout<<"input 2 numbers";
cin>>n1>>n2;
    
char operations;
cout<<"input the operator";
cin>>operations;

switch (operations)
{
    case  '+':
    cout<<n1+n2<<endl;
    break;

    case  '-':
    cout<<n1-n2<<endl;
    break;

    case  '*':
    cout<<n1*n2<<endl;
    break;

    case  '/':
    cout<<n1/n2<<endl;
    break;

default:
    break;
}





}