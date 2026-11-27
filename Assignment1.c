#include <stdio.h>
#include <string.h>

int main()
{
    char username[50], password[50];

    printf("Enter Gmail username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if(strcmp(username, "student@gmail.com") == 0 &&
       strcmp(password, "12345") == 0)
    {
        printf("Login Successful!");
    }
    else
    {
        printf("Invalid Username or Password");
    }

    return 0;
}
