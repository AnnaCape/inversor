/* Data de submissao:17/03/2020
 * Nome:Anne-Laure Stéphanie Capé
 * RA:230807
 */

#include <stdio.h>
#include <string.h>

const int tam_buffer=100;
int main()
{
	///initialisation
	char buffer[tam_buffer];
	char rev[tam_buffer];
	char inverse[tam_buffer];
	int espace[tam_buffer];
	for(int g = 0; espace[g] != '\0'; g++) {
			espace[g]=0;
	}
    int t, i, j, b;
    int count =0;
    j = 0;
    t = strlen(buffer);
	int q=1;
	espace[0]=0;
	b=0;
	///
	fgets(buffer, tam_buffer, stdin);
	//fin de mot
	for(int h = 0; buffer[h] != '\0'; h++) {
		if(buffer[h] == ' ' || buffer[h] == '\t' || buffer[h] == '\n'){
			espace[q++]=h; 
			count++;
		}
	}
//Inversion
	while( b<=count){	
		for (i = espace[b+1]; i >= espace[b]; i--)
		{
			rev[j++] = buffer[i];
		}
    rev[j] = '\0';
	b++;
 }
    printf(" Chaîne après inversion = %s", rev);
    return 0;
}
