#include <stdio.h>
#include <stdlib.h>
                                                 /* Aga�taki K�k degeri alt d�g�mlerin toplami mi? 
									       Size tam olarak 3 d�g�mden olusan ikili bir agacin k�k� verildiginde, 
									        bu degerin alt d�g�mlerin(child) toplami olup olmadigini bulun */
    // Isikay Cetin 1220505031
struct node{      // a�a� yap�s� i�in bir struct node tan�mlad�k.
	int value;          // Node sakland��� yer.
	struct node *sol;       // Node'un sol alt d���m�
	struct node *sag;        // Node'un sag alt d���m� 
};


struct node *nodeyeni(int value){               // yeni node ekleyen fonksiyon.
	
	struct node *node = (struct node*)malloc(sizeof(struct node));    // haf�zam�zda yer ay�rd�k.
	node->value=value;
	node->sag=NULL;                 // Null atad�k.
	node->sol=NULL;	                // Null atad�k.
	return(node);  
}


int main(int argc, char *argv[]) {
	
	int Kok;                                     
	int Sol;                 // Buradaki tan�mlamalar sol ve sag node'un say�lar�.
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
	
	if(toplam==kok->value)             // Eger girilen alt degerlerin toplam� koke esitse ekrana yazd�rs�n.
	    printf("\n\n Kokun alt dugumlerinin toplami koke esittir.");
	    
	else
	    printf("\n\n Kokun alt dugumlerinin toplami koke esit degildir.");
	
	return 0;
}

