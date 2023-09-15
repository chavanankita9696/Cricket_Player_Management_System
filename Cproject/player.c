#include"player.h"

void storePlayer(Player* arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n***************************** Enter The Player %d Detail *****************************",i+1);
			
		arr[i].jersey_no=i+1;	
		printf("\nPlayer Jersey Number	 				: %d",arr[i].jersey_no);
				
		fflush(stdin);
		printf("\nEnter The Player Name		 			: ");
		gets(arr[i].player_name);
		
		printf("Enter the Role of the Player(Batsman/Bowler/Allrounder) : ");
		gets(arr[i].role);
		
		printf("Enter the Team of the Player     			: ");
		gets(arr[i].team);
		
		printf("Enter the country of the Player  			: ");
		gets(arr[i].country); 
		
		printf("Enter Mobile Number of Player    			: ");
		scanf("%lld",&arr[i].mobile_no);
	
		int age;
		do{
			printf("Enter the age of player(between 18 to50)		: ");
			scanf("%d",&age);
			if(age<18 || age>50)
			{
				printf("\nInvalid Age! \n");
			}
		}while(age<18 || age>50);
		arr[i].age=age;
		
		printf("Enter Total Runs scored	         			: ");
		scanf("%d",&arr[i].runs);
		
		printf("Enter total Wicket Taken 	 			: ");
		scanf("%d",&arr[i].wickets);
		
		printf("Enter No Of Matches Played       			: ");
		scanf("%d",&arr[i].matches);
		
	}
}
void addPlayer(Player* arr,int* n)
{
	int i,size=0;
	
	printf("Enter No of Players you want to insert:");
	scanf("%d",&size);

	for(i=*n;i<*n+size;i++)
	{
		printf("\n***************************** Enter The Player %d Detail *****************************",i+1);
			
		arr[i].jersey_no=i+1;	
		printf("\nPlayer Jersey Number	 				: %d",arr[i].jersey_no);
				
		fflush(stdin);
		printf("\nEnter The Player Name		 			: ");
		gets(arr[i].player_name);
		
		printf("Enter the Role of the Player(Batsman/Bowler/Allrounder) : ");
		gets(arr[i].role);
		
		printf("Enter the Team of the Player     			: ");
		gets(arr[i].team);
		
		printf("Enter the country of the Player  			: ");
		gets(arr[i].country); 
		
		printf("Enter Mobile Number of Player    			: ");
		scanf("%lld",&arr[i].mobile_no);
	
		int age;
		do{
			printf("Enter the age of player(between 18 to50)		: ");
			scanf("%d",&age);
			if(age<18 || age>50)
			{
				printf("\nInvalid Age! please enter an age between 15 to 50");
			}
		}while(age<18 || age>50);
		arr[i].age=age;
		
		printf("Enter Total Runs scored	         			: ");
		scanf("%d",&arr[i].runs);
		
		printf("Enter total Wicket Taken 	 			: ");
		scanf("%d",&arr[i].wickets);
		
		printf("Enter No Of Matches Played       			: ");
		scanf("%d",&arr[i].matches);		
	}
	*n=*n+size;
	printf("\n---------------------------");
	printf("\nAdded Successfully.");
	printf("\n---------------------------");
	printf("\nAvailable Cricket Players:%d",*n);
}
void  displayPlayer(Player* arr, int n)
{ 

	if(n==0)
	{
		printf("\n---------------------------");
		printf("\nRecordes Not Found");
		printf("\n---------------------------");
	}
	else
	{
		
		int i;
		printf("\n\t\t\t\t*********Player Inforamtion*********\n");
		printf("\n+------------------------+--------------+-----+----------+--------------+-------------+---------+------+---------+");
		printf("\n| JNO | Name             |Mobile        | Age | Team     | Country      | Role        | Matches |Runs  | Wickets | ");
		printf("\n+------------------------+--------------+-----+----------+--------------+-------------+---------+------+---------+");
			
		for(i=0;i<n;i++)
		{
			printf("\n|%-5d| %-17s| %-13lld|%-5d| %-9s| %-13s| %-12s| %-8d| %-5d| %-8d|",arr[i].jersey_no,arr[i].player_name,arr[i].mobile_no,arr[i].age,arr[i].team,arr[i].country,arr[i].role,arr[i].matches,arr[i].runs,arr[i].wickets);
		}
		printf("\n+----------------------------------------------------------------------------------------------------------------+");
	}
}
void updatePlayer(Player* arr,int n)
{
	int i,ch,jerseyNum,flag=0;
	
	printf("\nEnter the Player Jersey Number you Want to Update:");
	scanf("%d",&jerseyNum);
	
	for(i=0;i<n;i++)
	{
	
		if(arr[i].jersey_no==jerseyNum)
		{
			flag=1;
			printf("Enter Your Choice:\n[\n1.Player_Name\n2.Player_Role\n3.Player_Team\n4.Player_Country\n5.Player_Mobile_Number\n6.Player_Age\n7.Scored_Runs\n8.Wicket_Taken\n9.Played_Matches]:");
			scanf("%d",&ch);
			switch(ch)
			{				
				case 1 :fflush(stdin);
						printf("\nEnter The Player Name: ");
						gets(arr[i].player_name);
						break;
						
				case 2 :fflush(stdin);
						printf("Enter the Role of the Player:");
						gets(arr[i].role);
						break;
						
				case 3 :fflush(stdin);
						printf("Enter the Team of the Player:");
						gets(arr[i].team);
						break;
						
				case 4 :fflush(stdin);
						printf("Enter the country of the Player:");
						gets(arr[i].country); 
						break;
						
				case 5 :printf("Enter Mobile Number of Player: ");
						scanf("%lld",&arr[i].mobile_no);
						break;
						
				case 6 :do{
							printf("\nEnter the age of player(between 18 to50): ");
							scanf("%d",&arr[i].age);
							if(arr[i].age<18 || arr[i].age>50)
							{
								printf("\nInvalid Age! please enter an age between 15 to 50");
							}
						}while(arr[i].age<18 || arr[i].age>50);
						
						break;
						
				case 7 :printf("Enter Total Runs scored: ");
						scanf("%d",&arr[i].runs);
						break;
						
				case 8 :printf("Enter total Wicket Taken : ");
						scanf("%d",&arr[i].wickets);
						break;
						
				case 9:printf("Enter No Of Matches Played: ");
						scanf("%d",&arr[i].matches);
						break;
				
				
				default:printf("\nInvalid Choice.");	
			}	
		}
	}
	if(flag==1)
	{
		printf("\n---------------------------");
		printf("\nUpdate Successful!!!");
		printf("\n---------------------------");
	
	}
	else
	{
		printf("\n---------------------------");
		printf("\nPlayer Record Not Found");
		printf("\n---------------------------");
	
	}
	
}

void searchPlayer(Player* arr,int n)
{
	int i,ch,searchNum,flag=0;
	char searchName[20];
	printf("\nEnter Your Choice You Want To Search:\n[1.Jersey Number\n2.Player Name]  :");
	scanf("%d",&ch);
	if(ch==1)
	{	
		printf("\nEnter Player Jersey Number You Want To Search:");
		scanf("%d",&searchNum);
		for(i=0;i<n;i++)
		{
			if(arr[i].jersey_no==searchNum)
			{
				flag=1;
				printf("\n-----------------------");
				printf("\nPlayer Record Found!!!");
				printf("\n-----------------------");
			
				printf("\n\t\t\t\t*********Player Inforamtion*********\n");
				printf("\n+------------------------+--------------+-----+----------+--------------+-------------+---------+------+---------+");
				printf("\n| JNO | Name             |Mobile        | Age | Team     | Country      | Role        | Matches |Runs  | Wickets | ");
				printf("\n+------------------------+--------------+-----+----------+--------------+-------------+---------+------+---------+");
				printf("\n|%-5d| %-17s| %-13lld|%-5d| %-9s| %-13s| %-12s| %-8d| %-5d| %-8d|",arr[i].jersey_no,arr[i].player_name,arr[i].mobile_no,arr[i].age,arr[i].team,arr[i].country,arr[i].role,arr[i].matches,arr[i].runs,arr[i].wickets);
				printf("\n+----------------------------------------------------------------------------------------------------------------+");
	
				break;
			}	
		}
		if(flag==1)
		{
			printf("\n--------------------------");
			printf("\nSearch Successful!!!");
			printf("\n--------------------------");
		}
		else
		{
			printf("\n--------------------------");
			printf("\nPlayer Record Not Found!!!");
			printf("\n--------------------------");
		}
	}
	if(ch==2)
	{
		fflush(stdin);
		printf("Enter Player Name You Want To Search:");
		gets(searchName);
		for(i=0;i<n;i++)
		{
			if(strcmpi(arr[i].player_name,searchName)==0)
			{
					flag=1;
					printf("\n-----------------------");
					printf("\nPlayer Record Found!!!");
					printf("\n-----------------------");
				
			
				printf("\n\t\t\t\t*********Player Inforamtion*********\n");
				printf("\n+------------------------+--------------+-----+----------+--------------+-------------+---------+------+---------+");
				printf("\n| JNO | Name             |Mobile        | Age | Team     | Country      | Role        | Matches |Runs  | Wickets | ");
				printf("\n+------------------------+--------------+-----+----------+--------------+-------------+---------+------+---------+");
				printf("\n|%-5d| %-17s| %-13lld|%-5d| %-9s| %-13s| %-12s| %-8d| %-5d| %-8d|",arr[i].jersey_no,arr[i].player_name,arr[i].mobile_no,arr[i].age,arr[i].team,arr[i].country,arr[i].role,arr[i].matches,arr[i].runs,arr[i].wickets);
				printf("\n+----------------------------------------------------------------------------------------------------------------+");
	
				break;
			}
		}
		if(flag==1)
		{
			printf("\n--------------------------");
			printf("\nSearch Successful!!!");
			printf("\n--------------------------");
		}
		else
		{
			printf("\n--------------------------");
			printf("\nPlayer Record Not Found!!!");
			printf("\n--------------------------");
		}
	}
}

void removePlayer(Player* arr,int* n)
{
	int i,j,removePlayer,flag=0;
	printf("\nEnter the Jersey Number to be Delete:");
	scanf("%d",&removePlayer);

	for(i=0;i<*n;i++)
	{
		if(arr[i].jersey_no==removePlayer )
		{
			flag=1;
			for(j=i;j<(*n-1);j++)
			{
				arr[j]=arr[j+1];
			}	
		}
	
	}	
	if(flag==1)
	{
		*n=*n-1;
		printf("\n---------------------------");
		printf("\nRecord Deleted Sucessfully.");
		printf("\n---------------------------");
			
	}
	else
	{
		printf("\n---------------------------");
		printf("\nRecord Not Found");
		printf("\n---------------------------");
	}
}

