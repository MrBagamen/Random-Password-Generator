#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 16

int main()
{
    char password[PASSWORD_LENGTH];
    const char legalcharacters[] = {
    'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
    'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
    '0','1','2','3','4','5','6','7','8','9'
    };
    int i;
    FILE *file;
    
    srand(time(NULL));
    
    for (i = 0; i < PASSWORD_LENGTH; ++i)
    {
        password[i] = legalcharacters[rand() % sizeof(legalcharacters)];
    }

    /* Write to File */
    file = fopen("password.txt", "w");
    fwrite(password, 1, PASSWORD_LENGTH, file);
    fclose(file);

    return 0;
}
