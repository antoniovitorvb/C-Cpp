#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int ms[5];
	int i,t;
	
	
	srand(time(NULL));
	for (i=0;i<6;i++){
		scanf("%d",rand(ms[i])%60);
		printf ("%d", ms[i]);
		/*for (i=5; i<=0; i--){
			if (ms[i-1]>ms[i]){
				t = ms[i-1];
				ms[i-1] = ms[i];
				ms[i] = t;
			}			
		}
	}
	printf("\n");
	for (t=0;t<6;t++){
		printf("%d   ",ms[t]);
	}*/
	return 0;
}
