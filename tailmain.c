#include <stdio.h>
#include <stdlib.h>
#include "tail.h"

int main (int argc,char *argv[])
{
	FILE *pf=NULL;
	char chaine[100];
	int ligne;
	int n;
	option(pf,argv[1],argv[3]);
	ouverture(&pf,argv[3]);
	n=casting(argv[2]);
	ligne=compteLigne(pf,chaine,n);
	ouverture(&pf,argv[3]);
	cmd_tail(pf,ligne,chaine);
	
	return 0;
}
