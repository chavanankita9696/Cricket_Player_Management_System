#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Player
{
	int jersey_no;
	char player_name[20];
	char role[20];
	char team[20];
	char country[20];
	long long int mobile_no;
	int age;
	int runs;
	int wickets;
	int matches;
	
}Player;

void storePlayer(Player*,int);
void addPlayer(Player*,int*);
void displayPlayer(Player*,int);
void updatePlayer(Player*,int);
void searchPlayer(Player*,int);
void removePlayer(Player*,int*);
