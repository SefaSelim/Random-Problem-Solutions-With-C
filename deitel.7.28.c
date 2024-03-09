#include <stdio.h>
#include <stdlib.h>
#define OGRENCILER 3
#define SINAVLAR 4
void diziyiYazdir( const int [][SINAVLAR]);
void minimum( const int [][SINAVLAR]);
void maksimum( const int [][SINAVLAR]);
void ortalama( const int [][SINAVLAR]);
int main()
{

   void (*notIslemleri[])(int a[][SINAVLAR])={diziyiYazdir,minimum,maksimum,ortalama};
   const int ogrenciNotlari [OGRENCILER][ SINAVLAR] =
{ { 77, 68, 86, 73 },
{ 96, 87, 89, 78 },
{ 70, 90, 86, 81 } };

printf("Seçiminizi giriniz:\n");
printf("0 notlar dizisini yazdır \n");
printf("1 En düĢük notu bul \n");
printf("2 En büyük notu bul \n");
printf("3 Tüm derslerdeki ortalamayı her öğrenci için bul \n");
printf("4 Programı sonlandır \n");

int choice=0;
printf(" please enter what opertor you want to do : \n");
scanf("%d",&choice);


    (*notIslemleri[choice])(ogrenciNotlari);


    return 0;
}
void diziyiYazdir( const int ogrenciNotlari[][SINAVLAR])
{
    for(size_t i = 0 ; i<OGRENCILER ; i++)
    {
        for(size_t j = 0 ; j<SINAVLAR ; j++)
        {
            printf("%d\t",ogrenciNotlari[i][j]);
        }
        printf("\n");
    }
}
void minimum( const int ogrenciNotlari[][SINAVLAR])
{
    int min=100;
     for(size_t i = 0 ; i<OGRENCILER ; i++)
    {
        for(size_t j = 0 ; j<SINAVLAR ; j++)
        {
            if(ogrenciNotlari[i][j]<min)
            {
                min=ogrenciNotlari[i][j];
            }
        }
    }
    printf("min not:%d \n",min);
}
void maksimum( const int ogrenciNotlari[][SINAVLAR])
{
    int max=0;
     for(size_t i = 0 ; i<OGRENCILER ; i++)
    {
        for(size_t j = 0 ; j<SINAVLAR ; j++)
        {
            if(ogrenciNotlari[i][j]>max)
            {
                max=ogrenciNotlari[i][j];
            }
        }
    }
    printf("mix not:%d \n",max);
}
void ortalama( const int ogrenciNotlari[][SINAVLAR])
{
    float orta,notlar=0;

    for(size_t i = 0 ; i<OGRENCILER ; i++)
    {
        for(size_t j = 0 ; j<SINAVLAR ; j++)
        {
            notlar+=ogrenciNotlari[i][j];
        }
        orta=(float)notlar/SINAVLAR;
        printf("%u.ogrenci ortalamasi : %f \n",i+1,orta);
        notlar=0;
    }
}
