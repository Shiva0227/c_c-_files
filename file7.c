#include <stdio.h>
void main(int argc, char **argv)
{
    FILE *fp;
    char ch;
    int size = 0;
 
    fp = fopen(argv[1], "r");
    printf("enter the file to open:\n");
     scanf("%d",&*fp);
	    if (fp == NULL)
        printf("\nFile unable to open ");
    else 
        printf("\nFile opened ");
    fseek(fp, 0, 2);    
    size = ftell(fp);   
    printf("The size of given file is : %d\n", size);    
    fclose(fp);
}
