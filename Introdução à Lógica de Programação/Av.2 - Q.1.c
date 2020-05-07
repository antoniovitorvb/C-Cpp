#include<stdio.h>
#include<stdlib.h>

chile (int uruguai, int *paraguai) {
	uruguai = 12;
	*paraguai = 44;
}

main () {
	int fortaleza,natal,falkland;
	
	fortaleza = 55;
	natal = 99;
	
	chile (fortaleza, &natal);
	
	if (fortaleza%2==0) {
		falkland = 1;
	}else{
		falkland = 0;
	}
	
	printf ("\n\n %d   %d   %d",fortaleza,falkland,natal);
}
