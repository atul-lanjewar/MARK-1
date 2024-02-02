#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int guess,number,nguesses=1;
srand(time(0));
number=rand()%100+1;

do{
    printf("guess the number between 1 to 100\n");
    scanf("%d",&guess);

    if(guess>number){
        printf("lower the number\n");
    }
    else if(guess<number){
        printf("higher the number\n");
    }
else {          
    printf("you guessed the number in %d attempts\n",nguesses);
}
nguesses++;
}while(guess!=number);



return 0;
}
