#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()

{   

    char ad[100];
    char soyad[100];
    int telefon_numarasi;
    int id;

    int vucut_yagi;
    int vucut_sprayi;
    int sac_spreyi;
    int sac_kremi;

    int seker;
    int cay;
    int kahve;
    int pirinc;
    int makarna;


    int pepsi;
    int fanta;
    int sprite;
    int ayran;
    int su;

    int total;
    int cosmetik_total;
    int taki_total;
    int icecek_total;

    int secim;


    printf ("-----------------------\n");
    printf ("FATURA SISTEMI HOSGELDINIZ\n");
    printf ("-----------------------\n");
    printf ("Kullanici Detaylari\n\n");
    
    printf("Ad: ");
    scanf("%s",&ad);
    printf("Soyad: ");
    scanf("%s",&soyad);
    printf("Telefon Numarası: ");
    scanf("%d",&telefon_numarasi);
    printf("ID: ");
    scanf("%d",&id);

    printf("------------------------\n");
    
    printf("Cosmetikler\n\n");

    printf("Vucut Yagi: \n");
    scanf("%d",&vucut_yagi);
    printf("Vucut Sprayi: \n");
    scanf("%d",&vucut_sprayi);
    printf("Sac Spreyi: \n");
    scanf("%d",&sac_spreyi);
    printf("Sac Kremi: \n");
    scanf("%d",&sac_kremi);

    printf("seciminiz:");
    scanf("%d",&secim);

    printf("------------------------\n");

    printf("\n\n");

    printf("Seker: \n");
    scanf("%d",&seker);
    printf("Cay: \n");
    scanf("%d",&cay);
    printf("Kahve: \n");
    scanf("%d",&kahve);
    printf("Pirinc: \n");
    scanf("%d",&pirinc);
    printf("Makarna: \n");
    scanf("%d",&makarna);

    printf("seciminiz:");
    scanf("%d",&secim);

    printf("------------------------\n");

    printf("Icecekler\n\n");

    printf("Pepsi: ");
    scanf("%d",&pepsi);
    printf("Fanta: ");
    scanf("%d",&fanta);
    printf("Sprite: ");
    scanf("%d",&sprite);
    printf("Ayran: ");
    scanf("%d",&ayran);
    printf("Su: ");
    scanf("%d",&su);

    printf("seciminiz:");
    scanf("%d",&secim);

    printf("------------------------\n");

    int boso;

    int hc;

    int hs;

    int bosp;


    boso=10*vucut_yagi;
    hc=15*vucut_sprayi;
    hs=20*sac_spreyi;
    bosp=25*sac_kremi;
    cosmetik_total=boso+hc+hs+bosp;


    printf("vucut yagi: %d\n",boso);
    printf("vucut sprayi: %d\n",hc);
    printf("sac spreyi: %d\n",hs);
    printf("sac kremi: %d\n",bosp);
    printf("cosmetikler toplami: %d\n",cosmetik_total);  

    printf("------------------------\n");

    int s;
    int t;
    int c;
    int r;
    int w;

    s=5*seker;
    t=10*cay;
    c=15*kahve;
    r=20*pirinc;
    w=25*makarna;

    taki_total=s+t+c+r+w;

    printf("seker: %d\n",s);
    printf("cay: %d\n",t);
    printf("kahve: %d\n",c);
    printf("pirinc: %d\n",r);
    printf("makarna: %d\n",w);
    printf("takilar toplami: %d\n",taki_total);

    printf("------------------------\n");

    int p;
    int f;
    int spr;
    int a;
    int e;

    p=5*pepsi;
    f=10*fanta;
    spr=15*sprite;
    a=20*ayran;
    e=25*su;
    icecek_total=p+f+spr+a+e;

    printf("pepsi: %d\n",p);
    printf("fanta: %d\n",f);
    printf("sprite: %d\n",spr);
    printf("ayran: %d\n",a);
    printf("su: %d\n",s);
    printf("icecekler toplami: %d\n",icecek_total);

    printf("------------------------\n");


    total=cosmetik_total+taki_total+icecek_total;
    
    printf("toplam tutar: ");
    printf("Toplam: %d\n",total);
    
    printf("------------------------\n");

    printf("--------------------------------------------------\n");

    printf("Gürbüz SuperMarket \n");

    printf("isimi: %s\n");
    scanf("%s",&ad);
    printf("soyisimi: %s\n");
    scanf("%s",&soyad);
    printf("telefon numarasi: %d\n");
    scanf("%d",&telefon_numarasi);
    printf("id: %d\n");
    scanf("%d",&id);

    printf("Kayit adi   Miktar  fiyat \n\n ");
    printf("vucut yagi: %d\n",boso,vucut_yagi);
    printf("vucut sprayi: %d\n",hc,vucut_sprayi);
    printf("sac spreyi: %d\n",hs,sac_spreyi);
    printf("sac kremi: %d\n",bosp,sac_kremi);
    printf("seker: %d\n",s,seker);
    printf("cay: %d\n",t,cay);
    printf("kahve: %d\n",c,kahve);
    printf("pirinc: %d\n",r,pirinc);
    printf("makarna: %d\n",w,makarna);
    printf("pepsi: %d\n",p,pepsi);
    printf("fanta: %d\n",f,fanta);
    printf("sprite: %d\n",spr,sprite);
    printf("ayran: %d\n",a,ayran);
    printf("su: %d\n",e,su);
    printf("toplam tutar: %d\n",total);
    printf("kozmetikler toplami: %d\n",cosmetik_total);
    printf("takilar toplami: %d\n",taki_total);
    printf("icecekler toplami: %d\n",icecek_total);
    printf("seciminiz: %d\n",secim);
    scanf("%d",&secim);

    printf("--------------------------------------------------\n");

    return 0;

}
