#include <stdio.h>
#include <string.h>
#include <windows.h>
#define SIZE 20

void helloMSG();
void billMSG();
void spamMSG();
void simMSG();
void promoMSG();
void exitMSG();
void strFIX(char*);

int main()
{
    char chat[SIZE];
    helloMSG();
    while (1)
    {
        billMSG();
        spamMSG();
        simMSG();
        promoMSG();
        exitMSG();
        fgets(chat, SIZE, stdin);
        while (strstr(chat, " ") != NULL) {
            printf("Please do not enter any spaces\n");
            helloMSG();
            billMSG();
            spamMSG();
            simMSG();
            promoMSG();
            exitMSG();
            fgets(chat, SIZE, stdin);
        }
        strFIX(chat);
        if(strcmp(chat,"BILL\n")==0)
        {
            //opens link to BILL information
            system("start https://support.t-mobile.com/docs/DOC-1723");
        }
        else if(strcmp(chat,"SPAM\n")==0)
        {
            //opens link to SPAM information
            system("start https://support.t-mobile.com/docs/DOC-2747");
        }
        else if(strcmp(chat,"SIM\n")==0)
        {
            //opens link to SIM information
            system("start https://support.t-mobile.com/docs/DOC-10162");
        }
        else if(strcmp(chat,"PROMO\n")==0)
        {
            //opens link to PROMO information
            system("start https://www.t-mobile.com/offers/deals-hub");
        }
        else if(strcmp(chat,"EXIT\n")==0)
        {
            printf("Have a nice day.\n");
            break;
        }
        else printf("Unrecognized command\n");
    }
}

void strFIX(char*str)
{
    int i;
    for(i=0;str[i]!=strlen(str);i++)
    {
        if(str[i]=='\n')
        {
            str[i]=='\0';
        }
    }
}

void billMSG()
{
    printf("If you need help with a payment or have questions about setting a payment plan, enter the word BILL\n");
}

void spamMSG()
{
    printf("If you need help with blocking unwanted messages or calls, enter the word SPAM\n");
}

void simMSG()
{
    printf("If you need help with activating your SIM card, enter the word SIM\n");
}

void promoMSG()
{
    printf("If you want to know about special offers or discount, enter the word PROMO\n");
}

void helloMSG()
{
    printf("Hello i am a helper bot here to guide you to links with instructions to help you fix your problems.\nWhat may I help you with?\n");
}

void exitMSG()
{
    printf("If you want to stop this conversation say EXIT\n");
}
