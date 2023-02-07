//Program for the movie booking system 
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<math.h>
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

int main ()
{
    int ch,i,s=0;
    load();
    login();
    while(1)
      {             red();
        printf("* * * * * * * * * * * * * * * * * * * * *\n");
         printf("*\t");printf("\t\t\t\t*\n");
          printf("*\t");printf("\t\t\t\t*\n");
      printf("*\t");printf("\t\t\t\t*\n");  reset();green();
printf("*\t\tMAIN MENU\t\t*\n"); reset();  red();
          printf("*\t");printf("\t\t\t\t*\n");
                printf("*\t");printf("\t\t\t\t*\n");
                      printf("*\t");printf("\t\t\t\t*\n");
    printf("* * * * * * * * * * * * * * * * * * * * *\n");
    reset();
   sleep(20);
     break;}


    
return 0;
}