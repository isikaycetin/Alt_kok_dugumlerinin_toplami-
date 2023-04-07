#include <stdio.h>
#include <stdlib.h>
                                                 /* Agaçtaki Kök degeri alt dügümlerin toplami mi? 
	                                   Size tam olarak 3 dügümden olusan ikili bir agacin kökü verildiginde, 
		                             bu degerin alt dügümlerin(child) toplami olup olmadigini bulun */
    // Isikay Cetin 1220505031
struct node{      // ağaç yapısı için bir struct node tanımladık.
	int value;          // Node saklandığı yer.
	struct node *sol;       // Node'un sol alt düğümü
	struct node *sag;        // Node'un sag alt düğümü 
};


struct node *nodeyeni(int value){               // yeni node ekleyen fonksiyon.
	
	struct node *node = (struct node*)malloc(sizeof(struct node));    // hafızamızda yer ayırdık.
	node->value=value;
	node->sag=NULL;                 // Null atadık.
	node->sol=NULL;	                // Null atadık.
	return(node);  
}


int main(int argc, char *argv[]) {
	
	int Kok;                                     
	int Sol;                 // Buradaki tanımlamalar sol ve sag node'un sayıları.
	int Sag;
     int toplam;
    
	printf("Kok degerini giriniz : ");
	scanf("%d",&Kok);
	printf("Sol node degerini giriniz :");
	scanf("%d",&Sol);
	printf("Sag node degerini giriniz :");
	scanf("%d",&Sag);
	
	struct node *kok= nodeyeni(Kok);              // Dugumleri olusturduk.
	kok->sol=nodeyeni(Sol);
	kok->sag=nodeyeni(Sag);
	
	toplam=(kok->sag->value)+(kok->sol->value);
	
	if(toplam==kok->value)             // Eger girilen alt degerlerin toplamı koke esitse ekrana yazdırsın.
	    printf("\n\n Kokun alt dugumlerinin toplami koke esittir.");
	    
	else
	    printf("\n\n Kokun alt dugumlerinin toplami koke esit degildir.");
	
	return 0;
}

