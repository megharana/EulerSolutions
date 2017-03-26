#include<iostream.h>

int main()
{
	int num,sum=0;
	for(num=1;num<1000;num++)
	{
		if(num%3==0 || num%5==0)
		{	
			sum+=num;   //sum of the numbers divisible by 3 or 5
		}
		
	}
	cout<<"the sum is:"<<sum;
return 0;
}
