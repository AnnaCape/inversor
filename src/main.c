/* Data de submissao:17/03/2020
 * Nome:Anne-Laure Stéphanie Capé
 * RA:230807
 */
#include <stdio.h>
#include <string.h>
const int tam_buffer=100;
int main()
{
	///initialisacao string
	char buffer[tam_buffer];
	char rev[tam_buffer];
	char res[tam_buffer];
	// inttialisacao para contar os espacios
	int espace[tam_buffer];
	for(int g = 0; g<tam_buffer; g++) {
			espace[g]=0;
	}
    int j=-1;
    int count =1;

	fgets(buffer, tam_buffer, stdin);
	//contar os espacios
	for(int h =0; buffer[h] != '\0'; h++) {
		if(buffer[h] == ' '|| buffer[h] == '\n'){
			espace[count]=h; 
			count++;
		}
	}
	// inversar cada palavra
	for(int b=0; b<count;b++){	
		for (int i = espace[b+1]; i>=espace[b]; i--)
		{
			if(buffer[i]=='\n'){
				rev[j++]=' ';
				i--;
			}
			rev[j++] = buffer[i];
		}
	}	
	rev[j] ='\0';//fim string
	
	//tirar repeticao de espacio
		int s=0;
	for(int r =0; rev[r] != '\0'; r++) {
      if ((rev[r] == ' ' && rev[r+1] == ' ') != 1) {
        res[s] = rev[r];
        s++;
      }
   }
   res[s] = '\0';
	printf("%s\n",res);//sequencia inversa
    return 0;
}
