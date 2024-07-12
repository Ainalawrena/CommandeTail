#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tail.h"

void ouverture(FILE **pf,char *fichier)
{
	*pf=fopen(fichier,"r");
	if (*pf==NULL)
	{
		printf ("impossible d'ouvrir le fichier");
		exit (1);
	}
}

int compteLigne(FILE *pf,char* chaine,int n)
{
	int nbr_ligne=1;
	while(feof(pf)!=1)
	{
		fgets(chaine,100,pf);
		nbr_ligne++;
	}
	nbr_ligne=nbr_ligne-n+1;
	fclose(pf);
	return nbr_ligne;
}
 

int casting(char *arg)
{
	int n;
	n=atoi(arg);
	return n;
}

/*void smd_tail(FILE *pf,int nbr_ligne,char *chaine)
{
	}*/

void cmd_tail(FILE *pf,int nbr_ligne,char *chaine)
{
	int a=1;
	while (feof(pf)!=1)
	{
		fgets(chaine,100,pf);
		a++;
		if (a>=nbr_ligne)
		{
			printf("%s",chaine);
		}
	}
	fclose(pf);
}

void option(FILE *pf,char *option,char *name)
{	
	char opt[2] = "-v";
	if(strcmp(opt,option)== 0)
	{
		printf("==> %s <==\n",name);
	}	
}
	
