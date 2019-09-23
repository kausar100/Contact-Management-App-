void remov()
{
    repeat:

        fflush(stdin);
        printf(">>>>>>>>>>>>>>DELETE A CONTACT<<<<<<<<<<<<<<<<\n");
        printf("\n\t[1] Delete a contact by Name\n\t[2] Delete a contact by Phone Number\n\t...........................................................................\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
            system("cls");
            printf("\n\n\t\t.::>>>Write the name of the contact you want to delete: ");
            fflush(stdin);
            scanf("%[^\n]",&name);
            fflush(stdin);
            fp=fopen("contact.txt","r");
            ft=fopen("temporary.txt","w");
            fg=fopen("dust.txt","a+");
            while(fread(&information,sizeof(information),1,fp)!=0)
            {
                if(stricmp(name,information.name)!=0)
                    fwrite(&information,sizeof(information),1,ft);
                else
                    fwrite(&information,sizeof(information),1,fg);

            }
            fclose(fp);
            fclose(ft);
            fclose(fg);
            remove("contact.txt");
            printf("\n\t\t.::>>The contact has been successfuly deleted<<");
            rename("temporary.txt","contact.txt");
            break;

        case 2:
             system("cls");
            long int phone;
            printf("\n\n\t\t.::>>>Input the Contact Number you want to delete : ");
            scanf("%ld",&phone);
            fflush(stdin);
            fp=fopen("contact.txt","r");
            ft=fopen("temporary.txt","w");
            fg=fopen("dust.txt","a+");
            while(fread(&information,sizeof(information),1,fp)!=0)
            {
                if(phone!=information.ph)
                    fwrite(&information,sizeof(information),1,ft);
                else
                    fwrite(&information,sizeof(information),1,fg);

            }
            fclose(fp);
            fclose(ft);
            fclose(fg);
            remove("contact.txt");
            printf("\n\t\t.::>>The contact has been successfuly deleted<<");
            rename("temporary.txt","contact.txt");
        }
        printf("\n\n\tDo you want to Delete another Contact Number :");
        printf("\n\n\tPress 1 for continue and 0 for exit :");
        scanf("%d", &ch);
        if(ch==1)
            goto repeat;
}




