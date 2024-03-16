#include <stdio.h>

int main (void)
{
    int QuestNum,CommandNum,startIndex,stepPoint = 0,befAftNum,Command;

    scanf("%d %d",&QuestNum,&CommandNum);

    char Commands[CommandNum];

    int Quests[QuestNum];

    for (int i = 0 ; i <QuestNum ; i++)
    {
        scanf("%d",&Quests[i]);
    }

    startIndex = (QuestNum + 1)/2-1;

    scanf("%s",Commands);

    for ( int i = 0 ; Commands[i]!= '\0' ; i++){


        Command = Commands[i];

        switch(Command){
    case 'r':
        befAftNum = QuestNum - startIndex -1;
        stepPoint = (befAftNum + 1)/2;
        startIndex += stepPoint;

        break;

    case 'l':
        befAftNum = startIndex;
        stepPoint = (befAftNum + 1)/2;
        startIndex -= stepPoint;
        break;

        }

    }

    printf("%d",Quests[startIndex]);

    return 0;
}
