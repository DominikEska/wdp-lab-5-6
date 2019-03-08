#include <stdio.h>

void posortujWektor(float tablica[], int n);
void wypiszWektor(float tablica[], int n);

int main(int argc, char** argv) {
	// max 20 liczb
	int ileLiczb;
	printf("Ile liczb chcesz posortowac ?: ");
	scanf("%d",&ileLiczb);
	if(ileLiczb <= 0) { 
		printf("Ilosc liczb do posortowania nie moze byc mniejsze niz 0!\n");
		return 1;
	}
	if(ileLiczb > 20) {
		printf("Maksymalnie mozesz posortowac 20 liczb.\n");
		return 1;
	}	
	float tablicaLiczb[ileLiczb];
	int tmp = 0;
	printf("Podaj te liczby wpisujac liczba + enter lub liczba + spacja\n");
	while(tmp < ileLiczb)	{
		scanf("%f", &tablicaLiczb[tmp]);
		tmp++;
	}
		
	printf("Wektor do posortowania: ");
	wypiszWektor(tablicaLiczb, ileLiczb);	

	posortujWektor(tablicaLiczb, ileLiczb);

	printf("Wektor posortowany: ");
	wypiszWektor(tablicaLiczb, ileLiczb);	
	
	return 0;
}

void posortujWektor(float tablica[], int n) {
	int i,j;
	for(i=0 ; i < n ; i++) {
		for(j=1 ; j < n-i ; j++) {
			if(tablica[j-1] > tablica[j]) {
				float tmp = tablica[j-1];
				tablica[j-1] = tablica[j];
				tablica[j] = tmp;
			}	
		}
	}	
}

void wypiszWektor(float tablica[], int n) {
	int i=0;
	printf("[ ");
	while(i < n){
		printf("%.2f ", tablica[i]);
		i++;
	}
	printf(" ]\n");
}
