#include <stdio.h>
#include <stdlib.h>

struct node {  // datayı tutacak   noda * (sonrakş yapıyı göstermek için) sonraki
	int data;
	struct node * sonraki ;
};

	int main() {
		
		struct node * ilkdugum = NULL;	// ilk düğüm ilk başta boş oldu
		ilkdugum = (struct node*)malloc(sizeof(struct node)); // ilk düğüm için yer ayırttık
		struct node * ikincidugum = (struct node*)malloc(sizeof(struct node)); // ikinci düğüm oldu
		
		ilkdugum -> data = 15; // ilk yere 15 koyduk
		ilkdugum -> sonraki = ikincidugum;
		
		ikincidugum-> data = 20;
		ikincidugum -> sonraki = NULL;
		
		printf("%d => %d", ilkdugum -> data, ikincidugum->data);
		
		return 0;
		
	}
