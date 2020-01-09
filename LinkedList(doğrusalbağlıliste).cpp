#include <stdio.h>
#include <stdlib.h>
typedef struct node{ //typdef struct n
	int x ; //veriyi tutmak i�in
	node * next;  //her kutuda sonrakini g�steren ok i�areti
};

//typedef n * node; //node dedi�imizde d���m



int main(){
	node * root; // root yapt�k
	root = (node *)malloc(sizeof(node)); //rootun g�sterdi�i ilk kutu
								//nodun haf�za ay�rd��� kadar olsun
								//ben bu alan� bir node olarak kullanaca��m
								//bunu �u an root g�stersin
	root -> x = 10; // rootun g�sterdi�i ilk data kutucu�u 10 oldu
	
	
	root -> next = (node *)malloc (sizeof(node)); //haf�zada yeni kutu olu�tur
													//onu rootun nextindeki olsun
	
	root -> next -> x = 20 ; //rootun g�sterdi�i(ilk kutu) kutunun
							//nextinin g�sterdi�i (di�er ikilinin ilki)
							// -> g�sterdi�i demek
							// Bunlara LINKED LIST  diyoruz
							
	root -> next -> next = (node *)malloc (sizeof (node));
	root -> next -> next -> x = 30;	
							// �ok fazla next yaz�lamaz
							//bunun i�in trik yap�yoruz
							//root gibi pointer yap�yoruz ad� iter
							// kendi kendine tak�lan demek
							//point etti�i node lar� bana yazd�rs�n
							//istedi�i kutulara atlayabilir
	node * iter;	//iterator olu�turduk					
	iter = root; //rootun g�sterdi�i yeri iter de g�stersin
				 //bir sonraki kutuyu g�stermesi i�in
	printf("%d",iter -> x);
	
	iter= iter -> next;
	printf("%d", iter -> x);											
								
	
}
