#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,j,num,rem;
	for (i=2 ; i<100 ; i++)
	{
		num=0 ;
		for (j=1 ; j<=i ; j++)
		{
			rem=i%j ;
			num++;
		}
		if (num==2)
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



