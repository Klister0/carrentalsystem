#include <stdio.h>
#include <stdlib.h>

int main() {
	char secim;
	int bakiye;
	int kalan = bakiye;
	int fiyatlar[3] = {1000,800,600};
	char cars[3][10] = {"BMW","Honda","Toyota"};
	char name[20];
	printf("Isim giriniz: ");
	scanf("%s",name);
	printf("Hosgeldin %s!\n",name);
	printf("Bakiye giriniz: ");
	scanf("%d",&bakiye);
	

	if (bakiye >= 0)
	{
		printf("Bakiyeniz: %d TL\n",bakiye);
		for (int i = 0; i < 3; i++)
		{
		printf("Stoktaki %d. araba: ",i + 1);
		printf("%s\n",cars[i]);
		printf("Fiyat: %d\n",fiyatlar[i]);
		}
	}else{
		printf("Bakiye negatif olamaz!");
		exit(0);
	}
	printf("Almak istediginiz arabayi seciniz. B-H-T-C(Cikis)");
	fflush(stdin);
	scanf("%c",&secim);
	
	
	switch (secim)
		{
	case 'B':
		if(bakiye >= 1000){
			kalan = bakiye - 1000;
			printf("BMW hayirli olsun!\n");
			printf("Kalan bakiye %d TL",kalan);
			break;
		}else{
			printf("Yetersiz bakiye! ");
		}
		break;
	case 'b':
		if(bakiye >= 1000){
			kalan = bakiye - 1000;
			printf("BMW hayirli olsun!\n");
			printf("Kalan bakiye %d TL",kalan);
		}else{
			printf("Yetersiz bakiye! ");
		}
		break;
	case 'H':
		if(bakiye >= 800){
			kalan = bakiye - 800;
			printf("Honda hayirli olsun!\n");
			printf("Kalan bakiye %d TL",kalan);
		}else{
			printf("Yetersiz bakiye! ");
		}
		break;
	case 'h':
		if(bakiye >= 800){
			kalan = bakiye - 800;
			printf("Honda hayirli olsun!\n");
			printf("Kalan bakiye %d TL",kalan);
		}else{
			printf("Yetersiz bakiye! ");
		}
		break;
	case 'T':
		if(bakiye >= 600){
			kalan = bakiye - 600;
			printf("Toyota hayirli olsun!\n");
			printf("Kalan bakiye %d TL",kalan);
		}else{
			printf("Yetersiz bakiye! ");
		}
		break;
	case 't':
		if(bakiye >= 600){
			kalan = bakiye - 600;
			printf("Toyota hayirli olsun!\n");
			printf("Kalan bakiye %d TL",kalan);
		}else{
			printf("Yetersiz bakiye! ");
		}
		break;
	case 'C':
		printf("Gule gule!");
		exit(0);
	case 'c':
		printf("Gule gule!");
		exit(0);
	default:
		printf("Yanlis komut!");
		break;
	}
	
	
	
	
	
	 
	

	
	
		
	
	return 0;
	
	
	
	
	
	
	
	
	
	


	

}
