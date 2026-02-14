#include <stdio.h>
int main(){
    int i,x,n,cpt=0,somme=0,nbr;
    float moy;
    do{
     printf("saisir n entiers:");
    scanf("%d", &n);
    }while(n<0);
      for(i=1;i<n;i++){
            do{
                 printf("veullez saisr un entier negatif:");
        scanf("%d", &x);
            }while(x>0);
            if(x%2==0){
                somme+=x;
                cpt ++ ;
            }

      }
      moy=somme/cpt;
      printf("la moyenne pair est :%f",moy);
      nbr=nbr+x;
      printf("le nombre des,pair est :%d",nbr)
      for(i=1;i<=n;i++){
            do{
                 printf("veullez saisr un entier negatif:");
        scanf("%d", &x);
            }while(x>0);
        if(i % 2 != 0) {
            somme+=x;
        }
      }
 printf("La moyenne impair est : %f", moy);
   nbr=nbr+x;
      printf("le nombre des impair est:%d",nbr)
return 0;
}
