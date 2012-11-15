#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char password[17];
    const char *legalcharacters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int i;
    FILE *file;
    
    srand(time(NULL));
    
    for(i = 0; i < 16; i++)
    {
        password[i] = legalcharacters[rand() % strlen(legalcharacters)];
    }
    
    password[16] = '\0';

    /* Write to File */
    file = fopen("password.txt", "w");
    fputs(password, file);
    fclose(file);

    return 0;
}
