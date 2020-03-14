#include<iostream>

using namespace std;

int main()
{
int max=0; //assume that lowest value of array is greater than 0
int a[5]={2,4,6,28,18};
for (int i=0;i<5;i++)
{
  if(a[i]>max)
  {
    max=a[i];//if any large element is found, it will store it in max
  }
}
cout<<max;
return 0;
}
