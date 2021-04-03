#include<stdio.h>
main()
{
	int a[]={-1,-1,-1,-1,-1,-1,-1,-1,-1},turn,pos;
	turn=1;
	while(turn<=9)
	{
		if (turn%2!=0)
		{
			printf("\nUser 1 position => ");
			scanf("%d",&pos);
			a[pos-1]=1;	
		}	
		else
		{
			printf("\nUser 2 position => ");
			scanf("%d",&pos);
			a[pos-1]=0;
		}
		
		
	
	if(a[0]==a[1] && a[1]==a[2])
	{
		if(a[0]==1)
		{
			printf("\nUser1 is the winner!!");
			turn=10;
		}
		
		else if(a[0]==0)
		{
			printf("\nUser2 is the winner!!");
			turn=10;
		}
		
	}
		if(a[3]==a[4] && a[4]==a[5])
	{
		if(a[3]==1)
		{
			printf("\nUser1 is the winner!!");
			turn=10;
		}
		
		else if(a[3]==0)
		{
			printf("\nUser2 is the winner!!");
			turn=10;
		}
		
	}
	if(a[6]==a[7] && a[7]==a[8])
	{
		if(a[6]==1)
		{
			printf("\nUser1 is the winner!!");
			turn=10;
		}
		
		else if(a[6]==0)
		{
			printf("\nUser2 is the winner!!");
			turn=10;
		}
		
	}
	if(a[0]==a[3] && a[3]==a[6])
	{
		if(a[0]==1)
		{
			printf("\nUser1 is the winner!!");
			turn=10;
		}
		
		else if(a[0]==0)
		{
			printf("\nUser2 is the winner!!");
			turn=10;
		}
		
	}
	if(a[1]==a[4] && a[4]==a[7])
	{
		if(a[1]==1)
		{
			printf("\nUser1 is the winner!!");
			turn=10;
		}
		
		else if(a[1]==0)
		{
			printf("\nUser2 is the winner!!");
			turn=10;
		}
		
	}
	if(a[2]==a[5] && a[5]==a[8])
	{
		if(a[2]==1)
		{
			printf("\nUser1 is the winner!!");
			turn=10;
		}
		
		else if(a[2]==0)
		{
			printf("\nUser2 is the winner!!");
			turn=10;
		}
		
	}
	if(a[0]==a[4] && a[4]==a[8])
	{
		if(a[0]==1)
		{
			printf("\nUser1 is the winner!!");
			turn=10;
		}
		
		else if(a[0]==0)
		{
			printf("\nUser2 is the winner!!");
			turn=10;
		}
		
	}
	if(a[2]==a[4] && a[4]==a[6])
	{
		if(a[2]==1)
		{
			printf("\nUser1 is the winner!!");
			turn=10;
		}
		
		else if(a[2]==0)
		{
			printf("\nUser2 is the winner!!");
			turn=10;
		}
		
	}
		printf("\n");
		a[0]==-1?printf(" _ "):a[0]==1?printf(" X "):printf(" O ");
		a[1]==-1?printf(" _ "):a[1]==1?printf(" X "):printf(" O ");
		a[2]==-1?printf(" _ "):a[2]==1?printf(" X "):printf(" O ");
		printf("\n");
		a[3]==-1?printf(" _ "):a[3]==1?printf(" X "):printf(" O ");
		a[4]==-1?printf(" _ "):a[4]==1?printf(" X "):printf(" O ");
		a[5]==-1?printf(" _ "):a[5]==1?printf(" X "):printf(" O ");
		printf("\n");
		a[6]==-1?printf(" _ "):a[6]==1?printf(" X "):printf(" O ");
		a[7]==-1?printf(" _ "):a[7]==1?printf(" X "):printf(" O ");
		a[8]==-1?printf(" _ "):a[9]==1?printf(" X "):printf(" O ");
		printf("\n");
	turn++;
	}
	if(turn==10)	
	{
		printf("There's a tie");
	}
}
