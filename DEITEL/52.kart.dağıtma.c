#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FACES 13
#define SUITS 4

int kart();
void kar( int [ ][ 13 ] );
void dagit( const int [ ][ 13 ], const char *[ ], const char *[ ] );
int main( )
{
const char *takim[ 4 ] =
{ "Kupa", "Karo", "Sinek", "Maca" };
const char *taraf[ 13 ] =
{ "As", "gki", "uc", "Dort",
"Bes", "Alti", "Yedi", "sekiz",
"dokuz", "On", "Vale", "Kiz", "papaz" };
int deste[ 4 ][ 13 ] = {0};
srand ( time( 0 ) );
kar(deste);

dagit( deste,taraf,takim);
return 0;
}
int kart()
{
     static int d[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52};
    static i = 0 ;

    int kartR;


    kartR=(rand()%(52-i))+i;

    int c= d[kartR];

            int tmp;
            tmp=d[i];
            d[i]=0;
            d[kartR]=tmp;

    i++;
    return c;
}
void kar( int wDeste[ ][ 13 ] )
{

for(int i = 0 ; i<4 ; i++)
    for(int j = 0 ; j<13 ; j++)
    {
        wDeste[i][j]=kart();

    }


}
void dagit( const int wDeste[ ][ 13 ], const char *wTaraf [ ],
const char *wTakim[ ] )
{
int kart, satir, sutun;
for ( kart = 1; kart <= 52; kart++ )
for ( satir = 0; satir <4; satir++ )
for ( sutun = 0; sutun <13; sutun++ )
    if ( wDeste[ satir ][ sutun] == kart )
printf("%s of %s%c",wTakim[satir],wTaraf[sutun],kart % 2 == 0 ? '\n':'\t');

}




































