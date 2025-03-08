#include <stdio.h>
//#include <stdlib.h>
int main()
{
    char items[8];
    FILE *file = fopen("example.txt","w");
    if (file==NULL)
    {
       printf("Error opening file for writing\n");
       return 1;
    }
   // fseek(file,0,SEEK_SET); //Move to the beginning of the file
    fprintf(file,"===Hello world appended ===\n");
    fclose(file);
    printf("Data written to file successfully!\n");
    return 0;
}


