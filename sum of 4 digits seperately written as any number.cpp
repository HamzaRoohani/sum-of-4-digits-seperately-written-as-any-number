#include<iostream>
using namespace std;
int main()
{
	int num,newnum,sum=0;
	cout<<"Enter a number containing 4 or more digits: ";
	cin>>num;
	while(num>0)
	{
		newnum=num%10;
		num=num/10;
		sum=sum+newnum;
	}
	cout<<"The sum of the numbers is: "<<sum<<endl;
	system("pause");
	return 0;
}