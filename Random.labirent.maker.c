#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#define BOYUT 12
void printMaze(char m[][BOYUT]);
void mazeTraverse(char m[][BOYUT], int row, int col);

void randomL(char maze[][BOYUT],int a)
{
for(int k= 0 ; k<BOYUT ; k++)
{
     for(int p=0 ; p<BOYUT ; p++)
     {
          maze[k][p]='#';
     }
}




maze[a][0]='.';

maze[a][1]='.';



int pointer1=a;
int pointer2=1;

while(pointer2!=11 )
{
    int go =rand()%3+1;

switch(go)
{
    case 1:
        if( maze[pointer1][pointer2+2]=='.' ||  maze[pointer1+1][pointer2+1]=='.' ||  maze[pointer1-1][pointer2+1]=='.')
            break;
        pointer2++;
    maze[pointer1][pointer2]='.';
    break;
    case 2:
        if(pointer1+1==11)
            break;
            else if( maze[pointer1+1][pointer2-1]=='.' ||  maze[pointer1+1][pointer2+1]=='.' ||  maze[pointer1+2][pointer2]=='.')
            break;



            pointer1++;
        maze[pointer1][pointer2]='.';
        break;
    case 3:

        if(pointer1-1==0)
            break;
            else if( maze[pointer1-1][pointer2+1]=='.' ||  maze[pointer1-1][pointer2-1]=='.' ||  maze[pointer1-2][pointer2]=='.')
            break;
            pointer1--;
        maze[pointer1][pointer2]='.';
        break;
}

}



}

void mazeTraverse(char m[][BOYUT], int row, int col){
    m[row][col] = 'X';

    printMaze(m);
    // sleep(1);

    if(col == BOYUT - 1 || row == BOYUT - 1){
        printf("\nLabirent tamamlandi!");
        return;
    }

    if(m[row][col+1] == '.'){ // kusbakisi saga dogru kontrol
        mazeTraverse(m, row, col+1);
        return;
    }

    if(m[row-1][col] == '.'){ // kusbakisi yukari dogru kontrol
        mazeTraverse(m, row-1, col);
        return;
    }

    if(m[row+1][col] == '.'){ // kusbakisi asagi dogru kontrol
        mazeTraverse(m, row+1, col);return;
    }

    if(m[row][col-1] == '.'){ // kusbakisi sola dogru kontrol
        mazeTraverse(m, row, col-1);return;
    }

    if(m[row][col+1] == 'X'){ // kusbakisi saga dogru kontrol
        mazeTraverse(m, row, col+1);return;
    }

    if(m[row-1][col] == 'X'){ // kusbakisi yukari dogru kontrol
        mazeTraverse(m, row-1, col);return;
    }

    if(m[row+1][col] == 'X'){ // kusbakisi asagi dogru kontrol
        mazeTraverse(m, row+1, col);return;
    }

    if(m[row][col-1] == 'X'){ // kusbakisi sola dogru kontrol
        mazeTraverse(m, row, col-1);return;
    }
}

void printMaze(char m[][BOYUT]){

    size_t i;
    size_t j;
    for(i = 0; i < BOYUT; i++){
        for(j = 0; j < BOYUT; j++){
            printf(" %c", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(){
    char maze[BOYUT][BOYUT] = {0};
    srand(time(0));
    randomL(maze,5);

    mazeTraverse(maze, 5, 0);
}
