#include <stdio.h>
int reverse(int);
int main(void) {
	int num=12,ans=0,revans=0;
	int temp,val,new=0;
	temp=num;
	ans=temp*temp;
    val=reverse(num);
  //  printf("%d\n",val);
    new=val*val;
	revans=reverse(new);
//	printf("%d\n",revans);
	if(ans==revans)
	{
	    printf("%d is a adam number",temp);
	}
	else
	{
	    printf("%d is not a adam number",temp);
	}
	return 0;
}
int reverse(int n)
{
    int temp1,rem=0,rev=0,num1=n;
    while(num1>0){
	rem=num1%10;
	rev=rev*10+rem;
	num1=num1/10;
    }
	return rev;
}
