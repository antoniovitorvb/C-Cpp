#include<stdio.h>
#include<math.h>
#define pi 3.14159265358979323846
double tantan(){
	int x, y;
	double beta;
	
	printf("X = ");
	scanf("%d",&x);
	printf("Y = ");
	scanf("%d",&y);
	printf("\n");
		
	if((x==0)&&(y!=0)){
		beta = pi/2;
	}else{
		beta = atan(y/x);
		if(beta<0){
		beta = pi-beta;
		}
	}
		
	
	printf("beta = %.2f = %.2f", beta, beta*180/pi);
}

int main(){
		
	tantan();
}
