#include <stdio.h>
#include <stdlib.h>

int main()
{
int Rock=1;
    int Paper=2;
    int Scissor=3;
    int i;
    int yourscore =0;
    int sysscore =0;
    int choice;

    printf("To choose rock press 1\n");
    printf("To choose paper press 2\n");
    printf("To choose scissor press 3\n");

    for(i=0;i<5;i++){
        printf("Enter your choice:");
        scanf("%d",&choice);
            int system=rand()%3+1;
            if(choice==1){
                if (system==1)


                {

printf("you choose rock\n");
printf("system choose rock");
                    printf("Draw!!\n");
                }
                if(system==2){
                        printf("you choose rock\n");
                printf("system choose paper\n");
                    printf("system Wins!! Hard luck:(\n");
                    sysscore= sysscore + 1;
                }
                if(system==3){
                        printf("you choose rock\n");
                printf("system choose scissor\n");
                    printf("victory:)\n");
                    yourscore = yourscore + 1;
                }
            }
              else  if(choice==2){
                    if(system==2){
                            printf("you choose paper\n");
                    printf("system choose paper\n");
                        printf("Draw!!\n");
                    }
                    if(system==3){
                            printf("you choose paper\n");
                    printf("system choose scissor\n");
                        printf("system wins!! Hard luck\n");
                        sysscore = sysscore + 1;
                    }
                    if(system==1){
                            printf("you choose paper\n");
                    printf("system choose rock\n");
                        printf("system Wins! Hard luck:(\n");
                        sysscore= sysscore + 1;
                    }
                }
                else if(choice==3){
                    if(system==3){
                            printf("you choose scissor\n");
                    printf("system choose scissor\n");
                        printf("Draw!!\n");
                    }
                    if(system==2){
                            printf("you choose scissor\n");
                    printf("system choose paper\n");

                        printf("victory:)\n");
                        yourscore= yourscore + 1;

                    }
                    if(system==1){
                            printf("you choose scissor\n");
                    printf("system choose rock\n");
                        printf("system wins !! Hard luck:(\n");
                        sysscore = sysscore + 1;

                    }
                }
        else{
            printf("enter numbers 1 or 2 or 3\n");
        }

            }
            if(sysscore > yourscore ){
                printf("Computer wins by %d",sysscore);
            }



                else if(sysscore< yourscore)
                {
                    printf("Hurry you won by %d",yourscore);
                }
                else{
                printf("Game is draw!\n");
            }




    return 0;
}
