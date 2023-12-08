#include <stdio.h>
#include <string.h>

int main(void)
{
    char password[6];
    int authorised = 0;

    printf("Enter admin password: \n");
    gets(password);

    if(strcmp(password, "thisisaverylongpasswordthatshouldnotbeguessable") == 0){
        printf("Correct Password!\n");
        authorised = 1;
    }
    else{
        printf("Incorrect Password!\n");
    }

    if(authorised == 1){
        printf("Successfully logged in as Admin :) \n", authorised);
        printf("Value of authorised = %x) \n", authorised);
    
    }else{
	printf("Failed to log in as Admin :( \n", authorised);
        printf("Value of authorised = %x) \n", authorised);
    }

    return 0;
}
