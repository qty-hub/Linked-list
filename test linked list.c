#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
} *head;

void awal(){
	system("cls");
	struct node *ptr;
	int item;
	ptr = (struct node*)malloc(sizeof(struct node*));
	
	if(ptr==NULL){
		printf("Overflow!");
	}else{
		printf("Input data: "); scanf("%d", &item);
		ptr->data = item;
		ptr->next = head;
		head = ptr;
		printf("\n");
		printf("Data berhasil disimpan di node awal!");
	}
}

void akhir(){
	system("cls");
	struct node *ptr, *temp;
	int item;
	ptr = (struct node*)malloc(sizeof(struct node*));
	
	if(ptr==NULL){
		printf("Overflow!");
	}else{
		printf("Input data: "); scanf("%d", &item);
		ptr->data = item;
		if(head==NULL){
			ptr->next = NULL;
			head = ptr;
			printf("Berhasil menyimpan node!");
		}else{
			temp = head;
			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = ptr;
			ptr->next = NULL;
			printf("Berhasil menyimpan node akhir!");
		}
	}
}

void sembarang(){
	system("cls");
	struct node *ptr, *temp;
	int item, location, i;
	ptr = (struct node*)malloc(sizeof(struct node*));
	
	if(ptr==NULL){
		printf("Overflow!");
	}else{
		printf("Input data: "); scanf("%d", &item);
		ptr->data = item;
		printf("Input node yang mau diinput data: "); scanf("%d", &location);
		temp = head;
		for(i=0; i<location; i++){
			temp = temp->next;
			if(temp==NULL){
				printf("Data tidak bisa diinput!");
				return;
			}
		}
		ptr->next = temp->next;
		temp->next = ptr;
	}
	printf("Data sudah disimpan!");
}

void hAwal(){
	
}

void hAkhir(){
	
}

void hSembarang(){
	
}

void cetak(){
	system("cls");
	struct node *ptr;
	int i=1;
	// int item, i, flag;
	ptr = head;
	if(ptr==NULL){
		printf("List kosong!");
	}else{
		printf("Cetak isi list\n");
		while(ptr!=NULL){
			printf("Node ke-%d: %d\n", i, ptr->data);
			ptr = ptr->next;
			i++;
		}
	}
}

int main(){
	int pilihan=0;
	while(pilihan!=8){
		system("cls");
		printf("==============================\n");
		printf("|| Menu latihan linked list ||\n");
		printf("==============================\n");
		printf("1. Input data di awal\n");
		printf("2. Input data di akhir\n");
		printf("3. Input data sembarang\n");
		printf("4. Hapus data di awal\n");
		printf("5. Hapus data di akhir\n");
		printf("6. Hapus data sembarang\n");
		printf("7. Lihat data dalam linked list\n");
		printf("8. Exit\n");
		printf("Pilihan: "); scanf("%d", &pilihan);
		
		switch(pilihan){
			case 1: awal(); getch(); break;
			case 2: akhir(); getch(); break;
			case 3: sembarang(); getch(); break;
			case 4: hAwal(); getch(); break;
			case 5: hAkhir(); getch(); break;
			case 6: hSembarang(); getch(); break;
			case 7: cetak(); getch(); break;
			case 8: exit(0);
		}
	}
}
