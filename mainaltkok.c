#include <stdio.h>
#include <stdlib.h>
                                                 /* Agaçtaki Kök degeri alt dügümlerin toplami mi? 
									       Size tam olarak 3 dügümden olusan ikili bir agacin kökü verildiginde, 
									        bu degerin alt dügümlerin(child) toplami olup olmadigini bulun */
    // Isikay Cetin 1220505031
struct node{      // aðaç yapýsý için bir struct node tanýmladýk.
	int value;          // Node saklandýðý yer.
	struct node *sol;       // Node'un sol alt düðümü
	struct node *sag;        // Node'un sag alt düðümü 
};


struct node *nodeyeni(int value){               // yeni node ekleyen fonksiyon.
	
	struct node *node = (struct node*)malloc(sizeof(struct node));    // hafýzamýzda yer ayýrdýk.
	node->value=value;
	node->sag=NULL;                 // Null atadýk.
	node->sol=NULL;	                // Null atadýk.
	return(node);  
}


int main(int argc, char *argv[]) {
	
	int Kok;                                     
	int Sol;                 // Buradaki tanýmlamalar sol ve sag node'un sayýlarý.
	int Sag;
    int toplam;
    
	printf("Kok degerini giriniz : ");
	scanf("%d",&Kok);
	printf("Sag dugum degerini giriniz :");
	scanf("%d",&Sag);
	printf("Sol dugum degerini giriniz :");
	scanf("%d",&Sol);
	
	struct node *kok= nodeyeni(Kok);              // Dugumleri olusturduk.
	kok->sol=nodeyeni(Sol);
	kok->sag=nodeyeni(Sag);
	
	toplam=(kok->sag->value)+(kok->sol->value);
	
	if(toplam==kok->value)             // Eger girilen alt degerlerin toplamý koke esitse ekrana yazdýrsýn.
	    printf("\n\n Kokun alt dugumlerinin toplami koke esittir.");
	    
	else
	    printf("\n\n Kokun alt dugumlerinin toplami koke esit degildir.");
	
	return 0;
}

