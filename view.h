void view()
{
	
	system("COLOR 1F");
    for(i=97;i<=122;i=i+1)
    {
        fp=fopen("contact.txt","r");
        fflush(stdin);
        found=0;
        while(fread(&information,sizeof(information),1,fp)==1)
        {
            if(information.name[0]==i || information.name[0]==i-32)
            {
                printf("\nName\t\t: %s\nPhone\t\t: %ld\nAddress(City)\t: %s\nEmail\t\t: %s\n",information.name,
                information.ph,information.city,information.email);
                found++;
            }
        }
        if(found!=0)
        {
            printf("=========================================================== [%c]-(%d)\n\n",i-32,found);
            getch();
        }
        fclose(fp);
    }
}
