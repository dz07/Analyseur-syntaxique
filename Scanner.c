#include<stdio.h>
#include<stdlib.h>


FILE *fileSrc;


#include "functions.c"

int main(){
   const char *fileName = "C:\\Users\\zohair\\Desktop\\TP\\myfile.lag";
   fileSrc = fopen(fileName, "r");

   char buffer[1000];
   char c;

	if(fileSrc == NULL){
		printf("Erreur d'ouverture du fichier source..\n\n");
      exit(0);
	}
   //read line 
   printf("Debut de code\n");
   printf("----read a line----\n");
   while (fgets(buffer,1000, fileSrc)!=NULL)
      printf("%s",buffer);
   printf("\n");
   //close file and reopen it
   fclose(fileSrc);
   fileSrc = fopen(fileName, "r");
   printf("---- Analyseur syntaxique----\n");

	int k;
	token currentToken = getToken();
	do{
		k = (int) currentToken.name;
		printf("%s ", tokens[k]);
		currentToken = getToken(); 
	}while(currentToken.name != EOF_TOKEN);
	//system("pause");
	return 0;
}