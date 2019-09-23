void edit()
{

    fflush(stdin);
    fp=fopen("contact.txt","r");
    fm=fopen("hold.txt","a+");
    printf("\n\n\t\t.::>>>Write the name of the contact you want to update: ");
    scanf("%[^\n]",&name);
    while(fread(&information,sizeof(information),1,fp)==1)
            {
                if(stricmp(name,information.name)!=0)
                fwrite(&information,sizeof(information),1,fm);
            }
                    printf("\n\tThe Information of the contact you given\n");
                    fflush(stdin);
                    printf("\nName\t\t: %s\nPhone\t\t: %ld\nAddress(City)\t: %s\nEmail\t\t: %s\n",information.name,
                    information.ph,information.city,information.email);
                
                    fflush(stdin);
                   	printf("\n\n..::Editing '%s'\n\n",name);
					printf("..::Name(Use identical):");
					scanf("%[^\n]",&information.name);
					fflush(stdin);
					printf("..::New Phone No:");
					scanf("%ld",&information.ph);
					fflush(stdin);
					printf("..::New Address(City):");
					scanf("%[^\n]",&information.city);
					fflush(stdin);
					printf("..::New Email address:");
					gets(information.email);
					printf("\n");
					fwrite(&information,sizeof(information),1,fm);
					
					fclose(fp);
					fclose(fm);
					remove("contact.txt");
					rename("hold.txt","contact.txt");
					printf("\n\n\t\t<<THE CONTACT HAS BEEN SUCCESSFULLY UPDATED\n");
}

