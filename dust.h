void garbage()
{
	system("COLOR 4F");
    fg=fopen("dust.txt","r");
    fflush(stdin);
    while(fread(&information,sizeof(information),1,fg)==1)
    {
        printf("\nName\t\t: %s\nPhone\t\t: %ld\nAddress(City)\t: %s\nEmail\t\t: %s\n",information.name,
                information.ph,information.city,information.email);
        getch();
    }
    fclose(fg);
}
