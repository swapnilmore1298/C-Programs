#include<iostream>
using namespace std;
int main()
{
	int sum=0,n;
	cout<<"Enter the number:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"Sum is:"<<sum;
	return 0;
	
}
