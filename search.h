int ch;
void enquary()
{
    printf("\n\n\t..::CONTACT SEARCH\n\t===========================\n\t[1] Search by Name\n\t[2] Search by Address(City)\n");
    printf("\n\tEnter the choice: ");
    scanf("%d",&i);
    switch(i)
    {
    case 1:

        do
        {
            system("cls");
            printf("\n\n\t..::Name of contact to search: ");
            fflush(stdin);
            scanf("%[^\n]",&query);
            l=strlen(query);
            fp=fopen("contact.txt","r");
            system("cls");

            printf("\n\n\t\t..::Search result for '%s' \n\t\t======================================\n",query);
            while(fread(&information ,sizeof(information ),1,fp)==1)
            {
                for(i=0;i<=l;i++)
                name[i]=information .name[i];
                name[l]='\0';
                if(stricmp(name,query)==0)
                {
                    printf("\n\t\t..::Name\t\t: %s\n\t\t..::Phone\t\t: %ld\n\t\t..::Address(City)\t: %s\n\t\t..::Email\t\t: %s\n",information.name,information.ph,information.city,information.email);
                    found++;
                }
            }
            if(found==0)
            printf("\n..::No match found!");
            fclose(fp);
            printf("\n ..::Try again?\n\n\t[1] Yes\t\t[0] No\n\t");
            scanf("%d",&ch);
        }
        while(ch==1);
        break;

    case 2:
       do
        {
            system("cls");
            printf("\n\n\t..::Name of contact Address(City) to search: ");
            fflush(stdin);
            scanf("%[^\n]",&query);
            l=strlen(query);
            fp=fopen("contact.txt","r");
            system("cls");

            printf("\n\n\t\t..::Search result for '%s' \n\t\t======================================\n",query);
            while(fread(&information ,sizeof(information ),1,fp)==1)
            {
                for(i=0;i<=l;i++)
                city[i]=information .city[i];
                city[l]='\0';
                if(stricmp(city,query)==0)
                {
                    printf("\n\t\t..::Name\t\t: %s\n\t\t..::Phone\t\t: %ld\n\t\t..::Address(City)\t: %s\n\t\t..::Email\t\t: %s\n",information.name,information.ph,information.city,information.email);
                    found++;
                }
            }
            if(found==0)
            printf("\n..::No match found!");
            fclose(fp);
            printf("\n ..::Try again?\n\n\t[1] Yes\t\t[0] No\n\t");
            scanf("%d",&ch);
        }
        while(ch==1);
        break;

    default:
        fflush(stdin);
        printf("\n\t\t>>>Invalid Choice<<<\n");
    }
    fclose(fp);
}
