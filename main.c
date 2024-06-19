#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int option;

    printf("***********Welcome To CPUT Chatbot, Issac***************\n\n");
    printf("Issac: Hi, my name is Issac.\n");//Display
    printf("Issac: You can inquire about EBE programs, registration, and bursary opportunities at CPUT.\n");
    printf("Issac: How can I help you?\n\n");

    do {
        char enquire[100];//declare array of characters to store the query


        printf("You: ");
        fgets(enquire, sizeof(enquire), stdin);//store user input


        int len = strlen(enquire);
        char enquire_uppercase[len];
        for (int i = 0; i < len; i++) {
            enquire_uppercase[i] = toupper(enquire[i]);//convert the query input to uppercases
        }

        char *ptr = strstr(enquire_uppercase, "EBE PROGRAMS");
        char *ptr1 = strstr(enquire_uppercase, "REGISTRATION");
        char *ptr2 = strstr(enquire_uppercase, "BURSARY OPPORTUNITIES");

        if (ptr != NULL) {
            printf("Issac: EBE (Engineering and Built Environment) offers a range of programs including Civil Engineering, Electrical Engineering, and Architecture.\n\n");
        } else if (ptr1 != NULL) {
            printf("Issac: To register for EBE programs, please visit the CPUT website - https://www.cput.ac.za/ and follow the registration process there.\n\n");
        } else if (ptr2 != NULL) {
            printf("Issac: CPUT provides various bursary opportunities for eligible students. You can find more information on available bursaries on the official CPUT website.\n\n");
        } else {
            printf("Issac: I'm sorry, I don't understand your inquiry. Please ask about EBE programs, registration, or bursary opportunities.\n\n");
        }

        // printf("Press any character to continue.......");
       // getchar();
        printf("Issac: If you have another enquiry, press 1. If not, press 0.\n");
        scanf("%d", &option);
        getchar();

        if (option != 0 && option != 1) {
            printf("Issac: You have entered invalid input.\n");
            return 1;
        }

    } while (option == 1);

    return 0;
}

