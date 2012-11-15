#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    srand(time(NULL));
    char password[17];
    char legalcharacters[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','R','S','T','U','V','W','X','Y','Z',
                                'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','v','w','x','y','z',
                                '0','1','2','3','4','5','6','7','8','9', '\0'};
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
