#include<stdio.h>
/*void main(){
int n=0;
while(n<2){
    printf("saisie: ");
    scanf("%d",&n);
    if (n>2)
        break;
}
printf("%d",n);
}*/
void main(){
int g=15,t=1,n=-1;
printf("\tWELCOME TO GUESS TEST YOU HAVE ONLY 5 ATTEMPS TO TRY TO GUESS THE POSITIVE NUMBER");
while(t<=5){
    while(n<0||t<=5){
    printf("\nSAISIE: ");
    scanf("%d",&n);
    if (n>2||t==5){
        break;
    }
    else{
        printf("\nYOU LOST AN ATTEMP WITH A STUPID WAY WE SAY A POSITVE NUMBER");
        t++;
    }
    }
    if(t==5){
        printf("\nYOU LOSE TRY ANOTHER TIME");
        break;
    }
    else if(n==g){
        printf("\nWOOOW YOU SHOW ME A GOOD GUESSING SKILL THAT'S MEAN YOU WON BUT I WILL WON NEXT TIME");
        break;
    }
    else if(n<g&&n>g-5){
        printf("\nYOUR REALY CLOSE TRY A NUMBER BIGER");
        t++;
    }
    else if(n>g&&n<g+5){
        printf("\nYOUR REALY CLOSE TRY A NUMBER SMALLER");
        t++;
    }
    else if (n<g-5){
        printf("\nYOU SYILL HAVE %d CHANCE TRY NUMBER MORE BIGGER",5-t);
        t++;
    }
    else{
        printf("\nYOU SYILL HAVE %d CHANCE TRY NUMBER MORE SMALLER",5-t);
        t++;
    }
}


}
