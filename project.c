#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"main.h"

int main()
{
	
    FILE *decrypt;
    fflush(stdin);
    decrypt=fopen("encrypt.txt","r");
    int count=0;    
    char pas[10];
    fgets(pas,10,decrypt);
    Again:
    system("cls");
    system("COLOR 1F");
    printf("\n\n\n\t\t\t<<ENTER YOUR PASSWORD: ");
    char word[10];
    fflush(stdin);
    scanf("%s",word);
    int j,ty;
    if(strcmp(word,pas)==0)
    	j=1;
    else
    	j=2;
    if(j==1)    
    {
    	system("cls");
	    main:
	    	system("COLOR 2F");
	        printf("\n\n\t **** >>>WELCOME TO A CONTACT MANAGEMENT SYSTEM<<< ****");
	        printf("\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Add a new Contact\n\t\t[2] Search for contact\n\t\t[3] Delete a Contact\n\t\t[4] Edit a Contact\n\t\t[5] List all Contacts\n\t\t[6] Garbage Menu\n\t\t[0] Exit\n\t\t=====================\n\t\t");
	        printf("\n\t\tEnter the choice:");
	        scanf("%d",&ch);
	
	        switch(ch)
	        {
	            case 0:
	                printf("\n\n\t\tAre you sure u want to exit?");
	                break;
	
	            case 1:
	                system("cls");
	                add();
	                break;
	            case 2:
	                system("cls");
	                enquary();
	                break;
	            case 3:
	                system("cls");
	                remov();
	                break;
	            case 4:
	            	system("cls");
	            	edit();
	            	break;
	
	            case 5:
	                system("cls");
	                printf("\n\t\t================================\n\t\t\tLIST OF CONTACTS\n\t\t================================\n\nName\t\tPhone No\t    Address\t\tE-mail ad.\n=================================================================\n\n");
	                view();
	                break;
	
	            case 6:
	                system("cls");
	                printf("\n\n\t\t>>>RECYCLE BIN MENU<<<\n\t\t===========================\n");
	                garbage();
	                break;
	
	            default:
	                printf("\n\t\tInvalid choice");
	                break;
	
	
	        }
	        printf("\n\n\n\t\t..::Enter the Choice:\n\n\t\t[1] Main Menu\t\t[0] Exit\n");
	        scanf("%d",&ch);
	        switch (ch)
	        {
	            case 1:
	                system("cls");
	                goto main;
	
	            case 0:
	                break;
	
	            default:
	                printf("Invalid choice");
	                break;
	        }
	        return 0;
	    }
	    else
	    {
	    	system("COLOR 4F");	
	    	printf("\n\n\t\tInvalid password\n");
	    	printf("\n\n\t\tWould you like to try again: ");
	    	printf("\n\n\t\tPress 1 for continue and any other character for exit\n");
	    	scanf("%d",&ty);
	    	if(ty==1)
	    	{
	    		count++;
	    		if(count==4)
	    		{
	    			printf("\n\t\t\t>>>DENIED TO ACCESS THE SYSTEM<<<\n");
	    			goto end;
	    		}
	    		goto Again;	    	
	    	}
	    	else
	    	return 0;
	    }		    	   	
	    end:	    
	   		return 0;
	   	fclose(decrypt);
}

