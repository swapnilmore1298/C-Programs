#include<iostream>
using namespace std;
int main()
{
	//YOU CAN DO THIS WITHOUT USING TEMPORARY VARIABLE
	int v,c,j;
	cout<<"Enter first number:"<<"\n";
	cin>>v; //SUPPOSE V = 10
	cout<<"Enter second number:"<<"\n";
	cin>>j; //SUPPOSE J = 05
	cout<<"Numbers are :"<<v<<j<<"\n";
	v=j+V; // HERE V BECOMES 15
	j=v-j; // HERE J BECOMES 10
	v=v-j; // HERE V BECOMES 5 SO SWAPPED 
	cout<<"swapped numbers are:"<<v<<j;
	
}
