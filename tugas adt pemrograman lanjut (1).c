#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char string[256];

 typedef struct buah {
	string jenisbuah;
	int berat;
	int harga;
	string rasa;
}buah; //iki lho tambahono//


int main() {
	
	buah apakek;
	
	printf("jenis buah:  \n"); scanf("%s", &apakek.jenisbuah); fflush(stdin);
	printf("berat buah:   \n"); scanf("%d", &apakek.berat);
	printf("harga buah:  \n"); scanf("%d", &apakek.harga);
	printf("rasa buah:   \n"); scanf("%s", &apakek.rasa);
	
	system("cls");
	printf("buah: %s\n", apakek.jenisbuah);
	printf("berat: %f\n", apakek.berat);
	printf("harga: %d\n", apakek.harga);
	printf("rasa: %s\n", apakek.rasa);
 return 0;	
}
