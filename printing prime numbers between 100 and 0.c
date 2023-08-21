#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,j,rem,num;
	for (i=100 ; i>=0 ; i--)
	{
		num=0 ;
		for (j=1 ; j<=i ; j++)
		{
			rem=i%j ;
			if (rem==0)
			num++ ;
		}
		if ((num==2)&&(num<=100))
		{
			printf ("\nIt is a prime number %d",i);
		}
		
		else 
		{
			printf ("\nIt is not a prime number %d",i);
		}
		
	}
getch ();	
return 0;
}


