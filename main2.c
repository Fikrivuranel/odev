#include <stdio.h>


struct dugum
{
	int veri;
	struct dugum * gosterici;
};


void main() {
   
	struct dugum * bir = (struct dugum * ) malloc (sizeof ( struct dugum )) ;
	struct dugum * iki = (struct dugum * ) malloc (sizeof (struct dugum));
	struct dugum *	uc = (struct dugum * ) malloc (sizeof (struct dugum));
	struct dugum * dort = (struct dugum * ) malloc (sizeof (struct dugum));

	bir-> veri =21;
	bir->gosterici = iki;
	
	iki->veri=56;
	iki->gosterici=uc;

	uc->veri=35;
	uc->gosterici=dort;
	
	dort->veri=34;
	dort->gosterici=NULL;
	
	printf("%d - %d - %d - %d ", bir->veri,iki->veri,uc->veri,dort->veri);

}
