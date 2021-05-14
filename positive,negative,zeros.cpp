#include<iostream>
using namespace std;
int main()
{
	int i,a,count_positive=0,count_negative=0,count_zeros=0;
	for(i=1;i<=5;i++)
	{
		cout<<"enter the "<<i<<" "<<"number";
		cin>>a;
		if(a>0)
		{
			count_positive++;
		}
		else if(a<0)
		{
			count_negative++;
		}
		else
		{
			count_zeros++;
		}
	}
	cout<<"the count of positive number is :"<<count_positive<<"\n";
	cout<<"the count of negative number is :"<<count_negative<<"\n";
	cout<<"the count of zeros number is :"<<count_zeros;
	return 0;
}
