#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int maior(int vet[5]){
    
    int i,j;
    for (i=0;i<5;i++){
        for(j=4;j>=0;j--){
            if(vet[i]>vet[j]){
                return vet[i];
            }else{
                return vet[j];
            }
        }
    }
}

int main(){
    
    int vet[5];
    int n;
    
    setlocale(LC_ALL,"portuguese");
    
    for(n=0;n<5;n++){
        printf("\n\nDigite o %dº valor: ",n+1);
        scanf("%d",&vet[n]);
        system ("cls");
    }
    
    printf("\n\nO maior valor é: %d\n\n",maior(vet));
    
    system("PAUSE");
    return 0;
}
