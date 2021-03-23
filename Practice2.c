#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.>

int main(void)
{
    printf("Hello Renny! Nick knows that you are indecisive so here's a way to figure out where we're gonna go eat. \nNick's preference is already taken into account to a pretty moderate extent, and you'll have the opportunity \nto ask him a few things now.\n");
    lineHashBreak();
    printHeart();
    lineHashBreak();
    //printing a heart and the welcome message

    int distanceNum = 0;
    printf("To start, let's pick a range. Do you want to get something close, a little ways away, or \nsomething a little further? (Number 1-3)\n1 - Something close(We could even walk to some of these!)\n2 - Something a little ways a way (Maybe we could doordash for some of these!)\n3 - Something a bit further than that. (These may be too far to doordash, so most likely we're gonna have to drive and eat there or pick it up)\n");
    do{
        scanf("So, what number will it be: %d", &distanceNum);
    }
    while (distanceNum < 1 || distanceNum > 3);
   
    if (distanceNum == 1)
    {
        listClose();
    }
    else
    {
        printf("Testing worked!");
    }
    endMessage();
}

int printHeart(void){
    printf("  ##   ##  \n");
    printf(" #  # #  # \n");
    printf("#    #    #\n");
    printf(" #       #\n");
    printf("  #     #\n");
    printf("   #   #\n");
    printf("    # #\n");
    printf("     #\n");
}

int listClose(void){
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

int endMessage(void){
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

int lineHashBreak(void){
    printf("                                                                                                                          \n");
    printf("##########################################################################################################################\n");
    printf("                                                                                                                          \n");
}