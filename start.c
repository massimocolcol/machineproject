#include <stdio.h>

void displayMenu()
{	
	printf("Main menu \n");
	printf("[1] 2 players:\n");
	printf("[2] 3 players: \n");
	
}

void displayabilities()
{
	printf("Would you like abilities?\n");
	printf("[1] Yes \n");
	printf("[2] No \n");
	
}

 


int main()
{
	int menu,abilities;
	int player1=0;
	int player2=0;
	int player3=0;
	int player1choice,player2choice,player3choice;
	
	
	displayMenu();
	scanf("%d",&menu);
	
	switch(menu)
	{
		case 1:
			player1=1;
			player2=1;
			
			break;
		
		case 2:
			player1=1;
			player2=1;
			player3=1;
			
			break;
	}
	
	displayabilities();
	scanf("%d",&abilities);
	
	if (abilities=2)
		//put code
	
	
	
	
	
	
	
}
