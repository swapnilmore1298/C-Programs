#include<iostream>
using namespace std;
int main()
{
	int v,c,temp,j;
	cout<<"Enter first number:"<<"\n";
	cin>>v;
	cout<<"Enter second number:"<<"\n";
	cin>>j;
	cout<<"Numbers are :"<<v<<j<<"\n";
	temp=v;
	v=j;
	j=temp;
	cout<<"swapped numbers are:"<<v<<j;
	
}
