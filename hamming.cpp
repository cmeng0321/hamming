#include <iostream>
int hammingDistance(int x, int y) {
    int i=0,j=0,dis=0,k;
    int n=x,m=y;
    int a[32]={0},b[32]={0};
    while(n>0)
    {
        a[31-i]=c(n);
        n=n/2;
        i++;
    }
    while(m>0)
    {
        b[31-j]=c(m);
        m=m/2;
        j++;
    }
    
    
    for(i=0;i<=31;i++)
    {
        if(a[i]!=b[i]) dis++;
    }
    return dis;
}
int c(int x)
{
    int a;
    if(x%2!=0) a=1;
    else a=0;
    return a;
}
int main()
{
	int a,b,c;
	std::cin >> a >>b;
	c=hammingDistance(a,b);
	std::cout <<c;
}

