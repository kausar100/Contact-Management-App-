void add()
{
    fp=fopen("contact.txt","a");
    for (;;)
    {
        fflush(stdin);
        printf("\n\t.::To exit press (N/n) and then Enter in the name input\n\nName(Use identical)\t:");
        scanf("%[^\n]",&information.name);
        if(stricmp(information.name,"N")==0 || stricmp(information.name,"n")==0)
        break;
        fflush(stdin);
        printf("Phone\t\t\t:");
        scanf("%ld",&information.ph);
        fflush(stdin);
        printf("Address(City)\t\t:");
        scanf("%[^\n]",&information.city);
        fflush(stdin);
        printf("Email address\t\t:");
        gets(information.email);
        printf("\n");
        fwrite(&information,sizeof(information),1,fp);
        printf("\n\t.::>>Information added successfully<<<\n\n");

    }
        fclose(fp);
}




