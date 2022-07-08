#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include<ctype.h>
#include<dos.h>
#include<time.h>

void islogin(){
    printf("\t\t\t###################################################################\n");
    printf("\t\t\t**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-*");
    printf("\n\t\t\t==========                                              ==========");
    printf("\n\t\t\t<><><><><>   Online Library Management System Project   <><><><><>");
    printf("\n\t\t\t==========                                              ==========");
    printf("\n\t\t\t**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-*");
    printf("\n\t\t\t------------------------------------------------------------------");
    printf("\n\t\t\t-------------------------------------------------------------------\n\n");
    system("pause");
    printf("\n\t\t\t\t\t-------------------------\n\t\t\t\t\t\t Login \n\t\t\t\t\t-------------------------");
    char name='a';
    char names;
    int id1=515;
    int id2;
    printf("\nEnter password :");        // -->181472515
    scanf("%d",&id2);
    while(id1!=id2){
    printf("Wrong password.Please again ::");
    scanf("%d",&id2);
                   }
    printf("\nEnter user_name :");     //-->user name==a
    scanf("%s",&names);
    if(name==names){
    printf("Congratulations");
                   }
    else{
    printf("Wrong user_name.Please again ::");
    scanf("%s",&names);
 }
    system("cls");                                //
    printf("\n\n\n\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                 LIBRARY                   =");
    printf("\n\t\t\t        =               MANAGEMENT                  =");
    printf("\n\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");

}
struct student                           //class student structure (record)
{
	int bookid;
	char title[30];
	char authobook[30];
	int costofbook;
}s[5];
int arr;
void add_book()
    {
	if(arr < 5)
	{
		printf("\n---------------------------\nEnter  the Details of Books\n---------------------------\n");
		printf("Enter a book id=");
        scanf("%d",&s[arr].bookid);
		printf("Enter book title=");
		scanf("%s",&s[arr].title);
		printf("Enter authority name=");
		scanf("%s",&s[arr].authobook);
		printf("Enter the cost of book=");
		scanf("%d",&s[arr].costofbook);
		arr++;
	    }
	else
	    {
        printf("No more space in system for another\n");

	    }

        }
       void display_books()
       {
    int i;
    for(i=0;i<arr;i++)
	{
        printf("\n------------------\nAll Recorded Books Are\n------------------\n");
		printf("Book id=%d\n",s[i].bookid);
		printf("Book Title is=%s\n",s[i].title);
		printf("Authority Name=%s\n",s[i].authobook);
		printf("Cost of Book=%d\n",s[i].costofbook);

	}


    }
   void Book_Author()
{
	char search_book[30];
	printf("\n\nEnter the name of Authority=");
	scanf("%s",&search_book);
	int i=0;
	while(i<arr)
	{
		if(strcmp(search_book,s[i].authobook)==0)
		{
			printf("\n");
			printf("---------------\n");
		    printf("Book id=%d\n",s[i].bookid);
		    printf("Book Title is=%s\n",s[i].title);
		    printf("Authority Name=%s\n",s[i].authobook);
		    printf("Cost of book=%d\n",s[i].costofbook);
		    printf("---------------\n");
			i++;
		}
	}

}

      void menu(){
              int x;
              printf("\n\t\t----------------\n\t\tOLDER BOOK MENU\n\t\t----------------\n\t\t1.Education.\n\t\t2.Fiction.\n\t\t3.Comic.\n\t\t4.History\n\t\t5.Exit\n\t\tEnter choice :");
              scanf("%d",&x);
              if(x==1){
              printf("\n-----------\n1.Science\n2.Commerce\n3.Arts\n-----------\nSelect any category :");
              int y;
              scanf("%d",&y);
              if(y==1){
              printf("------------------------\n\n\nBookshelf Level-> A1\nName of the Books are:\n1.Physics.\n2.Chemistry.\n3.Math.\n4.Biology.\n=========================\n");
              printf("---------------------------\nBookshelf Level-> A2\nName of the Books are:\n1.Physics 1st & 2nd paper.\n2.Chemistry 1st & 2nd paper.\n 3.Math 1st & 2nd.\n4.Biology 1st & 2nd.\n===========================\n");
              }
              if(y==2){
              printf("---------------------------------------Bookshelf Level-> B1\nName of the Books are:\n1.Accounting .\n2.Business organization and Management.\n3.Production Management and Marketing.\n========================================");
              printf("------------------------------------------------------");
        printf("\nBookshelf Level-> B2\n");
        printf("Name of the Books are:");
        printf("1.Accounting 1st & 2nd paper.\n");
        printf("2.Business organization and Management 1st & 2nd paper.\n");
        printf("3.Production Management and Marketing 1st & 2nd paper.\n");
        printf("=======================================================");
                   }
                    if(y==3){
                     printf("-----------------------\nBookshelf Level-> C1\nName of the Books are:\n1.Economics .\n2.Sociology.\n3.Social Work.\n4.Islamic History .\n=======================");
                     printf("-----------------------\nBookshelf Level-> C2\nName of the Books are:\n1.Economics 1st & 2nd paper.\n2.Sociology1st & 2nd paper.\n3.Social Work 1st & 2nd paper.\n4.Islamic History 1st & 2nd paper.\n=================================");
                   }
                   }

          if(x==2){
           printf("------------------\nBookshelf Level-> D1\n1.Anna Karenina.\n2.One Hundred Years of Solitude.\n3.Bishad Sindhu.\n4.Aguner Poros Moni.\n==================");

          }
          if(x==3){
            printf("------------------\n1Bookshelf Level-> D2\n.Pishach Kahini.\n2.Nilkomol Ar Lalkomol.\n3.Ibrahim\n4.Durjoy 12.\n==================");
          }
          if(x==4){
            printf("---------------------\n1Bookshelf Level-> D3\n.A Legacy of Blood.\n2.Ekattorer Dinguli.\n3.History of Bangladesh\n4.Empire of the Moghul\nBooks Bangla Onubad 12.\n=====================");
          }
          }
int main()
{
    islogin();
	int choice;
	int  input;
	do
	{
printf("\n\t---------\n\tMAIN MENU\n\t---------\n\nPress 1 to Enter a Book Record:\npress 2 to Display all Records of books:\nPress 3 to Search Book by Authority Name:\nPress 4 to Count Total Books in Library:\n");
printf("Press 5 to Show Older books in Library.\nPress 6 to Exit .\nEnter choice :");

		   scanf("%d",&choice);

		   switch(choice){
			case 1:
				add_book();
				break;
			case 2:
			    display_books();
				break;
		    case 3:
			    Book_Author();
				break;
			case 4:
			   printf("\n\nTotal Number of books in library are :%d\n",arr);
				break;
            case 5:
                menu();
                break;
			case 6:
			    exit(0);
			default:
				printf("invalid choice please try again");
		}
		printf("\n\nAre you want to continue,please press 5 or 6 : ");
		scanf("%d",&input);

	}while(input==5|| input==6);
}

