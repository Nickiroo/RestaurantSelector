#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void questioningClose(){
    
    int scorePanera = 4;
    int scoreLunag = 3.5;
    int scoreSubway = 3;
    int scoreChipotle = 2.5;
    int scoreBoardb = 2;
    int scoreOtoto = 2;
    int scoreCowboy = 1.5;
    int scoreGorgai = 1;
    int scoreLosprim = .5;
    int scoreFlippin = 0;
    int scoreBlounge = 0;
    int scoreStarb = 0;

    //question 1
    int answer = 0;
    printf("Do you want to get something relatively cheap(1), something nicer(2), or do you not care right now?(3)\nChoice: ");
    scanf("%d", &answer);
    printf("\n");
    if (answer == 1)
    {
       scoreStarb += 2;
       scoreLosprim += 2;
       scoreChipotle +=2;
       scoreSubway += 2;
       scorePanera -= 1;
       scoreOtoto -= 2;
       printf("Good choice, guess you won't be breaking the bank today!\n \n");
    }

    if (answer == 2)
    {
        scoreStarb -= 2;
        scoreLosprim -= 2;
        scoreChipotle -=2;
        scoreSubway -= 2;
        scorePanera += 1;
        scoreOtoto += 2;
        printf("Good choice Renny, we're gonna spend a little more money probably but that's ok! \n \n");
    }

    if (answer == 3)
    {
        printf("Ok, we won't take this into consideration then.\n \n");
    }
    answer = 0;

    printf("Do you want to get hot food(1), cold food(2), or do you not care right now?(3)\nChoice: ");
    scanf("%d", &answer);
    printf("\n");
    if (answer == 1)
    {
      scoreBlounge += 2;
      scoreFlippin += 2;
      scoreGorgai += 2;
      scoreCowboy += 2;
      scoreChipotle += 1;
      scoreLunag += 1;
      scorePanera +=2;
      printf("That's what I thought, hot food it is! \n \n");
    }

    if (answer == 2)
    {
        scoreBlounge -= 2;
        scoreFlippin -= 2;
        scoreGorgai -= 2;
        scoreCowboy -= 2;
        scorePanera -=1;
        printf("Guess we gettin cold food fo today. That's definitely fine with Nick!\n \n");
    }

    if (answer == 3)
    {
        printf("Ok, we won't take this into consideration then.\n \n");
    }
    answer = 0;
    printf("The scores are: Panera: %d, Luna Grill: %d, Subway: %d, Chipotle: %d, Board and Brew: %d, Ototo: %d, Cowboy Chicken: %d, Gor Gai: %d, Los Primos: %d, Flippin Pizza: %d, Burger Lounge: %d, Starbucks: %d\n", scorePanera, scoreLunag, scoreSubway, scoreChipotle, scoreBoardb, scoreOtoto, scoreCowboy, scoreGorgai, scoreLosprim, scoreFlippin, scoreBlounge, scoreStarb);
}