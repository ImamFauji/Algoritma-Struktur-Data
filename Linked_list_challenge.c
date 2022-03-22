#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};
struct node *head;

typedef struct node node_t;

void cetak()
{
    //cetak linked list
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("List kosong boskuh !");
    }
    else
    {
        printf("Cetak isi list...");
        while (ptr !=NULL)
        {
            printf("\n%d\n", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
        system("pause");
        system("cls");
    }
    /*node_t* sementara = head;

    while(sementara != NULL)
    {
        printf("%d - ", sementara -> data);
        sementara = sementara->next;
    }
    printf("\n");*/
}

void awal()
{
    //isi data di node awal
    system("cls");
    struct node *ptr;
    int item;
    
    ptr = (struct  node *)malloc(sizeof(struct node *));

    if(ptr==NULL)
    {
            printf("Overflow!");
    }
    else
    {
            printf("Masukan data :");
            scanf("%d", &item);
            ptr->data = item;
            ptr->next = head;
            head = ptr;
            printf("Data berhasil disimpan di NODE awal!\n");
            system("pause");
            system("cls");
            
    }

}
void akhir()
{
    //isi data di node akhir
    system("cls");
    struct node *ptr, *temp;
    int item;
    
    ptr = (struct  node *)malloc(sizeof(struct node *));

    if(ptr==NULL)
    {
            printf("Overflow!");
    }
    else
    {
        printf("Masukan data : ");
        scanf("%d", &item);
        ptr->data = item;
        if(head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("Berhasil simpan Node!\n");
            system("pause");
            system("cls");
        }
        else
        {
            temp = head;
            while(temp ->next !=NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("Berhasil simpan NODE akhir!\n");
            system("pause");
            system("cls");
        }
    }
    
}
void sembarang()
{
    //isi data di node sembarang
    system("cls");
    struct node *ptr, *temp;
    int item, loc, i;
    
    ptr = (struct  node *)malloc(sizeof(struct node *));

    if(ptr==NULL)
    {
            printf("Overflow!");
    }
    else
    {
        printf("Masukan data : ");
        scanf("%d", &item);
        ptr->data = item;
        printf("Mau simpan di lokasi berapa? : ");
        scanf("%d", &loc);
        temp = head;
        for(i=0;i<loc; i++)
        {
            temp = temp->next;
            if(temp==NULL)
            {
                printf("Tidak bisa simpan datamu!");
                system("pause");
                system("cls");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("NODE berhasil disimpan!\n");
        system("pause");
        system("cls");
    }
}

void hapusawal()
{
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nList kosong bro!\n");
        system("pause");
    }  
    else
    {  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
        printf("\nNODE awal berhasil dihapus!\n");
        system("pause"); 
    }
}

void hapusakhir()
{
    system("cls");
    struct node *ptr = head;
    if(head == NULL)
    {
        printf("\nList kosong bro!\n");
        system("pause");
        system("cls");
    }
    else
    {
        while(ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = NULL;
        free(ptr->next);
        printf("\nNODE akhir berhasil dihapus!\n");
        system("pause");
        system("cls");
    }
    printf("\n");
}

void hapussembarang()
{
    system("cls");
    int loc, i;
    struct node *ptr, *temp = head;
    printf("Lokasi mana yang ingin dihapus? (mulai dari 0) ");
    scanf("%d", &loc);
    if(head == NULL)
    {
        printf("\nList kosong bro!\n");
        system("pause");
        system("cls");
        return head;
    }
    else
    {
        for(i = 0; i < loc - 1; i++)
        {
            temp = temp->next;
        }
        struct node *hapus = temp->next;
        temp->next = temp->next->next;
        hapus->next = NULL;
        free(hapus);
        printf("Node di lokasi %d berhasil dihapus!", loc);
        printf("\n");
        return head;
        system("pause");
        system("cls");
    }
}

int main()
{

    int pilihan = 0;
    while(pilihan !=8)
    {
        printf("****** Menu latihan linked list ******");
        printf("\n======================================\n");
        printf("\n1. Input data di awal \n2. Input data di akhir \n3. Input data sembarang \n4. Hapus data awal\n5. Hapus data akhir\n6. Hapus data sembarang\n7. lihat data di dalam linked list \n8. keluar\n");
        printf("pilihanmu? ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
            case 1 :
            awal();
            break;
            case 2 :
            akhir();
            break;
            case 3 :
            sembarang();
            break;
            case 4 :
            hapusawal();
            break;
            case 5 :
            hapusakhir();
            break;
            case 6 :
            hapussembarang();
            break;
            case 7 :
            cetak();
            break;
            case 8 :
            exit(0);
            break;
        
        default: printf("silahkan pilih yang benar");
            break;
        }
    }
    system("cls");
}
