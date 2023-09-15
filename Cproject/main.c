#include <stdio.h>
#include <stdlib.h>
#include"player.h"
void main()
{
	int n,ch;
	printf("\n+-----------------------------------------------------------------------------------------------------------------------+");
	printf("\t\t\t\t************Welcome To Cricket Players Management System***********");
	printf("\n+-----------------------------------------------------------------------------------------------------------------------+");
	printf("\n\nEnter the Number of Players:");
	scanf("%d",&n);
	Player *arr;
	arr=(Player*)malloc(sizeof(Player)*n);

	do
	{
		printf("\n<<<<<<<Menu>>>>>>>");
		printf("\n1.Store Player\n2.Display Player\n3.Search Player\n4.Update Player\n5.Delete Player\n6.Add Players\n7.Exit");
		printf("\n\nEnter Your Choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1 :storePlayer(arr,n);
					break;
							
			case 2 :displayPlayer(arr,n);
					break;
					
			case 3 :searchPlayer(arr,n);
					break;
						
			case 4 :updatePlayer(arr,n);
					break;
							
			case 5 :removePlayer(arr,&n);
					break;
					
			case 6 :addPlayer(arr,&n);
					break;
					
			case 7 :
					break;
							
			default :printf("\nWrong Choice!!!");
					break;
		}
				
	}while(ch!=7);
	
	free(arr);
}

