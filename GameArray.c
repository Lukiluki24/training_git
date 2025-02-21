#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){
    int sizeR = 20;
    int sizeC = 20;
    char map[20][20];
    int count;
// start the game
printf("Enter to start the game..."); getchar();
printf("You only have 50 move\n\n");
    srand(time(0));

    // value map
    for (int i=0; i < sizeR; i++){
        for(int j=0; j< sizeC; j++){
            if (i == 0||j==0||i==sizeR-1||j==sizeC-1){
            map[i][j] = '#';
            }else {
            map[i][j] = ' ';
            }
        }
    }


    //scoring 
    int score=0;

    for (int i=0; i < 10; i++){
    int random = rand() % 20;
    int random2 = rand() % 20;
        if (map[random][random2] == ' '){
            map[random][random2] = '@';
        }
    }

    // player
    int Xplay = 10;
    int Yplay = 10;
    map[Xplay][Yplay] = '0';

    while (1){
        // print map
        for (int i=0; i < sizeR; i++){
            for(int j=0; j< sizeC; j++){
            printf("%c ", map[i][j]);
            } puts("");
        }
        printf("Select your move [w/a/s/d] : ");
        char move;
        scanf("%c", &move);
        fflush(stdin);

    // player movement

    switch (move){
        case 'w' : {
            map[Xplay][Yplay] = ' ';
            Xplay--;
            if (map[Xplay][Yplay] == '@'){
                ++score;
            }
            map[Xplay][Yplay] = '0';
            break;
        } 
        
        case 's' :{
            map[Xplay][Yplay] = ' ';
            Xplay++;
            if (map[Xplay][Yplay] == '@'){
                ++score;
            }
            map[Xplay][Yplay] = '0';
        break;
        }

        case 'a' :{
            map[Xplay][Yplay] = ' ';
            Yplay--;
            if (map[Xplay][Yplay] == '@'){
                ++score;
            }
            map[Xplay][Yplay] = '0';
        break;
        }
    
        case 'd' :{
            map[Xplay][Yplay] = ' ';
            Yplay++;
            if (map[Xplay][Yplay] == '@'){
                ++score;
            }
            map[Xplay][Yplay] = '0';
        break;
        }
        
        default : puts("\nYou have to input [w/a/s/d]"); break;
   }
    // count the step & stop program 

        puts("\n"); 
        count++;

        if (count == 50){
    printf("Your score is %d",score);
    break;
    }
}   


    return 0;
    
}