#include<stdio.h>
#include<string.h>

typedef struct player
{
	int j_no;
	char name[20];
	int run;
	int wicket;
	int no_of_matches;
}player;

//void store_player(player*,int );
void display_player(player*,int );
void search_player(player* ,int );
void store_player_hc(player*,int );
void update_player_info(player*,int);
void Delete_info(player* ,int*);
void Display_top_3(player*,int );

void main()
{
	//int size;
	//printf("Enter how many player you want to store\n");
	//scanf("%d",&size);
	int size=5;
	player arr[size];
	//store_player(arr,size);
	int choice;
	int exit;
	store_player_hc(arr,size);
	do
	{
        printf("\n===== PLAYER DATABASE =====\n");
         printf("1. Store data\n");
        printf("2. Display data\n");
        printf("3. Search player\n");
        printf("4. Update player informaton\n");
        printf("5. Delete player information\n");
        printf("6. Display top 3\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
//        	case 1:{
//				store_player(arr,size);	
//				break;
//			}
			case 1:{
				store_player_hc(arr,size);	
				break;
			}
        	case 2:{
        		display_player(arr,size);
				break;
			}
        	case 3:{
        		search_player(arr,size);
				break;
			}
			case 4:{
				update_player_info(arr,size);
				break;
			}
			case 5:{
				Delete_info(arr,&size);
				break;
			}
			case 6:{
				Display_top_3(arr,size);
				break;
			}
			case 7:{
				printf("Exiting.....\n");
				break;
			}
                
			default:
			printf("Invalid choice please check the MENU");
			
        	
			
		}
		printf("\nIf you want to continue press 1\n");
		scanf("%d",&exit);
		
	}while(exit==1);
	
}
//void store_player(player* arr,int n)
//{
//	int i;
//	for(i=0;i<n;i++)
//	{
//		
//			printf("Enter jersey number: ");
//			scanf("%d",&arr[i].j_no);
//			fflush(stdin);
//			printf("Enter player name: ");
//			gets(&arr[i].name);
//			printf("Enter the run scored by player: ");
//			scanf("%d",&arr[i].run);
//			printf("Enter the wicket taken by player: ");
//			scanf("%d",&arr[i].wicket);
//			printf("Enter the matches played by player: ");
//			scanf("%d",&arr[i].no_of_matches);
//	}
//	
//}
void store_player_hc(player*arr,int n)
{
	arr[0].j_no=18;
	strcpy(arr[0].name,"Virat");
	arr[0].run=45328;
	arr[0].wicket=124;
	arr[0].no_of_matches=345;
	
	arr[1].j_no=45;
	strcpy(arr[1].name,"Rohit");
	arr[1].run=54727;
	arr[1].wicket=233;
	arr[1].no_of_matches=333;
	
	arr[2].j_no=07;
	strcpy(arr[2].name,"Mahi");
	arr[2].run=38923;
	arr[2].wicket=166;
	arr[2].no_of_matches=452;
	
	arr[3].j_no=999;
	strcpy(arr[3].name,"Gayle");
	arr[3].run=61389;
	arr[3].wicket=342;
	arr[3].no_of_matches=452;
	
	arr[4].j_no=17;
	strcpy(arr[4].name,"A B D");
	arr[4].run=62764;
	arr[4].wicket=256;
	arr[4].no_of_matches=377;
}


void display_player(player* arr,int n)
{
	printf("                ****** PLAYER RECORD ******                ");
	printf("\n");
	printf("----------------------------------------------------------------\n");
	printf("|  J. No   |    Name    |   Run   |   Wicket   | No.Of matches |\n");
	printf("----------------------------------------------------------------\n");
	int i;
	for(i=0;i<n;i++)
	{
		
		 	printf("|%-10d|%-12s|%-9d|%-12d|%-15d|\n",arr[i].j_no,&arr[i].name,arr[i].run,arr[i].wicket,arr[i].no_of_matches);
		 	printf("----------------------------------------------------------------\n");

  	}
	
}
void search_player(player* arr,int n)
{
	int ch;
	printf("\n===== Menu for search player =====\n");
	printf("1. Search by jersey number\n");
	printf("2. Search by player name\n");
	scanf("%d",&ch);
	if(ch==1)
	{
        int js_no;
        printf("Enter the jersey number: ");
        scanf(" %d", &js_no);

                int found = 0;
                for (int i = 0; i < n; i++)
				{
					
                    if (arr[i].j_no==js_no) 
					{
						
                        found = 1;
                        
                        printf("     *** Jersey number found ***\n");
                        printf("---------------------------------------\n");
                        printf("| Name                     |%-10s|\n", &arr[i].name);
                        printf("---------------------------------------\n");
                        printf("| Run                      |%-10d|\n", arr[i].run);
                        printf("---------------------------------------\n");
                        printf("| Wicket                   |%-10d|\n", arr[i].wicket);
                        printf("---------------------------------------\n");
                        printf("| Number of matches played |%-10d|\n",arr[i].no_of_matches);
                        printf("---------------------------------------\n");
                        break;
                    }
                }
                if (!found) 
				{
                    printf("*** Player not found in the database. ***\n");
				}
	}

	else
	{
		char p_name[20];
        printf("Enter the player name: ");
        fflush(stdin);
        gets(p_name);

                int found = 0;
                for (int i = 0; i < n; i++)
				{
                    if (strcmp(arr[i].name, p_name) == 0) 
					{
                        found = 1;
                        printf("    *** Player name found ***:\n");
                        printf("---------------------------------------\n");
                        printf("|Jersey number             |%-10d|\n", arr[i].j_no);
                        printf("---------------------------------------\n");
                        printf("| Name                     |%-10s|\n", &arr[i].name);
                        printf("---------------------------------------\n");
                        printf("| Run                      |%-10d|\n", arr[i].run);
                        printf("---------------------------------------\n");
                        printf("| Wicket                   |%-10d|\n", arr[i].wicket);
                        printf("---------------------------------------\n");
                        printf("| Number of matches played |%-10d|\n",arr[i].no_of_matches);
                        printf("---------------------------------------\n");

                        break;
                    }
                }
                if (!found) 
				{
                    printf("*** Player not found in the database. ***\n");
		
				}
	}
}
void update_player_info(player* arr,int n)
{
	int ch;
	printf("\n===== Menu to update player info =====\n");
	printf("\n1. Update runs\n");
	printf("\n2. Update wicket\n");
	printf("\n3. Update number of matches played\n");
	scanf("%d",&ch);
	
	if(ch==1)
	{
		char p_name[20];
        printf("Enter the player name: ");
        fflush(stdin);
        gets(p_name);

                int found = 0;
                for (int i = 0; i < n; i++)
				{
                    if (strcmp(arr[i].name, p_name) == 0) 
					{
						found = 1;
                        printf("Enter details of update run :\n");
                        scanf(" %d",&arr[i].run);
                        printf("\n*** Runs are updated ***\n");
                        break;
                	}
            	}
		
	}
	else if(ch==2)
	{
		char p_name[20];
        printf("Enter the player name: ");
        fflush(stdin);
        gets(p_name);

                int found = 0;
                for (int i = 0; i < n; i++)
				{
                    if (strcmp(arr[i].name, p_name) == 0) 
					{
						found = 1;
                        printf("Enter details of update wicket :\n");
                        scanf(" %d",&arr[i].wicket);
                        printf("\n*** Wickets are updated ***\n");
                        break;
                	}
            	}  
	}
	else
	{
		char p_name[20];
        printf("Enter the player name: ");
        fflush(stdin);
        gets(p_name);

                int found = 0;
                for (int i = 0; i < n; i++)
				{
                    if (strcmp(arr[i].name, p_name) == 0) 
					{
						found = 1;
                        printf("Enter details of update  number of matches :\n");
                        scanf(" %d",&arr[i].no_of_matches);
                        printf("\n***Number of matches are updated ***\n");
                        break;
                	}
            	}  
		
	}
}
void Delete_info(player* arr,int *n)
{
	char p_name[20];
    printf("Enter the player name: ");
    fflush(stdin);
    gets(p_name);
    
    int found = 0;
                for (int i = 0; i < *n; i++)
				{
                    if (strcmp(arr[i].name, p_name) == 0) 
					{
						for(int j=i;j<*n;j++)
						{
						
						found = 1;
						arr[j]=arr[j+1];
						
						}
						
						printf("**** Player information deleted successfully ****\n");
                        break;
                	}
                }
				(*n)--; 
				
			if (!found) {
       			printf("**** Player not found ****\n");
    		} 

	
	
}
void Display_top_3(player* arr,int n)
{
	int ch;
	printf("\n===== Menu for display top 3 =====\n");
	printf("\n1. Display top 3 by runs\n");
	printf("\n2.  Display top 3 by wicket\n");
	scanf("%d",&ch);
	
	if(ch==1)
	{
		int i, j;
		for (i = 0; i < n; i++) 
		{
    		for (j = i + 1; j < n; j++)
			{
        		if (arr[i].run < arr[j].run) 
				{
             		player temp = arr[i];
            		arr[i] = arr[j];
            		arr[j] = temp;
        		}
    		}
		}
	printf("\n*** Top 3 Players based on Runs ***\n");
	for (i = 0; i < 3 ; i++) 
	{
		printf("--------------------------\n");
    	printf("|%d | %-10s |(%-6d)|\n", i + 1, arr[i].name,arr[i].run);
	}

	}
	else
	{
		int i;
		for (i = 0; i < n; i++) 
		{
			int j;
        	for (j = 0; j < n-1; j++) 
			{
             if (arr[j].wicket < arr[j + 1].wicket) 
			{
                player temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
            }
        }
    	}
        printf("\n*** Top 3 Players based on wickets ***\n");
        for (int i = 0; i < 3; i++) 
		{
			printf("--------------------------\n");
         	printf("|%d | %-10s |(%-6d)|\n", i + 1, arr[i].name,arr[i].wicket);
        }
	}
	
	
}
	
	
	