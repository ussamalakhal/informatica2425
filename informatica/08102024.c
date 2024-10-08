/* data una data in formato g mm aaaa
verificare sè accetabile*/


    #include <stdio.h>
    int main(){

        int giorno=0;
        int mese=0;
        int anno=0;
        int bisestile=0;

        // richiesta degli input
        printf("inserisci il giorno: ");
        scanf("%d", &giorno);

        printf("inserisci il mese: ");
        scanf("%d", &mese);

        printf("inserisci anno: ");
        scanf("%d", &anno);

        if(anno%100==0){
           if(anno%400==0){

                printf("l'anno è bisestile");
                bisestile=1;  
           }

          else{
            if(anno%4==0){
                printf("l'anno è besistile");
                bisestile=1;
            }
          }
          //controllo mese
          if(mese>=1 && mese <= 12){
            if(mese==2){
                if(giorno>=1 && giorno<=28+bisestile);
                    printf("la data è accettabille");

            }
            else{
                if(mese==11 || mese==4 || mese==6 || mese==9){
                    if( giorno>=1 && giorno<=30){
                        printf("/N LA DATA è ACCETTABILE");
                    }
                }
                else{
                    if(giorno>=1 && giorno<=31){
                        printf("LA DATA è ACCETTABILE");
                    }
                }
            }
          }
                
        }
            

            

    }    