#include <stdio.h>

//Display if the user wants 2 players or 3 players
void displayMenu()
{	
	printf("Welcome to tictactoe!\n");
	
	printf("Main menu \n");
	printf("[1] 2 players:\n");
	printf("[2] 3 players: \n");
	
}

//Display if the user would like to use abilities
void displayabilities()
{
	printf("Would you like abilities?\n");
	printf("[1] Yes \n");
	printf("[2] No \n");
	
}

//Displays grid for the first time only
void displaygrid()
{
	int i,j,num=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			num=num+1;
			printf("|%2d|",num);
		}
		printf("\n");
	}
}
 
//To check if the player wins 
int wincheck(int a,int b,int c,int d, int e)
{
	int win=0;
	
	if(a==1 && b==1 && c==1 && d==1 && e==1)
		win=1;
	
	if(a==2 && b==2 && c==2 && d==2 && e==2)
		win=1;
		
	if (a==3 && b==3 && c==3 && d==3 && e==3)
		win=1;
		
	return win;
}

int main()
{
	//for inside the table
	int A=0,B=0,C=0,D=0,E=0;
	int F=0,G=0,H=0,I=0,J=0;
	int K=0,L=0,M=0,N=0,O=0;
	int P=0,Q=0,R=0,S=0,T=0;
	int U=0,V=0,W=0,X=0,Y=0;
	
	//for grid
	int i,j;
	
	//to count erase 5 space (1 use per player only)
	int erasecount1=0;
	int erasecount2=0;
	int erasecount3=0;

	int menu,abilities,choice,ability,erasespace,erase;
	int player1=0,player2=0,player3=0;
	int	winplayer1=0,winplayer2=0,winplayer3=0;
	
	
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
	
	displaygrid();
	
	while(winplayer1==0 && winplayer2==0 && winplayer3==0)
	{
		
		//PLAYER 1'S TURN
		if(player1==1 && winplayer2==0 && winplayer3==0)
		{
			if(abilities==1)
			{
				do
				{
					printf("Player 1's turn: \n");
					printf("[Enter 0 if you like to use the abilities]\n");
					scanf("%d",&choice);
					
						if(choice<0 || choice>25) 
            			printf("Invalid input or space already taken. Please try again.\n");
					
					
					if(choice==0)
					{
						do
						{
							printf("[1]Erase a Space\n");
							printf("[2]Erase 5 Space (1 time use only)\n");
							scanf("%d",&ability);
						
							if(ability==2)
							erasecount1++;
							
							if(ability==2 && erasecount1>1)
								printf("Sorry you can only use this one per game\n");	
						}
						while(ability==2 && erasecount1>1);
						
						if(ability==1)
						{
							do
							{
							printf("Choose a space to erase:\n");
							scanf("%d",&erasespace);
								
								if(erasespace<1 || erasespace>26)
									printf("invalid input try again: \n");
							}
							while(erasespace<1 || erasespace>26);
							
								if (erasespace==1)
									A=0;
								else if (erasespace==2)
									B=0;
								else if (erasespace==3)
									C=0;
								else if (erasespace==4)
									D=0;
								else if (erasespace==5)
									E=0;
								else if (erasespace==6)
									F=0;
								else if (erasespace==7)
									G=0;
								else if (erasespace==8)
									H=0;
								else if (erasespace==9)
									I=0;
								else if (erasespace==10)
									J=0;
								else if (erasespace==11)
									K=0;
								else if (erasespace==12)
									L=0;
								else if (erasespace==13)
									M=0;
								else if (erasespace==14)
									N=0;
								else if (erasespace==15)
									O=0;
								else if (erasespace==16)
									P=0;
								else if (erasespace==17)
									Q=0;
								else if (erasespace==18)
									R=0;
								else if (erasespace==19)
									S=0;
								else if (erasespace==20)	
									T=0;
								else if (erasespace==21)
									U=0;
								else if (erasespace==22)
									V=0;
								else if (erasespace==23)
									W=0;
								else if (erasespace==24)
									X=0;
								else if (erasespace==25)
									Y=0;	
							
						}
						
						//Checking if erase was used once
						
						if(ability==2 && erasecount1<=1) 
						{	
						
								printf("[1-5]For choosing rows \n");
								printf("[6-10]For choosing columns \n");
								printf("[11] For choosing 4 corners and center \n");
								scanf("%d",&erase);
								
								if(erase==1)
									{
										A=0;
										B=0;
										C=0;
										D=0;
										E=0;
									}
								else if(erase==2)
									{
										F=0;
										G=0;
										H=0;
										I=0;
										J=0;
									}
								else if(erase==3)
									{
										K=0;
										L=0;
										M=0;
										N=0;
										O=0;
									}
								else if(erase==4)
									{
										P=0;
										Q=0;
										R=0;
										S=0;
										T=0;
									}
								else if(erase==5)
									{
										U=0;
										V=0;
										W=0;
										X=0;
										Y=0;
									}
								else if(erase==6)
									{
										A=0;
										F=0;
										K=0;
										P=0;
										U=0;
									}
								else if(erase==7)
									{
										B=0;
										G=0;
										L=0;
										Q=0;
										V=0;
									}	
								else if(erase==8)
									{
										C=0;
										H=0;
										M=0;
										R=0;
										W=0;
									}
								else if(erase==9)
									{
										D=0;
										I=0;
										N=0;
										S=0;
										X=0;
									}
								else if(erase==10)
									{
										E=0;
										J=0;
										O=0;
										T=0;
										Y=0;
									}
								else if(erase==11)
									{
										A=0;
										E=0;
										U=0;
										Y=0;
										M=0;
									}								
						}
					}		
				}
				while (choice < 0 || choice > 25 || ((choice == 1 && A != 0) || (choice == 2 && B != 0) || (choice == 3 && C != 0) || (choice == 4 && D != 0) || (choice == 5 && E != 0) || (choice == 6 && F != 0) || (choice == 7 && G != 0) || (choice == 8 && H != 0) || (choice == 9 && I != 0) ||  (choice == 10 && J != 0) || (choice == 11 && K != 0) || (choice == 12 && L != 0) || (choice == 13 && M != 0) || (choice == 14 && N != 0) || (choice == 15 && O != 0) || (choice == 16 && P != 0) || (choice == 17 && Q != 0) || (choice == 18 && R != 0) ||    (choice == 19 && S != 0) || (choice == 20 && T != 0) || (choice == 21 && U != 0) || (choice == 22 && V != 0) || (choice == 23 && W != 0) || (choice == 24 && X != 0) ||(choice == 25 && Y != 0))); 
            			
			}
				
			else 
			{
				do
				{
					
					printf("Player 1's turn: ");
					scanf("%d",&choice);
					if(choice<0 || choice>25)
						printf("Invalid input or space already taken. Please try again.\n");
				}
				while (choice < 1 || choice > 25 || ((choice == 1 && A != 0) || (choice == 2 && B != 0) || (choice == 3 && C != 0) || (choice == 4 && D != 0) || (choice == 5 && E != 0) || (choice == 6 && F != 0) || (choice == 7 && G != 0) || (choice == 8 && H != 0) || (choice == 9 && I != 0) ||  (choice == 10 && J != 0) || (choice == 11 && K != 0) || (choice == 12 && L != 0) || (choice == 13 && M != 0) || (choice == 14 && N != 0) || (choice == 15 && O != 0) || (choice == 16 && P != 0) || (choice == 17 && Q != 0) || (choice == 18 && R != 0) ||    (choice == 19 && S != 0) || (choice == 20 && T != 0) || (choice == 21 && U != 0) || (choice == 22 && V != 0) || (choice == 23 && W != 0) || (choice == 24 && X != 0) ||(choice == 25 && Y != 0))); 
            			
			}
				if (choice==1)
					A=1;
				else if (choice==2)
					B=1;
				else if (choice==3)
					C=1;
				else if (choice==4)
					D=1;
				else if (choice==5)
					E=1;
				else if (choice==6)
					F=1;
				else if (choice==7)
					G=1;
				else if (choice==8)
					H=1;
				else if (choice==9)
					I=1;
				else if (choice==10)
					J=1;
				else if (choice==11)
					K=1;
				else if (choice==12)
					L=1;
				else if (choice==13)
					M=1;
				else if (choice==14)
					N=1;
				else if (choice==15)
					O=1;
				else if (choice==16)
					P=1;
				else if (choice==17)
					Q=1;
				else if (choice==18)
					R=1;
				else if (choice==19)
					S=1;
				else if (choice==20)
					T=1;
				else if (choice==21)
					U=1;
				else if (choice==22)
					V=1;
				else if (choice==23)
					W=1;
				else if (choice==24)
					X=1;
				else if (choice==25)
					Y=1;	
			
			for(i=0; i<5; i++)
			{
				for(j=0; j<5; j++)
				{
			
				//printing table
				if(i==0 && j==0 && A == 0)
					printf("| |");
				else if (i==0 && j==1 && B == 0)
					printf("| |");
				 else if (i==0 && j==2 && C == 0)
					printf("| |");
				 else if (i==0 && j==3 && D == 0)
					printf("| |");
				 else if (i==0 && j==4 && E == 0)
					printf("| |");
				 else if (i==1 && j==0 && F == 0)
					printf("| |");
				 else if (i==1 && j==1 && G == 0)
					printf("| |");
				 else if (i==1 && j==2 && H == 0)
					printf("| |");
				 else if (i==1 && j==3 && I == 0)
					printf("| |");
				 else if (i==1 && j==4 && J == 0)
					printf("| |");
				 else if (i==2 && j==0 && K == 0)
					printf("| |");
				 else if (i==2 && j==1 && L == 0)
					printf("| |");
				 else if (i==2 && j==2 && M == 0)
					printf("| |");
				 else if (i==2 && j==3 && N == 0)
					printf("| |");
				 else if (i==2 && j==4 && O == 0)
					printf("| |");
				 else if (i==3 && j==0 && P == 0)
					printf("| |");
				 else if (i==3 && j==1 && Q == 0)
					printf("| |");
				 else if (i==3 && j==2 && R == 0)
					printf("| |");
				 else if (i==3 && j==3 && S == 0)
					printf("| |");
				 else if (i==3 && j==4 && T == 0)
					printf("| |");
				 else if (i==4 && j==0 && U == 0)
					printf("| |");
				else if (i==4 && j==1 && V == 0)
					printf("| |");
				 else if (i==4 && j==2 && W == 0)
					printf("| |");
				 else if (i==4 && j==3 && X == 0)
					printf("| |");
				 else if (i==4 && j==4 && Y == 0)
					printf("| |");
			
				
				if(i==0 && j==0 && A == 1)
					printf("|X|");
				else if (i==0 && j==1 && B == 1)
					printf("|X|");
				else if (i==0 && j==2 && C == 1)
					printf("|X|");
				else if (i==0 && j==3 && D == 1)
					printf("|X|");
				else if (i==0 && j==4 && E == 1)
					printf("|X|");
				else if (i==1 && j==0 && F == 1)
					printf("|X|");
				else if (i==1 && j==1 && G == 1)
					printf("|X|");
				else if (i==1 && j==2 && H == 1)
					printf("|X|");
				else if (i==1 && j==3 && I == 1)
					printf("|X|");
				else if (i==1 && j==4 && J == 1)
					printf("|X|");
				else if (i==2 && j==0 && K == 1)
					printf("|X|");
				else if (i==2 && j==1 && L == 1)
					printf("|X|");
				else if (i==2 && j==2 && M == 1)
					printf("|X|");
				else if (i==2 && j==3 && N == 1)
					printf("|X|");
				else if (i==2 && j==4 && O == 1)
					printf("|X|");
				else if (i==3 && j==0 && P == 1)
					printf("|X|");
				else if (i==3 && j==1 && Q == 1)
					printf("|X|");
				else if (i==3 && j==2 && R == 1)
					printf("|X|");
				else if (i==3 && j==3 && S == 1)
					printf("|X|");
				else if (i==3 && j==4 && T == 1)
					printf("|X|");
				else if (i==4 && j==0 && U == 1)
					printf("|X|");
				else if (i==4 && j==1 && V == 1)
					printf("|X|");
				else if (i==4 && j==2 && W == 1)
					printf("|X|");
				else if (i==4 && j==3 && X == 1)
					printf("|X|");
				else if (i==4 && j==4 && Y == 1)
					printf("|X|");
				else if(i==0 && j==0 && A == 2)
					printf("|O|");
				else if (i==0 && j==1 && B == 2)
					printf("|O|");
				else if (i==0 && j==2 && C == 2)
					printf("|O|");
				else if (i==0 && j==3 && D == 2)
					printf("|O|");
				else if (i==0 && j==4 && E == 2)
					printf("|O|");
				else if (i==1 && j==0 && F == 2)
					printf("|O|");
				else if (i==1 && j==1 && G == 2)
					printf("|O|");
				else if (i==1 && j==2 && H == 2)
					printf("|O|");
				else if (i==1 && j==3 && I == 2)
					printf("|O|");
				else if (i==1 && j==4 && J == 2)
					printf("|O|");
				else if (i==2 && j==0 && K == 2)
					printf("|O|");
				else if (i==2 && j==1 && L == 2)
					printf("|O|");
				else if (i==2 && j==2 && M == 2)
					printf("|O|");
				else if (i==2 && j==3 && N == 2)
					printf("|O|");
				else if (i==2 && j==4 && O == 2)
					printf("|O|");
				else if (i==3 && j==0 && P == 2)
					printf("|O|");
				else if (i==3 && j==1 && Q == 2)
					printf("|O|");
				else if (i==3 && j==2 && R == 2)
					printf("|O|");
				else if (i==3 && j==3 && S == 2)
					printf("|O|");
				else if (i==3 && j==4 && T == 2)
					printf("|O|");
				else if (i==4 && j==0 && U == 2)
					printf("|O|");
				else if (i==4 && j==1 && V == 2)
					printf("|O|");
				else if (i==4 && j==2 && W == 2)
					printf("|O|");
				else if (i==4 && j==3 && X == 2)
					printf("|O|");
				else if (i==4 && j==4 && Y == 2)
					printf("|O|");
				else if(i==0 && j==0 && A == 3)
					printf("|D|");
				else if (i==0 && j==1 && B == 3)
					printf("|D|");
				else if (i==0 && j==2 && C == 3)
					printf("|D|");
				else if (i==0 && j==3 && D == 3)
					printf("|D|");
				else if (i==0 && j==4 && E == 3)
					printf("|D|");
				else if (i==1 && j==0 && F == 3)
					printf("|D|");
				else if (i==1 && j==1 && G == 3)
					printf("|D|");
				else if (i==1 && j==2 && H == 3)
					printf("|D|");
				else if (i==1 && j==3 && I == 3)
					printf("|D|");
				else if (i==1 && j==4 && J == 3)
					printf("|D|");
				else if (i==2 && j==0 && K == 3)
					printf("|D|");
				else if (i==2 && j==1 && L == 3)
					printf("|D|");
				else if (i==2 && j==2 && M == 3)
					printf("|D|");
				else if (i==2 && j==3 && N == 3)
					printf("|D|");
				else if (i==2 && j==4 && O == 3)
					printf("|D|");
				else if (i==3 && j==0 && P == 3)
					printf("|D|");
				else if (i==3 && j==1 && Q == 3)
					printf("|D|");
				else if (i==3 && j==2 && R == 3)
					printf("|D|");
				else if (i==3 && j==3 && S == 3)
					printf("|D|");
				else if (i==3 && j==4 && T == 3)
					printf("|D|");
				else if (i==4 && j==0 && U == 3)
					printf("|D|");
				else if (i==4 && j==1 && V == 3)
					printf("|D|");
				else if (i==4 && j==2 && W == 3)
					printf("|D|");
				else if (i==4 && j==3 && X == 3)
					printf("|D|");
				else if (i==4 && j==4 && Y == 3)
					printf("|D|");	
				}	
			
				printf("\n");																															
			}
			
				//Row checker
			if(wincheck(A,B,C,D,E) || wincheck(F,G,H,I,J) || wincheck(K,L,M,N,O) ||	wincheck(P,Q,R,S,T) || wincheck(U,V,W,X,Y))	
			{
				printf("Player 1 wins: \n");
				winplayer1=1;
			}
		
			//Column checker
			if(wincheck(A,F,K,P,U) || wincheck(B,G,L,Q,V) || wincheck(C,H,M,R,W) || wincheck(D,I,N,S,X) || wincheck(E,J,O,T,Y))
			{
				printf("Player 1 wins: \n");
				winplayer1=1;
			}
			
			//Diagonal checker
			if(wincheck(A,G,M,S,Y) || wincheck(U,G,H,I,J))
			{
				printf("Player 1 wins: \n");
				winplayer1=1;
			}		
		}
		
		displaygrid();
		//PLAYER 2'S TURN
		if(player2==1 && winplayer1==0 && winplayer3==0)
		{
			if(abilities==1)
			{
				do
				{
					printf("Player 2's turn: \n");
					printf("[Enter 0 if you like to use the abilities]\n");
					scanf("%d",&choice);
					
					if(choice<0 || choice>25)
						printf("Invalid input or space already taken. Please try again.\n");
					
					if(choice==0)
					{
						do
						{
							printf("[1]Erase a Space\n");
							printf("[2]Erase 5 Space (1 time use only)\n");
							scanf("%d",&ability);
						
							if(ability==2)
							erasecount2++;
							
							if(ability==2 && erasecount2>1)
								printf("Sorry you can only use this one per game\n");	
						}
						while(ability==2 && erasecount2>1);
						
						if(ability==1)
						{
							do
							{
							printf("Choose a space to erase:\n");
							scanf("%d",&erasespace);
								
								if(erasespace<1 || erasespace>26)
									printf("invalid input try again: \n");
							}
							while(erasespace<1 || erasespace>26);
							
								if (erasespace==1)
									A=0;
								else if (erasespace==2)
									B=0;
								else if (erasespace==3)
									C=0;
								else if (erasespace==4)
									D=0;
								else if (erasespace==5)
									E=0;
								else if (erasespace==6)
									F=0;
								else if (erasespace==7)
									G=0;
								else if (erasespace==8)
									H=0;
								else if (erasespace==9)
									I=0;
								else if (erasespace==10)
									J=0;
								else if (erasespace==11)
									K=0;
								else if (erasespace==12)
									L=0;
								else if (erasespace==13)
									M=0;
								else if (erasespace==14)
									N=0;
								else if (erasespace==15)
									O=0;
								else if (erasespace==16)
									P=0;
								else if (erasespace==17)
									Q=0;
								else if (erasespace==18)
									R=0;
								else if (erasespace==19)
									S=0;
								else if (erasespace==20)	
									T=0;
								else if (erasespace==21)
									U=0;
								else if (erasespace==22)
									V=0;
								else if (erasespace==23)
									W=0;
								else if (erasespace==24)
									X=0;
								else if (erasespace==25)
									Y=0;	
							
						}
							
						//Checking if erase was used once
						if(ability==2 && erasecount2<=1) 
						{	
						
								printf("[1-5]For choosing rows \n");
								printf("[6-10]For choosing columns \n");
								printf("[11] For choosing 4 corners and center \n");
								scanf("%d",&erase);
								
								if(erase==1)
									{
										A=0;
										B=0;
										C=0;
										D=0;
										E=0;
									}
								else if(erase==2)
									{
										F=0;
										G=0;
										H=0;
										I=0;
										J=0;
									}
								else if(erase==3)
									{
										K=0;
										L=0;
										M=0;
										N=0;
										O=0;
									}
								else if(erase==4)
									{
										P=0;
										Q=0;
										R=0;
										S=0;
										T=0;
									}
								else if(erase==5)
									{
										U=0;
										V=0;
										W=0;
										X=0;
										Y=0;
									}
								else if(erase==6)
									{
										A=0;
										F=0;
										K=0;
										P=0;
										U=0;
									}
								else if(erase==7)
									{
										B=0;
										G=0;
										L=0;
										Q=0;
										V=0;
									}	
								else if(erase==8)
									{
										C=0;
										H=0;
										M=0;
										R=0;
										W=0;
									}
								else if(erase==9)
									{
										D=0;
										I=0;
										N=0;
										S=0;
										X=0;
									}
								else if(erase==10)
									{
										E=0;
										J=0;
										O=0;
										T=0;
										Y=0;
									}
								else if(erase==11)
									{
										A=0;
										E=0;
										U=0;
										Y=0;
										M=0;
									}								
						}
						if(ability==2 && erasecount2>1)
							printf("Sorry you can only use this one per game\n");
						
					}		
				}
				while (choice < 0 || choice > 25 || ((choice == 1 && A != 0) || (choice == 2 && B != 0) || (choice == 3 && C != 0) || (choice == 4 && D != 0) || (choice == 5 && E != 0) || (choice == 6 && F != 0) || (choice == 7 && G != 0) || (choice == 8 && H != 0) || (choice == 9 && I != 0) ||  (choice == 10 && J != 0) || (choice == 11 && K != 0) || (choice == 12 && L != 0) || (choice == 13 && M != 0) || (choice == 14 && N != 0) || (choice == 15 && O != 0) || (choice == 16 && P != 0) || (choice == 17 && Q != 0) || (choice == 18 && R != 0) ||    (choice == 19 && S != 0) || (choice == 20 && T != 0) || (choice == 21 && U != 0) || (choice == 22 && V != 0) || (choice == 23 && W != 0) || (choice == 24 && X != 0) ||(choice == 25 && Y != 0))); 
            			
			}
				
			else
			{
				do
				{
					printf("Player 2's turn: ");
					scanf("%d",&choice);
					
					if(choice<0 || choice>25)
						printf("Invalid input or space already taken. Please try again.\n");
				}
				while (choice < 1 || choice > 25 || ((choice == 1 && A != 0) || (choice == 2 && B != 0) || (choice == 3 && C != 0) || (choice == 4 && D != 0) || (choice == 5 && E != 0) || (choice == 6 && F != 0) || (choice == 7 && G != 0) || (choice == 8 && H != 0) || (choice == 9 && I != 0) ||  (choice == 10 && J != 0) || (choice == 11 && K != 0) || (choice == 12 && L != 0) || (choice == 13 && M != 0) || (choice == 14 && N != 0) || (choice == 15 && O != 0) || (choice == 16 && P != 0) || (choice == 17 && Q != 0) || (choice == 18 && R != 0) ||    (choice == 19 && S != 0) || (choice == 20 && T != 0) || (choice == 21 && U != 0) || (choice == 22 && V != 0) || (choice == 23 && W != 0) || (choice == 24 && X != 0) ||(choice == 25 && Y != 0))); 
            						
			}
				if (choice==1)
					A=2;
				else if (choice==2)
					B=2;
				else if (choice==3)
					C=2;
				else if (choice==4)
					D=2;
				else if (choice==5)
					E=2;
				else if (choice==6)
					F=2;
				else if (choice==7)
					G=2;
				else if (choice==8)
					H=2;
				else if (choice==9)
					I=2;
				else if (choice==10)
					J=2;
				else if (choice==11)
					K=2;
				else if (choice==12)
					L=2;
				else if (choice==13)
					M=2;
				else if (choice==14)
					N=2;
				else if (choice==15)
					O=2;
				else if (choice==16)
					P=2;
				else if (choice==17)
					Q=2;
				else if (choice==18)
					R=2;
				else if (choice==19)
					S=2;
				else if (choice==20)
					T=2;
				else if (choice==21)
					U=2;
				else if (choice==22)
					V=2;
				else if (choice==23)
					W=2;
				else if (choice==24)
					X=2;
				else if (choice==25)
					Y=2;	
			
			for(i=0; i<5; i++)
			{
				for(j=0; j<5; j++)
				{
			
				//printing table
				if(i==0 && j==0 && A == 0)
					printf("| |");
				else if (i==0 && j==1 && B == 0)
					printf("| |");
				 else if (i==0 && j==2 && C == 0)
					printf("| |");
				 else if (i==0 && j==3 && D == 0)
					printf("| |");
				 else if (i==0 && j==4 && E == 0)
					printf("| |");
				 else if (i==1 && j==0 && F == 0)
					printf("| |");
				 else if (i==1 && j==1 && G == 0)
					printf("| |");
				 else if (i==1 && j==2 && H == 0)
					printf("| |");
				 else if (i==1 && j==3 && I == 0)
					printf("| |");
				 else if (i==1 && j==4 && J == 0)
					printf("| |");
				 else if (i==2 && j==0 && K == 0)
					printf("| |");
				 else if (i==2 && j==1 && L == 0)
					printf("| |");
				 else if (i==2 && j==2 && M == 0)
					printf("| |");
				 else if (i==2 && j==3 && N == 0)
					printf("| |");
				 else if (i==2 && j==4 && O == 0)
					printf("| |");
				 else if (i==3 && j==0 && P == 0)
					printf("| |");
				 else if (i==3 && j==1 && Q == 0)
					printf("| |");
				 else if (i==3 && j==2 && R == 0)
					printf("| |");
				 else if (i==3 && j==3 && S == 0)
					printf("| |");
				 else if (i==3 && j==4 && T == 0)
					printf("| |");
				 else if (i==4 && j==0 && U == 0)
					printf("| |");
				else if (i==4 && j==1 && V == 0)
					printf("| |");
				 else if (i==4 && j==2 && W == 0)
					printf("| |");
				 else if (i==4 && j==3 && X == 0)
					printf("| |");
				 else if (i==4 && j==4 && Y == 0)
					printf("| |");
			
				if(i==0 && j==0 && A == 1)
					printf("|X|");
				else if (i==0 && j==1 && B == 1)
					printf("|X|");
				else if (i==0 && j==2 && C == 1)
					printf("|X|");
				else if (i==0 && j==3 && D == 1)
					printf("|X|");
				else if (i==0 && j==4 && E == 1)
					printf("|X|");
				else if (i==1 && j==0 && F == 1)
					printf("|X|");
				else if (i==1 && j==1 && G == 1)
					printf("|X|");
				else if (i==1 && j==2 && H == 1)
					printf("|X|");
				else if (i==1 && j==3 && I == 1)
					printf("|X|");
				else if (i==1 && j==4 && J == 1)
					printf("|X|");
				else if (i==2 && j==0 && K == 1)
					printf("|X|");
				else if (i==2 && j==1 && L == 1)
					printf("|X|");
				else if (i==2 && j==2 && M == 1)
					printf("|X|");
				else if (i==2 && j==3 && N == 1)
					printf("|X|");
				else if (i==2 && j==4 && O == 1)
					printf("|X|");
				else if (i==3 && j==0 && P == 1)
					printf("|X|");
				else if (i==3 && j==1 && Q == 1)
					printf("|X|");
				else if (i==3 && j==2 && R == 1)
					printf("|X|");
				else if (i==3 && j==3 && S == 1)
					printf("|X|");
				else if (i==3 && j==4 && T == 1)
					printf("|X|");
				else if (i==4 && j==0 && U == 1)
					printf("|X|");
				else if (i==4 && j==1 && V == 1)
					printf("|X|");
				else if (i==4 && j==2 && W == 1)
					printf("|X|");
				else if (i==4 && j==3 && X == 1)
					printf("|X|");
				else if (i==4 && j==4 && Y == 1)
					printf("|X|");
				else if(i==0 && j==0 && A == 2)
					printf("|O|");
				else if (i==0 && j==1 && B == 2)
					printf("|O|");
				else if (i==0 && j==2 && C == 2)
					printf("|O|");
				else if (i==0 && j==3 && D == 2)
					printf("|O|");
				else if (i==0 && j==4 && E == 2)
					printf("|O|");
				else if (i==1 && j==0 && F == 2)
					printf("|O|");
				else if (i==1 && j==1 && G == 2)
					printf("|O|");
				else if (i==1 && j==2 && H == 2)
					printf("|O|");
				else if (i==1 && j==3 && I == 2)
					printf("|O|");
				else if (i==1 && j==4 && J == 2)
					printf("|O|");
				else if (i==2 && j==0 && K == 2)
					printf("|O|");
				else if (i==2 && j==1 && L == 2)
						printf("|O|");
				else if (i==2 && j==2 && M == 2)
					printf("|O|");
				else if (i==2 && j==3 && N == 2)
					printf("|O|");
				else if (i==2 && j==4 && O == 2)
					printf("|O|");
				else if (i==3 && j==0 && P == 2)
					printf("|O|");
				else if (i==3 && j==1 && Q == 2)
					printf("|O|");
				else if (i==3 && j==2 && R == 2)
					printf("|O|");
				else if (i==3 && j==3 && S == 2)
					printf("|O|");
				else if (i==3 && j==4 && T == 2)
					printf("|O|");
				else if (i==4 && j==0 && U == 2)
					printf("|O|");
				else if (i==4 && j==1 && V == 2)
					printf("|O|");
				else if (i==4 && j==2 && W == 2)
					printf("|O|");
				else if (i==4 && j==3 && X == 2)
					printf("|O|");
				else if (i==4 && j==4 && Y == 2)
					printf("|O|");
				else if(i==0 && j==0 && A == 3)
					printf("|D|");
				else if (i==0 && j==1 && B == 3)
					printf("|D|");
				else if (i==0 && j==2 && C == 3)
					printf("|D|");
				else if (i==0 && j==3 && D == 3)
					printf("|D|");
				else if (i==0 && j==4 && E == 3)
					printf("|D|");
				else if (i==1 && j==0 && F == 3)
					printf("|D|");
				else if (i==1 && j==1 && G == 3)
					printf("|D|");
				else if (i==1 && j==2 && H == 3)
					printf("|D|");
				else if (i==1 && j==3 && I == 3)
					printf("|D|");
				else if (i==1 && j==4 && J == 3)
					printf("|D|");
				else if (i==2 && j==0 && K == 3)
					printf("|D|");
				else if (i==2 && j==1 && L == 3)
					printf("|D|");
				else if (i==2 && j==2 && M == 3)
					printf("|D|");
				else if (i==2 && j==3 && N == 3)
					printf("|D|");
				else if (i==2 && j==4 && O == 3)
					printf("|D|");
				else if (i==3 && j==0 && P == 3)
					printf("|D|");
				else if (i==3 && j==1 && Q == 3)
					printf("|D|");
				else if (i==3 && j==2 && R == 3)
					printf("|D|");
				else if (i==3 && j==3 && S == 3)
					printf("|D|");
				else if (i==3 && j==4 && T == 3)
					printf("|D|");
				else if (i==4 && j==0 && U == 3)
					printf("|D|");
				else if (i==4 && j==1 && V == 3)
					printf("|D|");
				else if (i==4 && j==2 && W == 3)
					printf("|D|");
				else if (i==4 && j==3 && X == 3)
					printf("|D|");
				else if (i==4 && j==4 && Y == 3)
					printf("|D|");	
				}	
			
				printf("\n");																															
			}
			
			//Row checker
			if(wincheck(A,B,C,D,E) || wincheck(F,G,H,I,J) || wincheck(K,L,M,N,O) ||	wincheck(P,Q,R,S,T) || wincheck(U,V,W,X,Y))	
			{
				printf("Player 2 wins: \n");
				winplayer2=1;
			}
			//Column checker
			if(wincheck(A,F,K,P,U) || wincheck(B,G,L,Q,V) || wincheck(C,H,M,R,W) || wincheck(D,I,N,S,X) || wincheck(E,J,O,T,Y))
			{
				printf("Player 2 wins: \n");
				winplayer2=1;
			}	
			
			//Diagonal checker
			if(wincheck(A,G,M,S,Y) || wincheck(U,G,H,I,J))
			{
				printf("Player 2 wins: \n");
				winplayer2=1;
			}
		}
	
		displaygrid();		
		//PLAYER 3'S TURN
		if(player3==1 && winplayer1==0 && winplayer2==0)
		{
			if(abilities==1)
				do
				{
					printf("Player 3's turn: \n");
					printf("[Enter 0 if you like to use the abilities]\n");
					scanf("%d",&choice);
					
					if(choice<0 || choice>25)
						printf("Invalid input or space already taken. Please try again.\n");
					
					if(choice==0)
					{
						do
						{
							printf("[1]Erase a Space\n");
							printf("[2]Erase 5 Space (1 time use only)\n");
							scanf("%d",&ability);
						
							if(ability==2)
							erasecount3++;
							
							if(ability==2 && erasecount3>1)
								printf("Sorry you can only use this one per game\n");	
						}
						while(ability==2 && erasecount3>1);
						
						if(ability==1)
						{
							do
							{
							printf("Choose a space to erase:\n");
							scanf("%d",&erasespace);
								
								if(erasespace<1 || erasespace>26)
									printf("invalid input try again: \n");
							}
							while(erasespace<1 || erasespace>26);
							
								if (erasespace==1)
									A=0;
								else if (erasespace==2)
									B=0;
								else if (erasespace==3)
									C=0;
								else if (erasespace==4)
									D=0;
								else if (erasespace==5)
									E=0;
								else if (erasespace==6)
									F=0;
								else if (erasespace==7)
									G=0;
								else if (erasespace==8)
									H=0;
								else if (erasespace==9)
									I=0;
								else if (erasespace==10)
									J=0;
								else if (erasespace==11)
									K=0;
								else if (erasespace==12)
									L=0;
								else if (erasespace==13)
									M=0;
								else if (erasespace==14)
									N=0;
								else if (erasespace==15)
									O=0;
								else if (erasespace==16)
									P=0;
								else if (erasespace==17)
									Q=0;
								else if (erasespace==18)
									R=0;
								else if (erasespace==19)
									S=0;
								else if (erasespace==20)	
									T=0;
								else if (erasespace==21)
									U=0;
								else if (erasespace==22)
									V=0;
								else if (erasespace==23)
									W=0;
								else if (erasespace==24)
									X=0;
								else if (erasespace==25)
									Y=0;	
							
						}
			
						//Checking if erase was used once
						if(ability==2 && erasecount3<=1) 
						{	
						
								printf("[1-5]For choosing rows \n");
								printf("[6-10]For choosing columns \n");
								printf("[11] For choosing 4 corners and center \n");
								scanf("%d",&erase);
								
								if(erase==1)
									{
										A=0;
										B=0;
										C=0;
										D=0;
										E=0;
									}
								else if(erase==2)
									{
										F=0;
										G=0;
										H=0;
										I=0;
										J=0;
									}
								else if(erase==3)
									{
										K=0;
										L=0;
										M=0;
										N=0;
										O=0;
									}
								else if(erase==4)
									{
										P=0;
										Q=0;
										R=0;
										S=0;
										T=0;
									}
								else if(erase==5)
									{
										U=0;
										V=0;
										W=0;
										X=0;
										Y=0;
									}
								else if(erase==6)
									{
										A=0;
										F=0;
										K=0;
										P=0;
										U=0;
									}
								else if(erase==7)
									{
										B=0;
										G=0;
										L=0;
										Q=0;
										V=0;
									}	
								else if(erase==8)
									{
										C=0;
										H=0;
										M=0;
										R=0;
										W=0;
									}
								else if(erase==9)
									{
										D=0;
										I=0;
										N=0;
										S=0;
										X=0;
									}
								else if(erase==10)
									{
										E=0;
										J=0;
										O=0;
										T=0;
										Y=0;
									}
								else if(erase==11)
									{
										A=0;
										E=0;
										U=0;
										Y=0;
										M=0;
									}								
						}
						if(ability==2 && erasecount3>1)
							printf("Sorry you can only use this one per game\n");
						
					}		
				}
				while (choice < 0 || choice > 25 || ((choice == 1 && A != 0) || (choice == 2 && B != 0) || (choice == 3 && C != 0) || (choice == 4 && D != 0) || (choice == 5 && E != 0) || (choice == 6 && F != 0) || (choice == 7 && G != 0) || (choice == 8 && H != 0) || (choice == 9 && I != 0) ||  (choice == 10 && J != 0) || (choice == 11 && K != 0) || (choice == 12 && L != 0) || (choice == 13 && M != 0) || (choice == 14 && N != 0) || (choice == 15 && O != 0) || (choice == 16 && P != 0) || (choice == 17 && Q != 0) || (choice == 18 && R != 0) ||    (choice == 19 && S != 0) || (choice == 20 && T != 0) || (choice == 21 && U != 0) || (choice == 22 && V != 0) || (choice == 23 && W != 0) || (choice == 24 && X != 0) ||(choice == 25 && Y != 0)));
				
			else
			{
				do
				{
					printf("Player 3's turn: ");
					scanf("%d",&choice);
					if(choice<0 || choice>25)
						printf("Invalid input or space already taken. Please try again.\n");
				}
				while (choice < 1 || choice > 25 || ((choice == 1 && A != 0) || (choice == 2 && B != 0) || (choice == 3 && C != 0) || (choice == 4 && D != 0) || (choice == 5 && E != 0) || (choice == 6 && F != 0) || (choice == 7 && G != 0) || (choice == 8 && H != 0) || (choice == 9 && I != 0) ||  (choice == 10 && J != 0) || (choice == 11 && K != 0) || (choice == 12 && L != 0) || (choice == 13 && M != 0) || (choice == 14 && N != 0) || (choice == 15 && O != 0) || (choice == 16 && P != 0) || (choice == 17 && Q != 0) || (choice == 18 && R != 0) ||    (choice == 19 && S != 0) || (choice == 20 && T != 0) || (choice == 21 && U != 0) || (choice == 22 && V != 0) || (choice == 23 && W != 0) || (choice == 24 && X != 0) ||(choice == 25 && Y != 0)));
			}
				if (choice==1)
					A=3;
				else if (choice==2)
					B=3;
				else if (choice==3)
					C=3;
				else if (choice==4)
					D=3;
				else if (choice==5)
					E=3;
				else if (choice==6)
					F=3;
				else if (choice==7)
					G=3;
				else if (choice==8)
					H=3;
				else if (choice==9)
					I=3;
				else if (choice==10)
					J=3;
				else if (choice==11)
					K=3;
				else if (choice==12)
					L=3;
				else if (choice==13)
					M=3;
				else if (choice==14)
					N=3;
				else if (choice==15)
					O=3;
				else if (choice==16)
					P=3;
				else if (choice==17)
					Q=3;
				else if (choice==18)
					R=3;
				else if (choice==19)
					S=3;
				else if (choice==20)
					T=3;
				else if (choice==21)
					U=3;
				else if (choice==22)
					V=3;
				else if (choice==23)
					W=3;
				else if (choice==24)
					X=3;
				else if (choice==25)
					Y=3;	
			
			for(i=0; i<5; i++)
			{
				for(j=0; j<5; j++)
				{
			
				//printing table
				if(i==0 && j==0 && A == 0)
					printf("| |");
				else if (i==0 && j==1 && B == 0)
					printf("| |");
				 else if (i==0 && j==2 && C == 0)
					printf("| |");
				 else if (i==0 && j==3 && D == 0)
					printf("| |");
				 else if (i==0 && j==4 && E == 0)
					printf("| |");
				 else if (i==1 && j==0 && F == 0)
					printf("| |");
				 else if (i==1 && j==1 && G == 0)
					printf("| |");
				 else if (i==1 && j==2 && H == 0)
					printf("| |");
				 else if (i==1 && j==3 && I == 0)
					printf("| |");
				 else if (i==1 && j==4 && J == 0)
					printf("| |");
				 else if (i==2 && j==0 && K == 0)
					printf("| |");
				 else if (i==2 && j==1 && L == 0)
					printf("| |");
				 else if (i==2 && j==2 && M == 0)
					printf("| |");
				 else if (i==2 && j==3 && N == 0)
					printf("| |");
				 else if (i==2 && j==4 && O == 0)
					printf("| |");
				 else if (i==3 && j==0 && P == 0)
					printf("| |");
				 else if (i==3 && j==1 && Q == 0)
					printf("| |");
				 else if (i==3 && j==2 && R == 0)
					printf("| |");
				 else if (i==3 && j==3 && S == 0)
					printf("| |");
				 else if (i==3 && j==4 && T == 0)
					printf("| |");
				 else if (i==4 && j==0 && U == 0)
					printf("| |");
				else if (i==4 && j==1 && V == 0)
					printf("| |");
				 else if (i==4 && j==2 && W == 0)
					printf("| |");
				 else if (i==4 && j==3 && X == 0)
					printf("| |");
				 else if (i==4 && j==4 && Y == 0)
					printf("| |");
			
				if(i==0 && j==0 && A == 1)
					printf("|X|");
				else if (i==0 && j==1 && B == 1)
					printf("|X|");
				else if (i==0 && j==2 && C == 1)
					printf("|X|");
				else if (i==0 && j==3 && D == 1)
					printf("|X|");
				else if (i==0 && j==4 && E == 1)
					printf("|X|");
				else if (i==1 && j==0 && F == 1)
					printf("|X|");
				else if (i==1 && j==1 && G == 1)
					printf("|X|");
				else if (i==1 && j==2 && H == 1)
					printf("|X|");
				else if (i==1 && j==3 && I == 1)
					printf("|X|");
				else if (i==1 && j==4 && J == 1)
					printf("|X|");
				else if (i==2 && j==0 && K == 1)
					printf("|X|");
				else if (i==2 && j==1 && L == 1)
					printf("|X|");
				else if (i==2 && j==2 && M == 1)
					printf("|X|");
				else if (i==2 && j==3 && N == 1)
					printf("|X|");
				else if (i==2 && j==4 && O == 1)
					printf("|X|");
				else if (i==3 && j==0 && P == 1)
					printf("|X|");
				else if (i==3 && j==1 && Q == 1)
					printf("|X|");
				else if (i==3 && j==2 && R == 1)
					printf("|X|");
				else if (i==3 && j==3 && S == 1)
					printf("|X|");
				else if (i==3 && j==4 && T == 1)
					printf("|X|");
				else if (i==4 && j==0 && U == 1)
					printf("|X|");
				else if (i==4 && j==1 && V == 1)
					printf("|X|");
				else if (i==4 && j==2 && W == 1)
					printf("|X|");
				else if (i==4 && j==3 && X == 1)
					printf("|X|");
				else if (i==4 && j==4 && Y == 1)
					printf("|X|");
				else if(i==0 && j==0 && A == 2)
					printf("|O|");
				else if (i==0 && j==1 && B == 2)
					printf("|O|");
				else if (i==0 && j==2 && C == 2)
					printf("|O|");
				else if (i==0 && j==3 && D == 2)
					printf("|O|");
				else if (i==0 && j==4 && E == 2)
					printf("|O|");
				else if (i==1 && j==0 && F == 2)
					printf("|O|");
				else if (i==1 && j==1 && G == 2)
					printf("|O|");
				else if (i==1 && j==2 && H == 2)
					printf("|O|");
				else if (i==1 && j==3 && I == 2)
					printf("|O|");
				else if (i==1 && j==4 && J == 2)
					printf("|O|");
				else if (i==2 && j==0 && K == 2)
					printf("|O|");
				else if (i==2 && j==1 && L == 2)
						printf("|O|");
				else if (i==2 && j==2 && M == 2)
					printf("|O|");
				else if (i==2 && j==3 && N == 2)
					printf("|O|");
				else if (i==2 && j==4 && O == 2)
					printf("|O|");
				else if (i==3 && j==0 && P == 2)
					printf("|O|");
				else if (i==3 && j==1 && Q == 2)
					printf("|O|");
				else if (i==3 && j==2 && R == 2)
					printf("|O|");
				else if (i==3 && j==3 && S == 2)
					printf("|O|");
				else if (i==3 && j==4 && T == 2)
					printf("|O|");
				else if (i==4 && j==0 && U == 2)
					printf("|O|");
				else if (i==4 && j==1 && V == 2)
					printf("|O|");
				else if (i==4 && j==2 && W == 2)
					printf("|O|");
				else if (i==4 && j==3 && X == 2)
					printf("|O|");
				else if (i==4 && j==4 && Y == 2)
					printf("|O|");
				else if(i==0 && j==0 && A == 3)
					printf("|D|");
				else if (i==0 && j==1 && B == 3)
					printf("|D|");
				else if (i==0 && j==2 && C == 3)
					printf("|D|");
				else if (i==0 && j==3 && D == 3)
					printf("|D|");
				else if (i==0 && j==4 && E == 3)
					printf("|D|");
				else if (i==1 && j==0 && F == 3)
					printf("|D|");
				else if (i==1 && j==1 && G == 3)
					printf("|D|");
				else if (i==1 && j==2 && H == 3)
					printf("|D|");
				else if (i==1 && j==3 && I == 3)
					printf("|D|");
				else if (i==1 && j==4 && J == 3)
					printf("|D|");
				else if (i==2 && j==0 && K == 3)
					printf("|D|");
				else if (i==2 && j==1 && L == 3)
					printf("|D|");
				else if (i==2 && j==2 && M == 3)
					printf("|D|");
				else if (i==2 && j==3 && N == 3)
					printf("|D|");
				else if (i==2 && j==4 && O == 3)
					printf("|D|");
				else if (i==3 && j==0 && P == 3)
					printf("|D|");
				else if (i==3 && j==1 && Q == 3)
					printf("|D|");
				else if (i==3 && j==2 && R == 3)
					printf("|D|");
				else if (i==3 && j==3 && S == 3)
					printf("|D|");
				else if (i==3 && j==4 && T == 3)
					printf("|D|");
				else if (i==4 && j==0 && U == 3)
					printf("|D|");
				else if (i==4 && j==1 && V == 3)
					printf("|D|");
				else if (i==4 && j==2 && W == 3)
					printf("|D|");
				else if (i==4 && j==3 && X == 3)
					printf("|D|");
				else if (i==4 && j==4 && Y == 3)
					printf("|D|");	
				}
			
				printf("\n");																															
			}
			
			//Row checker
			if(wincheck(A,B,C,D,E) || wincheck(F,G,H,I,J) || wincheck(K,L,M,N,O) ||	wincheck(P,Q,R,S,T) || wincheck(U,V,W,X,Y))	
			{
				printf("Player 3 wins: \n");
				winplayer3=1;
			}
		
			//Column checker
			if(wincheck(A,F,K,P,U) || wincheck(B,G,L,Q,V) || wincheck(C,H,M,R,W) || wincheck(D,I,N,S,X) || wincheck(E,J,O,T,Y))
			{
				printf("Player 3 wins: \n");
				winplayer3=1;
			}
			//Diagonal checker
			if(wincheck(A,G,M,S,Y) || wincheck(U,G,H,I,J))
			{
				printf("Player 3 wins: \n");
				winplayer3=1;
			}				
				
		}
	
		printf("\n");
		
		
		
	}
}
	

		
	
	
	
	
	
	
	
	

