#include <stdio.h>
#include <stdlib.h>

struct node {  // datay� tutacak   noda * (sonrak� yap�y� g�stermek i�in) sonraki
	int data;
	struct node * sonraki ;
};

	int main() {
		
		struct node * ilkdugum = NULL;	// ilk d���m ilk ba�ta bo� oldu
		ilkdugum = (struct node*)malloc(sizeof(struct node)); // ilk d���m i�in yer ay�rtt�k
		struct node * ikincidugum = (struct node*)malloc(sizeof(struct node)); // ikinci d���m oldu
		
		ilkdugum -> data = 15; // ilk yere 15 koyduk
		ilkdugum -> sonraki = ikincidugum;
		
		ikincidugum-> data = 20;
		ikincidugum -> sonraki = NULL;
		
		printf("%d => %d", ilkdugum -> data, ikincidugum->data);
		
		return 0;
		
	}
