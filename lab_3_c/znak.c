#include <stdio.h>
#include <string.h>
 
void usun_znak(char napis[], char znak){
	int i,k=0; 
    for(i=0;napis[i];i++){
     	napis[i]=napis[i+k];
     	if(napis[i]==znak){
		  k++;
		  i--;
	    }
    }    	 
}
 
 
int main()
{
    char s[1000],c;
    printf("Enter  the string : ");
    gets(s);
    printf("Enter character: ");
    c=getchar();
    usun_znak(s,c);
    printf("%s",s);
    return 0;
}
