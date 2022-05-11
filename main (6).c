#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 char str[80];
 FILE *p;
int main()
{
    void stringtoda();
    void stringinvertida();
    void novalinha();
    void cadaletra();
    void quantidade();

     p=fopen("3_arquivos.txt","wt"); // abre arquivo

    printf("Digite a string que sera copiada: ");
    gets(str);


    stringtoda(); // copia a string
    fputs("\n",p);

    stringinvertida(); // inverte
    fputs("\n",p);

    novalinha(); //separa as palavras
    fputs("\n",p);

    cadaletra();  // separa as letras
    fputs("\n",p);

    quantidade();
    fputs("\n",p);

    fclose(p); // fecha o arquivo
    return 0;
}
void stringtoda(){

    fputs(str,p);
    return 0;
}
void stringinvertida(){

     for(int i=0; i<strlen(str)/2; i++){
            char c = str[i];
            str[i] = str[strlen(str)-1-i];
            str[strlen(str)-1-i] = c;
        }
        fputs(str,p);
        return 0;
}
void novalinha(){

    for(int i=strlen(str); i>strlen(str)/2; i--){ // ""DESINVERTE A STRING""
            char c = str[i];
            str[i] = str[strlen(str)-1-i];
            str[strlen(str)-1-i] = c;
        }

    do{
        for(int i=0; i<strlen(str); i++){

       if(str[i] == ' '){
        fputs("\n", p);
       }else{
       fputc(str[i], p);
       }
    }

    }while(str[strlen(str)]!= '\0');
    return 0;

}
void cadaletra(){

    for (int i=0; i< strlen(str); i++){
        if (str[i]!='\0'){
            fputc(str[i], p);
            fputs("\n", p);
        }

    }
    return 0;
}
void quantidade(){

    int cont = 0;
    int j, i;
    char s2[80];
    char s3[80];
    /*do{
            for(cont = 0; cont<strlen(str); ){
                for(j=0; j<strlen(str); ){
                        if(str[j] == str[cont]){

                    printf("%c = %i", str[j], cont);
                    j++;
                }else{
                j++;
                } }

          cont ++;
            }
    }while(str[cont]!='\0');
    return cont;*/

    }



