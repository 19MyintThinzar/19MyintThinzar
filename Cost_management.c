#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char jan[]="January.txt";
char feb[]="February.txt";
char mar[]="March.txt";
char apr[]="April.txt";
char may[]="May.txt";
char june[]="June.txt";
char july[]="July.txt";
char aug[]="August.txt";
char sep[]="September.txt";
char oct[]="October.txt";
char nov[]="November.txt";
char dec[]="December.txt";

void home_page();
void add_function();
void view_function();
void delete_function();
void edit_function();

void add_heading();
void view_heading();
void edit_heading();
void delete_heading();

int main()
{
	home_page();
}

//------------------------------------------------------------------------------------------------------------------------------------

void home_page()
{
	int choice;
	char c;
	do
	{
	    printf("\n\t\tWelcome to our system\n\n");
		printf("\tMain Menu\n");
		printf("Add Record\t: 1\nView Record\t: 2\nEdit Record\t: 3\nDelete Record\t: 4\nExit Program\t: 5\n\n");
		printf("Enter your choice : ");
		scanf("%c", &c);
		if (!isdigit(c))
		{
		    system("clear");
			printf("You have entered invalid input\nTry again\n\n");
			home_page();
		}
		else
		    choice = (int)(c-'0');
		switch (choice)
		{
			case 1:
					system("clear");
					add_heading();
					add_function();
					break;
			case 2:
					system("clear");
					view_heading();
					view_function();
					break;
			case 3:
					system("clear");
					edit_heading();
					edit_function();
					break;
			case 4:
					system("clear");
					delete_heading();
					delete_function();
					break;
			case 5:
					system("clear");
					printf("\n\t\tThank You For Using Our System !\n\n");
					exit(0);
					break;
			default:
					system("clear");
					printf("You have entered invalid input\nTry again\n\n");
					home_page();
		}
	}while((choice<1)||(choice>5));
}
//------------------------------------------------------------------------------------------------------------------------------------
void add_heading()
{
	printf("\t\t* * * * * * * * *\n");
	printf("\t\t*  Add   Record *\n");
	printf("\t\t* * * * * * * * *\n\n");
}
//------------------------------------------------------------------------------------------------------------------------------------
void add_function()
{
	char reason[12][12]={
							{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'},
							{'B','r','e','a','k','f','a','s','t','\0','\0','\0'},
							{'L','u','n','c','h','\0','\0','\0','\0','\0','\0','\0'},
							{'D','i','n','n','e','r','\0','\0','\0','\0','\0','\0'},
							{'T','r','a','n','s','p','o','r','t','\0','\0','\0'},
							{'S','n','a','c','k','s','\0','\0','\0','\0','\0','\0'},
							{'C','l','o','t','h','e','s','\0','\0','\0','\0','\0'},
							{'C','o','s','m','e','t','i','c','s','\0','\0','\0'},
							{'M','e','d','i','c','i','n','e','s','\0','\0'},
							{'A','c','c','e','s','s','o','r','y','\0','\0','\0'},
							{'S','t','a','t','i','o','n','a','r','y','\0','\0'},
							{'O','t','h','e','r','s','\0','\0','\0','\0','\0','\0'},
						};
	int choice, i, j, k, cost, total=0, n=0, m=0, x=1, found;
	int month1, month2, day1, day2;
	int month, day;
	char date[11];
	char st[1000];
	char read_date[10];
	char read_date1[10];
	char v;
	int a[20];
	int amount[20];
	FILE *fp; // @suppress("Type cannot be resolved")
	char filename[20];
	char aaa;
	printf("Date (yyyy-mm-dd)  : ");
	scanf("%s",date);
	//for(i=0; i<11; i++)
	//	scanf("%c",&date[i]);

	month1= (int)(date[5]-'0');
	month2= (int)(date[6]-'0');
	month = (month1*10)+month2;

	day1= (int)(date[8]-'0');
	day2= (int)(date[9]-'0');
	day = (day1*10)+day2;
	switch(month)
	{
	case 1:
		if(day>31)
		{
			system("clear");
			printf("\nIvalid Date\n\nTry Again.\n\n");
			add_function();
		}
		else
			strcpy(filename,jan);
		break;
	case 2:
		if(day>28)
		{
			system("clear");
			printf("\nIvalid Date\n\nTry Again.\n\n");
			add_function();
		}
		else
			strcpy(filename,feb);
		break;
	case 3:
		if(day>31)
		{
			system("clear");
			printf("\nIvalid Date\n\nTry Again.\n\n");
			add_function();
		}
		else
			strcpy(filename,mar);
		break;
	case 4:
		if(day>30)
		{
			system("clear");
			printf("\nIvalid Date\n\nTry Again.\n\n");
			add_function();
		}
		else
			strcpy(filename,apr);
		break;
	case 5:
		if(day>31)
		{
			system("clear");
			printf("\nIvalid Date\n\nTry Again.\n\n");
			add_function();
		}
		else
			strcpy(filename,may);
		break;
	case 6:
		if(day>30)
		{
			system("clear");
			printf("\nIvalid Date\n\nTry Again.\n");
			add_function();
		}
		else
			strcpy(filename,june);
		break;
	case 7:
		if(day>31)
		{
			system("clear");
			printf("\nIvalid Date\n\nTry Again.\n");
			add_function();
		}
		else
			strcpy(filename,july);
		break;
	case 8:
		if(day>=31)
		{
			system("clear");
			printf("\nIvalid Date\n\nTry Again.\n");
			add_function();
		}
		else
			strcpy(filename,aug);
		break;
	case 9:
		if(day>30)
		{
			system("clear");
			printf("\nIvalid Date\n\nTry Again.\n");
			add_function();
		}
		else
			strcpy(filename,sep);
		break;
	case 10:
		if(day>=31)
		{
			system("clear");
			printf("\nIvalid Date\n\nTry Again.\n");
			add_function();
		}
		else
			strcpy(filename,oct);
		break;
	case 11:
		if(day>30)
		{
			system("clear");
			printf("\nIvalid Date\n\nTry Again.\n");
			add_function();
		}
		else
			strcpy(filename,nov);
		break;
	case 12:
		if(day>31)
		{
			system("clear");
			printf("\nIvalid Date\n\nTry Again.\n");
			add_function();
		}
		else
			strcpy(filename,dec);
		break;
	default:
		system("clear");
		printf("\nIvalid Date\n\nTry Again.\n");
		add_function();
	}


	//////////////////////////////////////////////////////////////////////////////////

	fp = fopen(filename,"r");
	while(fgets(st,1000,fp))
		{
			j++;
			if(j>2)
			{
				strncpy(read_date,st,10);
				for(i=0; i<10;i++)
				{
				    if(read_date[i]==date[i])
				        found=1;
				    else
				    {
				        found=0;
				        break;
				    }

				}
				if(found==1)
				    break;
			}
		}
	fclose(fp);
	if(found==1)
				{
				    printf("\nRecord already exist !\n\n\n");
				    printf("Date\t\t| Breakfast    | Lunch        | Dinner       | Transport    | Snacks       | Clothes      | Cosmetics    | Medicine     | Accessory    | Stationary   | Others       | Total\n");
	            	printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("%s",st);
					printf("\n\nBack to Main (y/n) : ");
					scanf(" %c",&v);
					if(v=='y')
					    home_page();
					else
					{
					    system("clear");
		                printf("\n\n\t\tThank You For Using Our System !\n\n");
		                exit(0);
					}
				}

	/////////////////////////////////////////////////////////////////////////////////
	fp = fopen(filename,"a");
	printf("\n");
	do
	{
		printf("\n\n\tReason\t\t|\tCost\n");
		printf("---------------------------------------------\n");
		for(i=0; i<n;i++)
		{
			j=a[i];
			printf("\t");
			for(k=0; k<11; k++)
				printf("%c",reason[j][k]);
			if((j==2) || (j==3) || (j==5) || (j==6) || (j==11))
				printf("\t\t|\t");
			else
				printf("\t|\t");
			printf("%d",amount[j]);
			printf("\n");
		}
		printf("\n");
		printf("1. Breakfast\n2. Lunch\n3. Dinner\n4. Transport\n5. Snacks\n6. Clothes\n7. Cosmetics\n8. Medicine\n9. Accessories\n10. Stationaries\n11. Others\n12. Total (Enter '12' to terminate calculation !)\n");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		if (choice==12)
		{
			system("clear");
			fp = fopen(filename,"a");
			//for(i=0; i<11; i++)
				//fprintf(fp,"%c",date[i]);
			fprintf(fp,"\n%s",date);
			fprintf(fp,"\t");

			printf("\n\n\tReason\t\t|\tCost\n");
			printf("---------------------------------------------\n");
			for(i=0; i<n; i++)
			{
				j=a[i];
				printf("\t");
				for(k=0; k<11; k++)
					printf("%c",reason[j][k]);
				if((j==2) || (j==3) || (j==5) || (j==6) || (j==11))
					printf("\t\t|\t");
				else
					printf("\t|\t");
				printf("%d",amount[j]);
				printf("\n");
			}
			printf("\n---------------------------------------------\n");
			printf("\tTotal\t\t|\t%d\n\n",total);

			for(m=1; m<12; m++)
			{
				if(amount[m]==0)
					fprintf(fp,"|              ");
				else if ((amount[m]>9) && (amount[m]<=99))
					fprintf(fp,"| %d           ",amount[m]);
				else if ((amount[m]>99) && (amount[m]<=999))
					fprintf(fp,"| %d          ",amount[m]);
				else
					fprintf(fp,"| %d         ",amount[m]);
			}
			fprintf(fp,"| %d ",total);
			break;
		}
		else if(choice>12)
		{
			printf("\nInvalid Number\n");
			choice=1;
			continue;
		}
		else
		{
			printf("\t");
			for(i=0; i<11; i++)
				printf("%c",reason[choice][i]);
			if((choice==2) || (choice==3) || (choice==5) || (choice==6) || (choice==11))
				printf("\t\t|\t");
			else
				printf("\t|\t");
			scanf("%d",&cost);

			for(m=x; m<choice; m++)
				amount[m]=0;
			amount[choice]=cost;
			x = choice+1;

		}
		for(m=x; m<12; m++)
			amount[m]=0;
		total = total+cost;
		a[n]=choice;
		n++;
		system("clear");
	}while(choice<=11);
	fclose(fp);
	printf("\n\nSuccessfully add to %s\n\n\n", filename);
	printf("Continue or Exit (c/e)  :  ");
	scanf(" %c",&aaa);
	if (aaa=='c')
	{
		system("clear");
		home_page();
	}
	else
	{
		system("clear");
		printf("\n\n\t\tThank You For Using Our System !\n\n");
		exit(0);
	}
}
//------------------------------------------------------------------------------------------------------------------------------------
void view_heading()
{
	printf("\t\t* * * * * * * * *\n");
	printf("\t\t* View   Record *\n");
	printf("\t\t* * * * * * * * *\n\n\n");
}
//------------------------------------------------------------------------------------------------------------------------------------
void view_function()
{
	int choice, i, j=0, found=0, sthn=0;
	char date[11];
	char new_date[10];
	char read_date[10];
	char filename[25];
	char st[1000];
	FILE *fp; // @suppress("Type cannot be resolved")
	int day, day1, day2, month, month1, month2;
	char aaa;

	int total=0, n, x=1, all=0;

	printf("View Only One Day\t:  1\n");
	printf("View by Month\t\t:  2\n\n");
	printf("How would you like to view\n");
	printf("Enter your choice  :  ");
	scanf("%d",&choice);
	if (choice==1)
	{
		system("clear");
		view_heading();
		printf("\nEnter Date you want to view (yyyy-mm-dd) : ");
		scanf("%s",date);
		printf("\n\n");
		day1=(int)(date[8]-'0');
		day2=(int)(date[9]-'0');
		day=(day1*10)+day2;

		month1=(int)(date[5]-'0');
		month2=(int)(date[6]-'0');
		month=(month1*10)+month2;

		switch(month)
		{
			case 1:
				if(day>31)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					sthn=1;
					view_heading();
					view_function();
				}
				else
					strcpy(filename,jan);
				break;
			case 2:
				if(day>28)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					sthn=1;
					view_heading();
					view_function();
				}
				else
					strcpy(filename,feb);
				break;
			case 3:
				if(day>31)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					sthn=1;
					view_heading();
					view_function();
				}
				else
					strcpy(filename,mar);
				break;
			case 4:
				if(day>30)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					sthn=1;
					view_heading();
					view_function();
				}
				else
					strcpy(filename,apr);
				break;
			case 5:
				if(day>31)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					sthn=1;
					view_heading();
					view_function();
				}
				else
					strcpy(filename,may);
				break;
			case 6:
				if(day>30)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					sthn=1;
					view_heading();
					view_function();
				}
				else
					strcpy(filename,june);
				break;
			case 7:
				if(day>31)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					sthn=1;
					view_heading();
					view_function();
				}
				else
					strcpy(filename,july);
				break;
			case 8:
				if(day>31)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					sthn=1;
					view_heading();
					view_function();
				}
				else
					strcpy(filename,aug);
				break;
			case 9:
				if(day>30)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					sthn=1;
					view_heading();
					view_function();
				}
				else
					strcpy(filename,sep);
				break;
			case 10:
				if(day>31)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					sthn=1;
					view_heading();
					view_function();
				}
				else
					strcpy(filename,oct);
				break;
			case 11:
				if(day>30)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					sthn=1;
					view_heading();
					view_function();
				}
				else
					strcpy(filename,nov);
				break;
			case 12:
				if(day>31)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					sthn=1;
					view_heading();
					view_function();
				}
				else
					strcpy(filename,dec);
				break;
			default:
				system("clear");
				printf("\nIvalid Date\n\nTry Again.\n\n");
				sthn=1;
				view_heading();
				view_function();
		}
		fp=fopen(filename,"r");
		if (sthn==0)
		{
		printf("Date\t\t| Breakfast    | Lunch        | Dinner       | Transport    | Snacks       | Clothes      | Cosmetics    | Medicine     | Accessory    | Stationary   | Others       | Total\n");
		printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		}
		while(fgets(st,1000,fp))
		{
			j++;
			if(j>2)
			{
				strncpy(read_date,st,10);
				for(i=0; i<10; i++)
				{
					if(read_date[i]==date[i])
						found=1;
					else
					{
						found=0;
						break;
					}
				}
				if(found==1)
					printf("%s",st);
			}
		}
		printf("\n\n");
		fclose(fp);
		printf("Continue or Exit (c/e)  :  ");
		scanf(" %c",&aaa);
		if (aaa=='c')
			{
				system("clear");
				home_page();
			}
		else
			{
				system("clear");
				printf("\n\n\t\tThank You For Using Our System !\n\n");
				exit(0);
			}
	}
	else if(choice==2)
	{
		system("clear");
		view_heading();
		printf("\nEnter Month  : ");
		scanf("%d",&month);
		printf("\n\n");
		switch(month)
		{
				case 1:
					strcpy(filename,jan);
					break;
				case 2:
					strcpy(filename,feb);
					break;
				case 3:
					strcpy(filename,mar);
					break;
				case 4:
					strcpy(filename,apr);
					break;
				case 5:
					strcpy(filename,may);
					break;
				case 6:
					strcpy(filename,june);
					break;
				case 7:
					strcpy(filename,july);
					break;
				case 8:
					strcpy(filename,aug);
					break;
				case 9:
					strcpy(filename,sep);
					break;
				case 10:
					strcpy(filename,oct);
					break;
				case 11:
					strcpy(filename,nov);
					break;
				case 12:
					strcpy(filename,dec);
					break;
				default:
					printf("Invalid Month");
					view_function();
		}
		fp=fopen(filename,"r");
		while(fgets(st,1000,fp))
		{
			printf("%s",st);
			for (i=strlen(st); i>(strlen(st)-10) ; i--)
			{
				if (isdigit(st[i]))
				{
					n = (int)(st[i]-'0');
					n = n*x;
					total= total+n;
					x = x*10;
				}
			}
			all = all+total;
			total = 0;
			x = 1;
		}
		printf("\n\nTotal Used Amount : %d", all);
		fclose(fp);
		printf("\n\n");
		printf("Continue or Exit (c/e)  :  ");
		scanf(" %c",&aaa);
		if (aaa=='c')
		{
			system("clear");
			home_page();
		}
		else
		{
			system("clear");
			printf("\n\n\t\tThank You For Using Our System !\n\n");
			exit(0);
		}
	}
	else
	{
		system("clear");
		printf("\nInvalid Choice\nTry againg !\n\n");
		view_heading();
		view_function();
	}
}
//------------------------------------------------------------------------------------------------------------------------------------
void delete_heading()
{
	printf("\t\t* * * * * * * * *\n");
	printf("\t\t* Delete Record *\n");
	printf("\t\t* * * * * * * * *\n\n\n");
}
//------------------------------------------------------------------------------------------------------------------------------------
void delete_function()
{
	int choice, i, j=0, found=0, b;
	char aaa;
	char date[11];
	char new_date[10];
	char read_date[10];
	char filename[25];
	char st[1000];
	char st2[1000];
	FILE *fp; // @suppress("Type cannot be resolved")
	FILE *fp2; // @suppress("Type cannot be resolved")
	int day, day1, day2, month, month1, month2;
	char ans;
	int total=0, n, x=1, all=0;

	printf("Delete Only One Day\t:  1\n");
	printf("Delete by Month\t\t:  2\n\n");
	printf("How would you like to delete\n");
	printf("Enter your choice  :  ");
	scanf("%d",&choice);
	if (choice==1)
		{
			system("clear");
			delete_heading();
			printf("\nEnter Date (yyyy-mm-dd) : ");
			scanf("%s",date);
			printf("\n\n");
			day1=(int)(date[8]-'0');
			day2=(int)(date[9]-'0');
			day=(day1*10)+day2;

			month1=(int)(date[5]-'0');
			month2=(int)(date[6]-'0');
			month=(month1*10)+month2;

			switch(month)
			{
				case 1:
					if(day>31)
					{
						system("clear");
						printf("\nIvalid Date\n\nTry Again.\n\n");
						delete_heading();
						delete_function();
					}
					else
						strcpy(filename,jan);
					break;
				case 2:
					if(day>28)
					{
						system("clear");
						printf("\nIvalid Date\n\nTry Again.\n\n");
						delete_heading();
						delete_function();
					}
					else
						strcpy(filename,feb);
					break;
				case 3:
					if(day>31)
					{
						system("clear");
						printf("\nIvalid Date\n\nTry Again.\n\n");
						delete_heading();
						delete_function();
					}
					else
						strcpy(filename,mar);
					break;
				case 4:
					if(day>30)
					{
						system("clear");
						printf("\nIvalid Date\n\nTry Again.\n\n");
						delete_heading();
						delete_function();
					}
					else
						strcpy(filename,apr);
					break;
				case 5:
					if(day>31)
					{
						system("clear");
						printf("\nIvalid Date\n\nTry Again.\n\n");
						delete_heading();
						delete_function();
					}
					else
						strcpy(filename,may);
					break;
				case 6:
					if(day>30)
					{
						system("clear");
						printf("\nIvalid Date\n\nTry Again.\n\n");
						delete_heading();
						delete_function();
					}
					else
						strcpy(filename,june);
					break;
				case 7:
					if(day>31)
					{
						system("clear");
						printf("\nIvalid Date\n\nTry Again.\n\n");
						delete_heading();
						delete_function();
					}
					else
						strcpy(filename,july);
					break;
				case 8:
					if(day>31)
					{
						system("clear");
						printf("\nIvalid Date\n\nTry Again.\n\n");
						delete_heading();
						delete_function();
					}
					else
						strcpy(filename,aug);
					break;
				case 9:
					if(day>30)
					{
						system("clear");
						printf("\nIvalid Date\n\nTry Again.\n\n");
						delete_heading();
						delete_function();
					}
					else
						strcpy(filename,sep);
					break;
				case 10:
					if(day>31)
					{
						system("clear");
						printf("\nIvalid Date\n\nTry Again.\n\n");
						delete_heading();
						delete_function();
					}
					else
						strcpy(filename,oct);
					break;
				case 11:
					if(day>30)
					{
						system("clear");
						printf("\nIvalid Date\n\nTry Again.\n\n");
						delete_heading();
						delete_function();
					}
					else
						strcpy(filename,nov);
					break;
				case 12:
					if(day>31)
					{
						system("clear");
						printf("\nIvalid Date\n\nTry Again.\n\n");
						delete_heading();
						delete_function();
					}
					else
						strcpy(filename,dec);
					break;
				default:
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					delete_heading();
					delete_function();
			}
			fp=fopen(filename,"r");
			printf("Date\t\t| Breakfast    | Lunch        | Dinner       | Transport    | Snacks       | Clothes      | Cosmetics    | Medicine     | Accessory    | Stationary   | Others       | Total\n");
			printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
			while(fgets(st,1000,fp))
			{
				j++;
				if(j>2)
				{
					strncpy(read_date,st,10);
					for(i=0; i<10; i++)
					{
						if(read_date[i]==date[i])
							found=1;
						else
						{
							found=0;
							break;
						}
					}
					if(found==1)
					{
						printf("%s",st);
						b=j;
					}
				}
			}
			fclose(fp);
			fp2=fopen("Temporary.txt","w");
			fp=fopen(filename,"r");
			printf("\n\nAre you sure (y/n)  :  ");
			scanf(" %c",&ans);
			j=0;
			if(ans=='y')
			{
			    while(fgets(st,1000,fp))
			    {
			        j++;
			        if(j==b)
			            continue;
			        else
			            fprintf(fp2,"%s",st);
			    }
			    fclose(fp);
			    fclose(fp2);
			    remove(filename);
			    rename("Temporary.txt", filename);
			    remove("Temporary.txt");
			    printf("\nSuccessfully Deleted !");
			}
			printf("\n\n");
			printf("Continue or Exit (c/e)  :  ");
			scanf(" %c",&aaa);
			if (aaa=='c')
			{
				system("clear");
				home_page();
			}
			else
			{
				system("clear");
				printf("\n\n\t\tThank You For Using Our System !\n\n");
				exit(0);
			}
			fclose(fp2);
		}
		else if(choice==2)
		{
			system("clear");
			delete_heading();
			printf("\nEnter Month  : ");
			scanf("%d",&month);
			printf("\n\n");
			switch(month)
			{
					case 1:
						strcpy(filename,jan);
						break;
					case 2:
						strcpy(filename,feb);
						break;
					case 3:
						strcpy(filename,mar);
						break;
					case 4:
						strcpy(filename,apr);
						break;
					case 5:
						strcpy(filename,may);
						break;
					case 6:
						strcpy(filename,june);
						break;
					case 7:
						strcpy(filename,july);
						break;
					case 8:
						strcpy(filename,aug);
						break;
					case 9:
						strcpy(filename,sep);
						break;
					case 10:
						strcpy(filename,oct);
						break;
					case 11:
						strcpy(filename,nov);
						break;
					case 12:
						strcpy(filename,dec);
						break;
					default:
						system("clear");
						printf("Invalid Month");
						delete_heading();
						delete_function();
			}
			///////////////////////////

			fp=fopen(filename,"r");
			while(fgets(st,1000,fp))
			{
				printf("%s",st);
				for (i=strlen(st); i>(strlen(st)-10) ; i--)
				{
					if (isdigit(st[i]))
					{
						n = (int)(st[i]-'0');
						n = n*x;
						total= total+n;
						x = x*10;
					}
				}
				all = all+total;
				total = 0;
				x = 1;
			}
			printf("\n\nTotal Used Amount : %d", all);
			fclose(fp);


			////////////////////////////
			fp=fopen(filename,"w");
			printf("\n\nAre you sure (y/n)  :  ");
			scanf(" %c",&ans);
			if(ans=='y')
			{
				fprintf(fp,"Date\t\t| Breakfast    | Lunch        | Dinner       | Transport    | Snacks       | Clothes      | Cosmetics    | Medicine     | Accessory    | Stationary   | Others       | Total\n");
				fprintf(fp,"----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("\nSuccessfully Deleted !");
			}
			fclose(fp);
			printf("\n\n");
			printf("Continue or Exit (c/e)  :  ");
			scanf(" %c",&aaa);
			if (aaa=='c')
			{
				system("clear");
				home_page();
			}
			else
			{
				system("clear");
				printf("\n\n\t\t\tThank You For Using Our System !\n\n");
				exit(0);
			}
		}
		else
		{
			system("clear");
			printf("\nInvalid Choice\nTry againg !\n\n");
			delete_heading();
			delete_function();
		}
}
//------------------------------------------------------------------------------------------------------------------------------------
void edit_heading()
{
	printf("\t\t* * * * * * * * \n");
	printf("\t\t* Eidt Record *\n");
	printf("\t\t* * * * * * * * \n\n\n");
}
//------------------------------------------------------------------------------------------------------------------------------------
void edit_function()
{
	int choice, i, j=0, found=0, b;
	char aaa;
	char date[11];
	char read_date[10];
	char filename[25];
	char st[1000];
	FILE *fp; // @suppress("Type cannot be resolved")
	FILE *fp2; // @suppress("Type cannot be resolved")
	int day, day1, day2, month, month1, month2;
	char ans;

	printf("\nEnter Date (yyyy-mm-dd) : ");
	scanf("%s",date);
	printf("\n\n");

	day1=(int)(date[8]-'0');
	day2=(int)(date[9]-'0');
	day=(day1*10)+day2;

	month1=(int)(date[5]-'0');
	month2=(int)(date[6]-'0');
	month=(month1*10)+month2;

	switch(month)
	{
			case 1:
				if(day>31)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					edit_heading();
					edit_function();
				}
				else
					strcpy(filename,jan);
				break;
			case 2:
				if(day>28)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					edit_heading();
					edit_function();
				}
				else
					strcpy(filename,feb);
				break;
			case 3:
				if(day>31)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					edit_heading();
					edit_function();
				}
				else
					strcpy(filename,mar);
				break;
			case 4:
				if(day>30)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					edit_heading();
					edit_function();
				}
				else
					strcpy(filename,apr);
				break;
			case 5:
				if(day>31)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					edit_heading();
					edit_function();
				}
				else
					strcpy(filename,may);
				break;
			case 6:
				if(day>30)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					edit_heading();
					edit_function();
				}
				else
					strcpy(filename,june);
				break;
			case 7:
				if(day>31)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					edit_heading();
					edit_function();
				}
				else
					strcpy(filename,july);
				break;
			case 8:
				if(day>31)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					edit_heading();
					edit_function();
				}
				else
					strcpy(filename,aug);
				break;
			case 9:
				if(day>30)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					edit_heading();
					edit_function();
				}
				else
					strcpy(filename,sep);
				break;
			case 10:
				if(day>31)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					edit_heading();
					edit_function();
				}
				else
					strcpy(filename,oct);
				break;
			case 11:
				if(day>30)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					edit_heading();
					edit_function();
				}
				else
					strcpy(filename,nov);
				break;
			case 12:
				if(day>31)
				{
					system("clear");
					printf("\nIvalid Date\n\nTry Again.\n\n");
					edit_heading();
					edit_function();
				}
				else
					strcpy(filename,dec);
				break;
			default:
				system("clear");
				printf("\nIvalid Date\n\nTry Again.\n\n");
				edit_heading();
				edit_function();
	}
	fp=fopen(filename,"r");
	printf("Date\t\t| Breakfast    | Lunch        | Dinner       | Transport    | Snacks       | Clothes      | Cosmetics    | Medicine     | Accessory    | Stationary   | Others       | Total\n");
	printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	while(fgets(st,1000,fp))
	{
		j++;
		if(j>2)
		{
			strncpy(read_date,st,10);
			for(i=0; i<10; i++)
			{
				if(read_date[i]==date[i])
					found=1;
				else
				{
					found=0;
					break;
				}
			}
			if(found==1)
			{
				printf("%s",st);
				b=j;
			}
		}
	}
	fclose(fp);
	printf("\n\nAre you sure you want to edit these information (y/n)  :  ");
	scanf(" %c",&ans);
	j=0;
	if(ans=='y')
	{
		fp2=fopen("Temporary.txt","w");
		fprintf(fp2,"Date\t\t| Breakfast    | Lunch        | Dinner       | Transport    | Snacks       | Clothes      | Cosmetics    | Medicine     | Accessory    | Stationary   | Others       | Total\n");
		fprintf(fp2,"----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

		fp=fopen(filename,"r");
		while(fgets(st,1000,fp))
		{
			j++;
			if(j>2)
			{
				if(j==b)
					continue;
				else
				{
					fprintf(fp2,"%s",st);
				}
			}
		}
		fclose(fp);
		remove(filename);
		rename("Temporary.txt", filename);
		remove("Temporary.txt");
		fclose(fp2);
		add_function();
	}
	else if(ans=='n')
	{
		printf("\n\n");
		printf("Continue or Exit (c/e)  :  ");
		scanf(" %c",&aaa);
		if (aaa=='c')
		{
			system("clear");
			home_page();
		}
		else
		{
			system("clear");
			printf("\n\n\t\tThank You For Using Our System !\n\n");
			exit(0);
		}
	}
	else
	{
		system("clear");
		printf("\nInvalid Choice\nTry againg !\n\n");
		edit_heading();
		edit_function();
	}
}
//------------------------------------------------------------------------------------------------------------------------------------

