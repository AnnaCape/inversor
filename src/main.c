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
	char res[tam_buffer];
	int espace[tam_buffer];
	for(int g = 0; g<tam_buffer; g++) {
			espace[g]=0;
	}
    int i, j, b;
    int count =1;
    j =-1;
	b=0;
	///
	fgets(buffer, tam_buffer, stdin);
	//fin de mot
	for(int h =0; buffer[h] != '\0'; h++) {
		if(buffer[h] == ' ' || buffer[h] == '\n'){
			espace[count]=h; 
			count++;
		}
	}
	
	while( b<count){	
		for (i = espace[b+1]; i >=espace[b]; i--)
		{
			if(buffer[i]=='\n'){
				rev[j++]=' ';
				i--;
			}
			rev[j++] = buffer[i];
		}
    rev[j] ='\0';
	b++;
		}	
 //pb espacio #complicado demais
	int r=0;
	int s=0;
 while (rev[r] != '\0')
   {
      if ((rev[r] == ' ' && rev[r+1] == ' ') != 1) {
        res[s] = rev[r];
        s++;
      }
      r++;
   }
   res[s] = '\0';
	printf("%s\n", res);
    return 0;
}
