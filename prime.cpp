#include<iostream>
using namespace std;
int main()
{
int v,i,n,m,flag=0;
bool x=true;
cout<<"enter the number:"<<"\n";
cin>>v;
m=v/2;
for(i=2;i<=m;i++)
{
if(n%i==0)
{
  cout<<"Composite";
  flag=1;
  break;
}}
if(flag==0)
{
  cout<<"Prime";
}

return 0;

}
