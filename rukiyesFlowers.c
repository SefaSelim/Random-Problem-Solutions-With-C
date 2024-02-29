//LINK: https://algoleague.com/contest/bucode-bogazici-algorithm-competition-2024-qualification-round/problem/rukiyes-flowers/detail


#include <stdio.h>

int main (void)
{
    int row,column,flower,point=0;
scanf("%d %d %d",&column,&row,&flower);
int waterX,WaterY;
scanf("%d %d",&waterX,&WaterY);

int x,y;
for (int i=0;i<flower;i++)
{
    scanf("%d %d",&x,&y);

    x=x-waterX;
    y=y-WaterY;
    if (x<0)
    {
        x*=-1;
    }
    if (y<0)
    {
        y*=-1;
    }


    if ((x%2==1&&y<=x)||(y%2==1&&x<=y))
    {
        point++;
    }

}

printf("%d",point);

//flower water
}
