#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>


int SommeNombre(int n){
	int S = 0;
	for(int i=1; i<n; i++){
		if((n%i)==0){
			S = S + i;
		}

	}
	return S;
}

int estParfait(int n){
	return (n == SommeNombre(n));
}

int main(void){
	printf("Choisissez un nombre:");
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	while(i < n){
		if(estParfait(i)){
			printf("\n %d est un nombre parfait", i);
		}
		i = i + 1;
	}
	return 0;
}

