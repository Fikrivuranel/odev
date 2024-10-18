#include <stdio.h>


struct dugum
{
	int veri;
	struct dugum * gosterici;
};


int main() {
   
	struct dugum * bir;
	bir->veri=11;
	bir->gosterici = iki;
	bir = (struct dugum * ) malloc (sizeof(struct dugum));
	
	struct dugum * iki;
	iki->veri=22;
	iki->gosterici=uc;
	iki = (struct dugum * ) malloc (sizeof(struct dugum));
	
	struct dugum * uc;
	uc->veri=33;
	uc->gosterici=dort;
	uc = (struct dugum * ) malloc (sizeof(struct dugum));
	
	struct dugum * dort;
	dort->veri=44;
	dort->gosterici=NULL;
	dort = (struct dugum * ) malloc (sizeof(struct dugum));
	printf("%d ", bir->veri);


	return 0;
}
