# include <stdio.h>
# include <conio.h>
void main(int argc, char* argv[])
{
char c;
int i;
FILE *fp;
printf("\n\n==============================================\n");


/* Creating/opening the file in write mode, whose name is given on command line (automatically
stored in argv[1]). */
fp = fopen(argv[1],"w");
if(fp==NULL)
{
printf("\n\"%s\" file can\'t be created.\n", argv[1]);
exit(0);
}
else
{
printf("\n\"%s\" file successfully created.Your line of text is saved in this file.\n", argv[1]);
}
/* Writing the line of text entered on command line (stored in argv[2]) to the file if no errors. */
if(ferror(fp))
{
printf("\nCan\'t write to the file \"%s\".Some error occurred.\n", argv[1]);
exit(0);
}
for (i=2; i<argc; i++) /* Now Writing. */
{
fprintf(fp, "%s ", argv[i]);
}

/* Closing the file. */
fclose(fp);
/* Re-opening the file in read mode. */
fp = fopen(argv[1],"r");
/* Reading data from the file if not EOF or no errors and displaying it on the screen. */
fprintf(stdout, "\nNow Reading data from the file \"%s\"...\n",
argv[1]);
if(feof(fp) || ferror(fp))
{
printf("\nCan\'t read from the file \"%s\".Either EOF reached or some error occurred.\n", argv[1]);
exit(0);
}
printf("\nYou have written the following text in the file\"%s\":\n", argv[1]);
c = fgetc(fp); /* Now Reading & Displaying. */
while (c != EOF)
{
printf ("%c", c);
c = fgetc(fp);
}
fclose(fp); /* Closing the file. */
printf("\n\n==============================================\n\n");
}

