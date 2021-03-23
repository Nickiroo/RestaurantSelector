//todo: so basically what im gonna do next is add the questions. what im gonna do is make variables for each restaurant and they're basically gonna get scores. If her answer would support going to one place, it's score goes up, while saying something that wouldn't support going to that place would decrease it's score. at the end we're gonna have a list of them basically and then display them in order from highest rated to lowest rated based off of her answers.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void listCLose();
void printHeart();
void endMessage();
void lineHashBreak();

int main(void)
{
    printf("Hello Renny! Nick knows that you are indecisive so here's a way to figure out where we're gonna go eat. \nNick's preference is already taken into account to a pretty moderate extent, and you'll have the opportunity \nto ask him a few things now.\n");
    lineHashBreak();
    printHeart();
    lineHashBreak();
    //printing a heart and the welcome message

    int n;
    printf("To start, let's pick a range. Do you want to get something close, a little ways away, or \nsomething a little further? (Number 1-3)\n1 - Something close(We could even walk to some of these!)\n2 - Something a little ways a way (Maybe we could doordash for some of these!)\n3 - Something a bit further than that. (These may be too far to doordash, so most likely we're gonna have to drive and eat there or pick it up)\n");
    do
    {
        printf("Type your number here:");
        scanf("%d", &n);
        
    }
    while (n < 1 || n > 3);
   
    if (n == 1)
    {
        lineHashBreak();
        printf("You have chosen to eat close. The options for that, based off of your own choices are as follows: \n \n");
        listClose();
        lineHashBreak();
        printf("Are you sure you would like to continue this process knowing that these are the choices for that distance? \n1 for yes 0 for no:");
        int rightChoice;
        scanf("%d", &rightChoice);
        lineHashBreak();
        if (rightChoice == 1)
        {
            printf("Alright, now that we have your choice for range correctly determined, we can proceed to \nget a better feeling of what you're in the mood for. We're going to ask questions that assess your preference \nfor things like price, sweet/savory, hot/cold, how easy to get, how possibly upsetting for the stomach, etc.\n");
        }
        
    }
    else{
        printf("well that's not either not ready yet or you typed in the wrong number.\n");
    }
    
    printf("your number was %d \n", n);
    printf("\n");
    endMessage();
}

void printHeart(){
    printf("  ##   ##  \n");
    printf(" #  # #  # \n");
    printf("#    #    #\n");
    printf(" #       #\n");
    printf("  #     #\n");
    printf("   #   #\n");
    printf("    # #\n");
    printf("     #\n");
}

void listClose(){
    char restListClose[12][15] = {
                "panera",
                "luna grill",
                "subway",
                "chipotle",
                "board and brew",
                "ototo",
                "cowboy chicken",
                "gor gai",
                "los primos",
                "flippin pizza",
                "burger lounge",
                "starbucks"
            };
        int loopNumber = 0;
        do  
        {
            printf("%s \n", restListClose[loopNumber]);
            loopNumber++;
        }
        while (loopNumber <= 11);
}

void endMessage(){
    printf("###############################################################################\n");
    printf("#                                                                             #\n");
    printf("#   ##################      ##                  #     #################       #\n");
    printf("#   #                       ###                 #     #               ####    #\n");
    printf("#   #                       #  #                #     #               ####    #\n");
    printf("#   #                       #   #               #     #               ####    #\n");
    printf("#   #                       #    #              #     #               ####    #\n");
    printf("#   #                       #     #             #     #               ####    #\n");
    printf("#   #                       #      #            #     #               ####    #\n");
    printf("#   #                       #       #           #     #               ####    #\n");
    printf("#   ##################      #        #          #     #               ####    #\n");
    printf("#   #                       #         ##        #     #               ####    #\n");
    printf("#   #                       #           #       #     #               ####    #\n");
    printf("#   #                       #            #      #     #               ####    #\n");
    printf("#   #                       #             #     #     #               ####    #\n");
    printf("#   #                       #              #    #     #               ####    #\n");
    printf("#   #                       #               #   #     #               ####    #\n");
    printf("#   #                       #                #  #     #               ####    #\n");
    printf("#   ##################      #                 ###     #################       #\n");
    printf("###############################################################################\n");
    //Just a graphical way of saying "Hey renny, it's over now."

    printf("Press ENTER key to exit this program Ms. Lady. But DON'T lie to Nick about the results. No matter what you\nchose, he'll be happy with it. And again, his preferences have already been taken into consideration and\nis in the root of all this math.\n");  
    
    getchar();  
}

void lineHashBreak(){
    printf("                                                                                                                          \n");
    printf("##########################################################################################################################\n");
    printf("                                                                                                                          \n");
}