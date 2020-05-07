#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>

main(){
	double phi;
	int shoulder=120, elbow=85, r, i;
	i=elbow;
	for(i=elbow;i<=shoulder;i++){
		Sleep(500);
		r = i;
		printf("R = %d",r);
		phi = acos((shoulder*shoulder + r*r - elbow*elbow)/(2*r*shoulder));
		phi = phi*180/3.141592;
		printf("\tPhi = %.4f \n");
	}
	r=elbow;
}
