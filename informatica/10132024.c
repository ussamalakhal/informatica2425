#include <stdio.h>

int main(){
    int giorno1, mese1, anno1;
    int giorno2, mese2, anno2;
    int bisestile;

 
    printf("Inserisci la prima data (gg mm aaaa): ");
    scanf("%d %d %d", &giorno1, &mese1, &anno1);

     if(anno1%100==0){
           if(anno1%400==0){

                printf("l'anno è bisestile");
                bisestile=1;  
           }

          else{
            if(anno1%4==0){
                printf("l'anno è besistile");
                bisestile=1;
            }
          }
          //controllo mese
          if(mese1>=1 && mese1 <= 12){
            if(mese1==2){
                if(giorno1=1 && giorno1<=28+bisestile){
                    printf("la data è accettabille");
                }
                else{
                        printf("la data non è accettabille");
                    }

            }
            else{
                if(mese1==11 || mese1==4 || mese1==6 || mese1==9){
                    if( giorno1>=1 && giorno1<=30){
                        printf("/N LA DATA è ACCETTABILE");
                    }
                    else{
                            printf("la data non è accettabille");
                    }
                }
                else{
                    if(giorno1>=1 && giorno1<=31){
                        printf("LA DATA è ACCETTABILE");
                    }
                    else{
                            printf("la data non è accettabille");
                    }
                }
            }
          }
                
        }



    printf("Inserisci la seconda data (gg mm aaaa): ");
    scanf("%d %d %d", &giorno2, &mese2, &anno2);

     if(anno2%100==0){
           if(anno2%400==0){

                printf("l'anno è bisestile");
                bisestile=1;  
           }

          else{
            if(anno2%4==0){
                printf("l'anno è besistile");
                bisestile=1;
            }
          }
          //controllo mese
          if(mese2>=1 && mese2 <= 12){
            if(mese2==2){
                if(giorno2>=1 && giorno2<=28+bisestile){
                    printf("la data è accettabille");

            }
            else{
                    printf("la data non è accettabille");
            
                if(mese2==11 || mese2==4 || mese2==6 || mese2==9){
                    if( giorno1>=1 && giorno1<=30){
                        printf("/N LA DATA è ACCETTABILE");
                    }
                    else{
                            printf("la data non è accettabille");
                    }
                }
                else{
                    if(giorno2>=1 && giorno2<=31){
                        printf("LA DATA è ACCETTABILE");
                    }
                    else{
                            printf("la data non è accettabille");
                    }
                }
            }
          
                
            }
        }
     }
 
    if (anno1 > anno2) {
        printf("La data più recente è: %d%d%d \n", giorno1, mese1, anno1);
    } else if (anno1 < anno2) {
        printf("La data più recente è: %d%d%d \n", giorno2, mese2, anno2);
    } else {
        if (mese1 > mese2) {
            printf("La data più recente è: %d%d%d \n", giorno1, mese1, anno1);
        } else if (mese1 < mese2) {
            printf("La data più recente è: %d%d%d \n", giorno2, mese2, anno2);
        } else {
            if (giorno1 > giorno2) {
                printf("La data più recente è: %d%d%d \n", giorno1, mese1, anno1);
            } else if (giorno1 < giorno2) {
                printf("La data più recente è: %d%d%d \n", giorno2, mese2, anno2);
            } else {
                printf("Le due date sono uguali.\n");
            }
        }
    }
}