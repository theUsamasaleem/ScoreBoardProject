#include <stdio.h>
#include <time.h> 
#include <stdlib.h> 

int printRandoms(int lower, int upper, int count) 
{ 
    int i; 
    for (i=0; i<count; i++) { 
        int num = (rand() % (upper - lower + 1)) + lower; 
        return num; 
    } 
} 
  
char** swapping(char** Team,int counter, int id)
{
	int i;
	char temp[30];
		for(i=0;i<30;i++)
			{
				temp[i]=Team[id][i];
			}
			for(i=0;i<30;i++)
			{
				Team[id][i]=Team[counter][i];
			}
			for(i=0;i<30;i++)
			{
				Team[counter][i]=temp[i];
			}
	return Team;
}
main() 
{ 
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 |SCORE BOARD BY IZAAN AHMED KHAN(FA19-BSCS-0049)| \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	char TeamA[11][30]={"Sarfaraz(k)","Babar Azam","M. Hafeez","Imad Wasim","Hasan Ali","M. Amir","WahabRiaz","Fakhar","ShoaibMalik","Afridi(c)","Umar Akmal"};
	char TeamB[11][30]={"Kohli","Sharma","Dhoni(k)(c)","Rahul","Jadeja","Rishabh","Bumrah","Deepak","Kuldeep","Navdeep","Dinesh"};
	char batorbowl, bating, bowling,condition;
	int i, j, a, runA=0, runB=0, c=0;
	FILE *fptr;
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 TEAM A \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	for(i=0;i<11;i++){
	 	printf("\t\t\t    ");
		for(j=0;j<11;j++){
			printf("%c",TeamA[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 TEAM B \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	for(i=0;i<11;i++){
		printf("\t\t\t      ");
		for(j=0;j<11;j++){
			printf("%c",TeamB[i][j]);
		}
		printf("\n");
	}
	
    int lower = 0, upper = 1, count = 1; 
  

    srand(time(0)); 
    int toss;
    int selector;
    toss= printRandoms(lower, upper, count); 
    
    printf("------- From Team A -------\n");
    char hort;
    printf("***** Head or Tails? *****\n (Enter H for Head, T for Tale)-  ");
    scanf("%c",&hort);
    if(hort=='H' || hort=='h'){
    	selector=0;
	}
	else{
		selector=1;
	}

	
	if(selector==toss){
		printf("||| Team A won the toss! |||\n\n");
		
		int a;
	    for(a=0; a<100;a++)
		{
			printf("Choose to Bat or Bowl\nEnter 't' for Batting & 'b' for Bowling: ");
			scanf(" %c",&batorbowl);
		
		
			if(batorbowl=='t'||batorbowl=='b')
			{
				if(batorbowl=='t')
				{
					bating = 'A';
					bowling = 'B';
				}
				else
				{
					bating = 'B';
					bowling = 'A';
				}
				
				break;
			}
			else
			{
			    printf("\xB2\xB2\xB2\xB2\xB2 INVALID INPUT \xB2\xB2\xB2\xB2\xB2 \n");
			    continue;
			}
		}
		
	 	}
	
	else{
			printf("||| Team B won the Toss! |||\n\n");
			
		    for(a=0; a<100;a++)
			{
				printf("\nChoose to Bat or Bowl\nEnter 't' for Batting & 'b' for Bowling: ");
				scanf(" %c",&batorbowl);
			
			
				if(batorbowl=='t'||batorbowl=='b')
				{
					if(batorbowl=='t')
				{
					bating = 'B';
					bowling = 'A';
				}
				else
				{
						bating = 'A';
						bowling = 'B';
				}
				
					break;
				}
				else
				{
				    printf("\xB2\xB2\xB2\xB2\xB2 INVALID INPUT \xB2\xB2\xB2\xB2\xB2 \n");
				    continue;
				}
				
			}
		}
		system("cls");
		printf("\xB2\xB2\xB2\xB2Team %c is Batting first\xB2\xB2\xB2\xB2 \n",bating);
		printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2Team %c is Bowling\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n",bowling);
		
		for(a=0;a<11;a++){
				if(bating=='A')
		{
				for(i=0;i<11;i++)
				{
					printf(" \t");
					for(j=0;j<11;j++)
					{
						printf("%c",TeamA[i][j]);
					}
			printf(" %d \n",i);
				}
			
			int counter=0;
			int playerid;
			char temp[30];
			printf("***** SORT BATTING ORDER *****");
			printf("\n*** Enter player %d-",a+1);
			scanf(" %d",&playerid);
		for(i=0;i<30;i++)
			{
				temp[i]=TeamA[playerid][i];
			}
			for(i=0;i<30;i++)
			{
				TeamA[playerid][i]=TeamA[counter][i];
			}
			for(i=0;i<30;i++)
			{
				TeamA[counter][i]=temp[i];
			}
				counter++;

				
		}
		else
		{
			for(i=0;i<11;i++)
			{ 
				printf(" \t");
				for(j=0;j<11;j++)
				{
					printf("%c",TeamB[i][j]);
				}
					printf(" %d \n",i);
				
				}
				
			int counter=0;
			int playerid;
			char temp[30];
			
			printf("\n***** SORT BATTING ORDER *****");
			printf("\n*** Enter player %d-  ",a+1);
			scanf(" %d",&playerid);
		
		for(i=0;i<30;i++)
			{
				temp[i]=TeamB[playerid][i];
			}
			for(i=0;i<30;i++)
			{
				TeamB[playerid][i]=TeamB[counter][i];
			}
			for(i=0;i<30;i++)
			{
				TeamB[counter][i]=temp[i];
			}
				counter++;
		}
		}
	system("cls");
	int overs;
	int status;
	
	printf("\n\xB2\xB2 Match Total Over: ");
	scanf("%d",&overs);
	
	int cplayer=0;
	
	for(i=1;i<overs+1;i++){
		for(j=1;j<=6;j++){
			if(c>0)
			{
				j=c;
				c=0;
			}
				if(bating=='A')
						{
						// printing name
						printf("\n\nPlayer on Strike: ");
								for(a=0;a<30;a++)
								{
									printf("%c",TeamA[cplayer][a]);
								}
									printf("\n");
								
						printf("\nPlayer on Running: ");
								for(a=0;a<30;a++)
									{
										printf("%c",TeamA[cplayer+1][a]);
									}
										printf("\n\n");
								
						}
						else
						{
						// printing name
						printf("\n\nPlayer on Strike: ");
										for(a=0;a<30;a++)
									{
										printf("%c",TeamB[cplayer][a]);
									}
										printf("\n");
								
						printf("\nPlayer on Running: ");
							for(a=0;a<30;a++)
							{
								printf("%c",TeamB[cplayer+1][a]);
							}
								printf("\n");						
						}
				
			printf("\n \xB2\xB2\xB2 Over %d, Ball %d \xB2\xB2\xB2 \n",i,j);
			printf("**** STATUS ****\n");
				if(bating=='A')
					{
						printf("Runs of Team A: %d \n",runA);
					}
					else
					{
						printf("Runs of Team B: %d \n",runB);
					}
			printf("\nEnter\n1 for out\n2 for run\n3 for six\n4 for four\n5 for no ball\n6 for wide \n");
			scanf("%d",&status);
			switch(status){
				case 1: 
						if(bating=='A')
						{
							cplayer++;
							char temp[30];
							for(a=0;a<30;a++)
							{
								temp[a]=TeamA[cplayer][a];
							}
							for(a=0;a<30;a++)
							{
							TeamA[cplayer][a]=TeamA[cplayer+1][a];
							}
							for(a=0;a<30;a++)
							{
								TeamA[cplayer+1][a]=temp[a];
								
							}
							if(TeamA[cplayer]==TeamA[cplayer+1])
						{
							printf("*****All out !*****");
							condition = 'o';
						}	
						}
						else
						{
							cplayer++;
							char temp[30];
							for(a=0;a<30;a++)
							{
								temp[a]=TeamB[cplayer][a];
							}
							for(a=0;a<30;a++)
							{
								TeamB[cplayer][a]=TeamB[cplayer+1][a];
							}
							for(a=0;a<30;a++)
							{
								TeamB[cplayer+1][a]=temp[a];
							}
								if(TeamB[cplayer]==TeamB[cplayer+1])
						{
							printf("*****All out !*****");
								condition = 'o';
						}
						}
						break;
					
				case 2:
						int runs;
						printf("How many Runs : ");
						scanf(" %d",&runs)	;	
						if(bating=='A')
					{
					runA+=runs;
					if(runs%2==1)
					{
						char temp[30];
							for(a=0;a<30;a++)
							{
								temp[a]=TeamA[cplayer][a];
							}
							for(a=0;a<30;a++)
							{
							TeamA[cplayer][a]=TeamA[cplayer+1][a];
							}
							for(a=0;a<30;a++)
							{
								TeamA[cplayer+1][a]=temp[a];
								
							}
					}
					
					}
					else
					{
						runB+= runs;
							char temp[30];
								if(runs%2==1)
					{
							for(a=0;a<30;a++)
							{
								temp[a]=TeamB[cplayer][a];
							}
							for(a=0;a<30;a++)
							{
								TeamB[cplayer][a]=TeamB[cplayer+1][a];
							}
							for(a=0;a<30;a++)
							{
								TeamB[cplayer+1][a]=temp[a];
								
							}
					}
					
					}
					
					break;
				case 3:
						printf("***A Massive Six !*** \n");
						if(bating=='A')
					{
					runA+=6;
					}
					else
					{
						runB+= 6;
					}
					break;
				case 4:
						printf("***Four*** \n");
						if(bating=='A')
					{
					runA+=4;
					}
					else
					{
						runB+= 4;
					}
					break;
					
				case 5:
						printf("***No ball !***");
						c=j;
							
						if(bating=='A')
						{
						runA+=1;
						int fhrun;
						printf("Runs Scored on Free Hit : ");
						scanf("%d",&fhrun);
						runA += fhrun;
					
						}
						else
						{
							runB+= 1;
						int fhrun;
						printf("Runs Scored on Free Hit : ");
						scanf("%d",&fhrun);
						runB += fhrun;
					
							
						}
					
					
				case 6:
					printf("***Wide*** \n");
					if(bating=='A')
					{
					runA+=1;
					c=j;
					}
					else
					{
						runB+= 1;
					c=j;
					}
					break;
				
			}
		}
	}
	
	printf("End of inning 1 ! \n ");
					if(bating=='A')
					{
						bating='B';
						printf("Score of Team A is %d and target is %d",runA,runA+1);
					}
					else
					{
						printf("Score of Team B is %d and target is %d",runB,runB+1);
						bating = 'A';
					}
					
					
					
		for(i=1;i<overs+1;i++){
		for(j=1;j<=6;j++){
			if(c>0)
			{
				j=c;
				c=0;
			}
			if(condition=='o')
			{
				
				break;
			}
				if(bating=='A')
						{
							// printing name
							printf("\n\nPlayer on strike: ");
									for(a=0;a<30;a++)
									{
										printf("%c",TeamA[cplayer][a]);
									}
										printf("\n");
								
							printf("\n\nPlayer on running ");
									for(a=0;a<30;a++)
									{
										printf("%c",TeamA[cplayer+1][a]);
									}
										printf("\n");
								
						}
						else
						{
						// printing name
							printf("\n\nPlayer on strike: ");
									for(a=0;a<30;a++)
									{
										printf("%c",TeamB[cplayer][a]);
									}
										printf("\n");
								
								printf("\n\nPlayer on running ");
								for(a=0;a<30;a++)
									{
										printf("%c",TeamB[cplayer+1][a]);
									}
										printf("\n");
							
						}
				
			printf("\n \xB2\xB2\xB2 Over %d, Ball %d \xB2\xB2\xB2 \n",i,j);
			printf("STATUS\n");
				if(bating=='A')
					{
					printf("Runs of Team A: %d \n",runA);
					}
					else
					{
						printf("Runs of Team B: %d \n",runB);
					}
			printf("Enter\n1 for out\n2 for run\n3 for six\n4 for four\n5 for no ball\n6 for wide \n");
			scanf("%d",&status);
			switch(status){
				case 1: 
						if(bating=='A')
						{
						cplayer++;
							char temp[30];
							for(a=0;a<30;a++)
							{
								temp[a]=TeamA[cplayer][a];
							}
							for(a=0;a<30;a++)
							{
							TeamA[cplayer][a]=TeamA[cplayer+1][a];
							}
							for(a=0;a<30;a++)
							{
								TeamA[cplayer+1][a]=temp[a];
								
							}
							if(TeamA[cplayer]==TeamA[cplayer+1])
						{
							printf("***All out !***");
							condition = 'o';
						}	
						}
						else
						{
							cplayer++;
							char temp[30];
							for(a=0;a<30;a++)
							{
								temp[a]=TeamB[cplayer][a];
							}
							for(a=0;a<30;a++)
							{
							TeamB[cplayer][a]=TeamB[cplayer+1][a];
							}
							for(a=0;a<30;a++)
							{
								TeamB[cplayer+1][a]=temp[a];
							}
								if(TeamB[cplayer]==TeamB[cplayer+1])
						{
							printf("***All out !***");
								condition = 'o';
						}
						}
						break;
					
				case 2:
						int runs;
						printf("how many Runs : ");
						scanf(" %d",&runs)	;	
						if(bating=='A')
					{
					runA+=runs;
					if(runs%2==1)
					{
						char temp[30];
							for(a=0;a<30;a++)
							{
								temp[a]=TeamA[cplayer][a];
							}
							for(a=0;a<30;a++)
							{
							TeamA[cplayer][a]=TeamA[cplayer+1][a];
							}
							for(a=0;a<30;a++)
							{
								TeamA[cplayer+1][a]=temp[a];
								
							}
					}
					
					}
					else
					{
						runB+= runs;
							char temp[30];
								if(runs%2==1)
					{
							for(a=0;a<30;a++)
							{
								temp[a]=TeamB[cplayer][a];
							}
							for(a=0;a<30;a++)
							{
							TeamB[cplayer][a]=TeamB[cplayer+1][a];
							}
							for(a=0;a<30;a++)
							{
								TeamB[cplayer+1][a]=temp[a];
								
							}
					}
					
					}
						if(bating=='A')
					{
				if(runA>runB)
				{
					printf("\xB2\xB2\xB2\xB2\xB2Team A won !\xB2\xB2\xB2\xB2\xB2");
						condition = 'o';
				}
				
					}
					else
					{
						if(runB>runA)
						{
								printf("\xB2\xB2\xB2\xB2\xB2Team B won !\xB2\xB2\xB2\xB2\xB2");
									condition = 'o';
						}
					}
					
					break;
				case 3:
						printf("***Six !*** \n");
						if(bating=='A')
					{
					runA+=6;
					}
					else
					{
						runB+= 6;
					}
						if(bating=='A')
					{
				if(runA>runB)
				{
					printf("\xB2\xB2\xB2\xB2\xB2Team A won !\xB2\xB2\xB2\xB2\xB2");
						condition = 'o';
				}
				
					}
					else
					{
						if(runB>runA)
						{
								printf("\xB2\xB2\xB2\xB2\xB2Team B won !\xB2\xB2\xB2\xB2\xB2");
									condition = 'o';
						}
					}
					break;
				case 4:
						printf("***Four*** \n");
						if(bating=='A')
					{
					runA+=4;
					}
					else
					{
						runB+= 4;
					}
						if(bating=='A')
					{
				if(runA>runB)
				{
					printf("\xB2\xB2\xB2\xB2\xB2Team A won !\xB2\xB2\xB2\xB2\xB2");
						condition = 'o';
				}
				
					}
					else
					{
						if(runB>runA)
						{
								printf("\xB2\xB2\xB2\xB2\xB2Team B won !\xB2\xB2\xB2\xB2\xB2");
									condition = 'o';
						}
					}
					break;
					
				case 5:
						printf("***No ball !***");
						c=j;
							
						if(bating=='A')
						{
						runA+=1;
						int fhrun;
						printf("\nRuns scored on Free Hit : ");
						scanf("%d",&fhrun);
						runA += fhrun;
					
						}
						else
						{
							runB+= 1;
						int fhrun;
						printf("\nRuns scored on Free Hit : ");
						scanf("%d",&fhrun);
						runB += fhrun;
						if(bating=='A')
					{
				if(runA>runB)
				{
					printf("\xB2\xB2\xB2\xB2\xB2Team A won !\xB2\xB2\xB2\xB2\xB2");
						condition = 'o';
				}
				
					}
					else
					{
						if(runB>runA)
						{
								printf("\xB2\xB2\xB2\xB2\xB2Team B won !\xB2\xB2\xB2\xB2\xB2");
									condition = 'o';
						}
					}
							
						}
					break;
					
				case 6:
					printf("***Wide*** \n");
					if(bating=='A')
					{
					runA+=1;
					c=j;
					}
					else
					{
						runB+= 1;
					c=j;
					}
						if(bating=='A')
					{
				if(runA>runB)
				{
					printf("\xB2\xB2\xB2\xB2\xB2Team A won !\xB2\xB2\xB2\xB2\xB2");
						condition = 'o';
				}
				
					}
					else
					{
						if(runB>runA)
						{
								printf("\xB2\xB2\xB2\xB2\xB2Team B won !\xB2\xB2\xB2\xB2\xB2");
									condition = 'o';
						}
					}
						break;
				
			}
		
		}
		
	}
	if(runB==runA)
	{
		printf("\xB2\xB2\xB2\xB2\xB2 Match Draw! \xB2\xB2\xB2\xB2\xB2");
		fptr = fopen("Match Result.txt","w");
		fprintf(fptr,"MATCH DRAW");
   		fclose(fptr);
	}
	else if(runB>runA)
	{
		printf("\xB2\xB2\xB2\xB2\xB2 Team B is the Winner! \xB2\xB2\xB2\xB2\xB2");
		fptr = fopen("Match Result.txt","w");
		fprintf(fptr,"TEAM B WINS");
   		fclose(fptr);
	}
	else if(runB<runA)
	{	
		printf("\xB2\xB2\xB2\xB2\xB2 Team A is the Winner! \xB2\xB2\xB2\xB2\xB2");
		fptr = fopen("Match Result.txt","w");
		fprintf(fptr,"TEAM A WINS");
   		fclose(fptr);
	}
} 


