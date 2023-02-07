#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<math.h>

struct book
{
	char code[20];
	char name[20];
	char date[20];
	int cost;
	

}b;

int seat = 60 ;

void insert_details();//for inserting movie details
void viewAll(); // for view all data 
void find(); // for finding data
void book_ticket(); //for booking tickets
void old_record(); //for view old recorrds of users,booked tickets
void reset()// for  switching the text color white from any color  
 {
    printf("\033[0m");
 }

void red()// red color code
{
    printf("\033[1;31m");
    
}
void purple()//purple color code
{
    printf("\033[1;35m");
}
void green()//green color code
{
    printf("\033[1;32m");
   
}
void blue()// blue color code
{
    printf("\033[1;34m");
}
void yellow()// yellow color code
{
    printf("\033[1;33m");
}
int load()// to show the loading of the system
{
    int i;
   green();
    printf("\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
         printf("*\t");printf("\t\t\t\t\t\t*\n");
          printf("*\t");printf("\t\t\t\t\t\t*\n");
      printf("*\t");printf("\t\t\t\t\t\t*\n");
printf("*\t\t\tLOADING\t\t\t\t*\n");
          printf("*\t");printf("\t\t\t\t\t\t*\n");
                printf("*\t");printf("\t\t\t\t\t\t*\n");
                      printf("*\t");printf("\t\t\t\t\t\t*\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
reset();
    blue();
    for(i=0;i<3;i++)
     {
        Beep(1000,500);
        printf("  >->> \t\t\t");
     Beep(4000,500); 
    Sleep(1);
  // to clear the screen

}
reset();
system("cls");   
}
int login()// to make a login password system  
{
    char user[50],pass[50],i,c=5;
    purple();
        printf("* * * * * * * * * * * * * * * * * * * * *\n");
         printf("*\t");printf("\t\t\t\t*\n");
          printf("*\t");printf("\t\t\t\t*\n");
      printf("*\t");printf("\t\t\t\t*\n");  reset(); red();
printf("*\t    LOGIN TO SYSTEM\t\t*\n"); reset();  purple();
          printf("*\t");printf("\t\t\t\t*\n");
                printf("*\t");printf("\t\t\t\t*\n");
                      printf("*\t");printf("\t\t\t\t*\n");
    printf("* * * * * * * * * * * * * * * * * * * * *\n");
    while(1)
    {
        green();
        printf("\nENTER SYSTEM USERNAME:- \n");
        scanf("%s",&user);
        printf("ENTER YOUR PASSWORD :- ");
        scanf("%s",&pass);
        if(!strcmp (pass,"acharya@123"))
        {
            if(!strcmp(user,"acharya"))
            { 
                printf("\n\tACCESS GRANTED [DONE]\n",Beep(4000,1200));
                blue(); 
                for(i=0;i<4;i++)
                {
                    blue(); 
                    printf("\t   ->LOADING MENU->\n");
                        green();
        printf("* * * * * * * * * * * * * * * * * * * * *\n");
         printf("*\t");printf("\t\t\t\t*\n");
          printf("*\t");printf("\t\t\t\t*\n");
      printf("*\t");printf("\t\t\t\t*\n");  reset(); purple();
printf("*\t\tWELCOME\t\t\t*\n"); reset();  green();
          printf("*\t");printf("\t\t\t\t*\n");
                printf("*\t");printf("\t\t\t\t*\n");
                      printf("*\t");printf("\t\t\t\t*\n");
    printf("* * * * * * * * * * * * * * * * * * * * *\n");
                    sleep(1); 
                    system("cls");  }    
                    reset();
                break;
            }
        }
        else
        {
            red();
            Beep(800,1200);
            printf("DATA INVALID\n TRY AGAIN!!\n");reset(); 
            purple();
            printf("\nYou have only:%d chance to login \n",c=c-1);reset();
        }
        if(c==0)   
        {
            red();
            Beep(100,1000);
            printf("!!!!!..SYSTEM FALIOUR..!!!!!\n",Beep(5000,200)); // for exiting from the system
            reset();
            exit(1);
		}
    }
}
void main()
{

	 int ch;
 	do{
	printf("\n====================================================================");
	printf("\n");	
	printf("\t Moive Ticket booking ");
	printf("\n");
	printf("\n====================================================================");
	
	printf("\nPress <1> Insert Movie");
   	printf("\nPress <2> View All Movie");
	printf("\nPress <3> Find Movie ");
	printf("\nPress <4> Book Ticket");
	printf("\nPress <5> View All Transections");
   	printf("\nPress <0> Exit ");

   	printf("\nEnter your Choice ::");
   	scanf("%d",&ch); 	

   	switch (ch)
   	{
    		case 1 :
    		insert_details();
   		break;
		case 2:
    		viewAll();
   		break;
    		
		case 3:
    		find();
   		break;

		case 4:
		book_ticket();
		break;
		
		case 5:
		old_record();
		break;

    		case 0:
    		exit(0);
    		break;

    		default:
    		printf("Wrong choice !");
    		break;
   	}
 }while(ch!=0);

	


}


void insert_details()
{
	
	FILE *fp;
	struct book b;
	printf("Enetr movie code :- ");	
	scanf("%s",b.code);
	printf("Enetr  name :- ");	
	scanf("%s",b.name);
	printf("Enetr Relice Date:- ");	
	scanf("%s",b.date);
	printf("Enetr Ticket Price:- ");	
	scanf("%d",&b.cost);
	
	fp=fopen("data.txt","a");

	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"%s %s %s %d \n",b.code,b.name,b.date,b.cost);
		printf("Record insert Sucessfull");
	}
		printf("\n");
	fclose(fp);
}
void find() //find details
{
	struct book b;
	FILE *fp;
	
	char ch[20];
	printf("Enter movie code :");
	scanf("%s",ch);
	//system("clear");
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{	
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %s %d",b.code,b.name,b.date,&b.cost);
			if(strcmp(b.code,ch) == 0)
			{	
				//printf("%s / %s / %s / %d\n",b.code,b.name,b.date,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\tCode ::%s",b.code);
				printf("\n\t\tmovie name ::%s",b.name);
				printf("\n\t\tmovie date ::%s",b.date);
				printf("\n\t\tprice of ticket ::%d",b.cost);
				break;
			}
		}
		
	}

	fclose(fp);
}
void viewAll()
{
	char ch;
	FILE *fp;

	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{	
		system("clear");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);
		
	}
	fclose(fp);
}
//for ticket booking 
void book_ticket()
{
 struct book b;
	FILE *fp;

	FILE *ufp;

	long double mobile;
  int total_seat,total_amount;
	char name[20];

	
	char ch; //used in display all movies
	char movie_code[20]; //for searching

	// disply all moives by default for movie code
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{	
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);
		
	}
	fclose(fp);
	
	//display ends
	printf("\n For Book ticket Choise Movie(Enter Movie Code First Latter Of Movie)\n");
	printf("\n Enter movie code :");
	scanf("%s",movie_code);
	//system("clear");
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{	
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %s %d",b.code,b.name,b.date,&b.cost);
			if(strcmp(b.code,movie_code) == 0)
			{	
				//printf("%s / %s / %s / %d\n",b.code,b.name,b.date,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\tCode ::%s",b.code);
				printf("\n\t\tMovie name ::%s",b.name);
				printf("\n\t\tdate name ::%s",b.date);
				printf("\n\t\tPrice of ticket::%d",b.cost);
			}
		}
		
	}
	printf("\n* Fill Deatails  *");
	printf("\n your name :");
	scanf("%s",name);
	printf("\n mobile number :");
	scanf("%d",&mobile);
	printf("\n Total number of tickets :");
	scanf("%d",&total_seat);
	
	
	total_amount = b.cost * total_seat;
	
	printf("\n ***** ENJOY MOVIE ****\n");
	printf("\n\t\tname : %s",name);
	printf("\n\t\tmobile Number : %d",mobile);
	printf("\n\t\tmovie name : %s",b.name);
	printf("\n\t\tTotal seats : %d",total_seat);
	printf("\n\t\tcost per ticket : %d",b.cost);
	printf("\n\t\tTotal Amount : %d",total_amount);
	
	
	ufp=fopen("oldTransection.txt","a");
	if(ufp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(ufp,"%s %d %d %d %s %d \n",name,mobile,total_seat,total_amount,b.name,b.cost);
		printf("\n Record insert Sucessfull to the old record file");
	}
		printf("\n");
	fclose(ufp);
	fclose(fp);

}
//for view all user transections
void old_record()
{
	char ch;
	FILE *fp;

	//system("clear");
	
	fp = fopen("oldTransection.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{	
		system("clear");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);
		
	}
	fclose(fp);


}

