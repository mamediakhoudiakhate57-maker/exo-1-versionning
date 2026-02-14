#include <stdio.h>
int main(){
    int i,x,n;
    do{
     printf("saisir n entiers:");
    scanf("%d", &n);
    }while(n<0);
      for(i=0;i<n;i++){
            do{
                 printf("veullez saisr un entier negatif:");
        scanf("%d", &x);
            }while(x>0);
            if(x%2==0){
                somme+=x;
                cpt=++;
            }


      }
      moy=som/cpt;
      printf("la moyenne des nomnre pair est :%f",moy);
      nbr=nbr+x;
      printf("le nombre des est :%d",nbr);



return 0;
}
