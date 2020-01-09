#include <stdio.h>
#include <stdlib.h>
typedef struct node{ //typdef struct n
	int x ; //veriyi tutmak için
	node * next;  //her kutuda sonrakini gösteren ok iþareti
};

//typedef n * node; //node dediðimizde düðüm



int main(){
	node * root; // root yaptýk
	root = (node *)malloc(sizeof(node)); //rootun gösterdiði ilk kutu
								//nodun hafýza ayýrdýðý kadar olsun
								//ben bu alaný bir node olarak kullanacaðým
								//bunu þu an root göstersin
	root -> x = 10; // rootun gösterdiði ilk data kutucuðu 10 oldu
	
	
	root -> next = (node *)malloc (sizeof(node)); //hafýzada yeni kutu oluþtur
													//onu rootun nextindeki olsun
	
	root -> next -> x = 20 ; //rootun gösterdiði(ilk kutu) kutunun
							//nextinin gösterdiði (diðer ikilinin ilki)
							// -> gösterdiði demek
							// Bunlara LINKED LIST  diyoruz
							
	root -> next -> next = (node *)malloc (sizeof (node));
	root -> next -> next -> x = 30;	
							// çok fazla next yazýlamaz
							//bunun için trik yapýyoruz
							//root gibi pointer yapýyoruz adý iter
							// kendi kendine takýlan demek
							//point ettiði node larý bana yazdýrsýn
							//istediði kutulara atlayabilir
	node * iter;	//iterator oluþturduk					
	iter = root; //rootun gösterdiði yeri iter de göstersin
				 //bir sonraki kutuyu göstermesi için
	printf("%d",iter -> x);
	
	iter= iter -> next;
	printf("%d", iter -> x);											
								
	
}
