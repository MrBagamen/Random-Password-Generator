#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    srand(time(NULL));
    char password[17];
    const char *legalcharacters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int i, num;
    for(i = 0; i < 16; i++)
    {
        num = rand() % strlen(legalcharacters);
        password[i] = legalcharacters[num];
    }
    password[16] = '\0';

    //Write to File
    FILE *file = fopen("password.txt", "w");
    fprintf(file, "Password is: %s\n", password);
    fclose(file);

    return 0;
}
