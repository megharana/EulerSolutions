#include<iostream.h>

int main()
{
	 int n=10,sum_nat,sum_sq,diff;
 	sum_nat=n*(n+1)/2;			//sum of natural numbers upto 10
	sum_sq=n*(n+1)*(2*n+1)/6;		//sum of squares of natural numbers
	diff=sum_nat*sum_nat-sum_sq;		//difference between squares
	cout<<"the diff is "<<diff;
	return 0;
}
