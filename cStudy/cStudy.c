// cStudy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>
#define sayi 100



int main() {

	//1- 1 den 100 e kadar sayýlarýn toplamýný veren program

	/*int i, toplam;

	toplam = 0;

	for ( i = 0; i < 100; i++)
	{
		toplam = toplam + i;
	}
	printf("Sayilarin Toplami: %d", toplam);
	*/

	//2- kullanýcýdan alýnan 3 sayýdan en büyük ve en küçük sayýyý bulma

	/*int a, b, c;

	printf("Uc sayi giriniz:");
	scanf_s("%d%d%d", &a, &b, &c);

	if (a>b && a>c)
	{
		printf("En Buyuk Sayi: %d\n", a);

		if (b>c)
		{
			printf("En Kucuk Sayi: %d\n", c);
		}
		else
		{
			printf("En Kucuk Sayi: %d\n", b);
		}
	}
	else if (b>a && b>c)
	{
		printf("En Buyuk Sayi: %d\n", b);

		if (a>c)
		{
			printf("En Kucuk Sayi: %d\n", c);
		}
		else
		{
			printf("En Kucuk Sayi: %d\n", a);
		}
	}
	else
	{
		printf("En Buyuk Sayi: %d\n", c);

		if (a>b)
		{
			printf("En Kucuk Sayi: %d\n", b);
		}
		else
		{
			printf("En Kucuk Sayi: %d\n", a);
		}
	}*/


	/*int a, b;
	char k;

	printf("Birinici Sayiyi Giriniz: ");
	scanf_s("%d",&a);

	printf("Yapmak Istediginiz Islemi Seciniz [+,-,*,/] :");
	scanf_s(" %c",&k); //Kullanýcýdan sayý giriþi almak istersen %c nin baþýna boþluk gelir!!!

	printf("Ikiici Sayiyi Giriniz: ");
	scanf_s("%d",&b);


	switch (k)
	{
		case '+': printf("Toplama Sonucu: %d", (a + b));
			break;
		case '-': printf("Cikarma Sonucu: %d", (a - b));
			break;
		case '*': printf("Carpma Sonucu: %d", (a * b));
			break;
		case '/': printf("Bolme Sonucu: %d", (a / b));
			break;
		default: printf("Hatali Secim Yaptiniz!!");
		break;
	}*/


	//4 girilen n tane sayýnýn teklerini ve çiftlerini toplayan program

	/*int n, tek, cift;

	tek = 0;
	cift = 0;

	printf("n degerini giriniz:");
	scanf_s("%d", &n);

	int i;                     //n kadar sayý girdirmek istedigimizde buradaki gibi döngü kullanýlýr.
	for (i = 0; i < n; i++)
	{
		int a;
		printf("Sayiyi Giriniz: ");
		scanf_s("%d", &a);
		if (a%2==0)
		{
			cift = cift + a;
		}
		else
		{
			tek = tek + a;
		}
	}
	printf("Tek Sayilarin Toplami: %d\n", tek);
	printf("Cift Sayilarin Toplami: %d\n", cift);
	*/


	//5 klavyeden girilen metin icinden yine klayvyeden girilen bir karakterin kac defa geçtigini bulma

	/*char metin[100]; //karakter dizisi oluþturma
	char a;
	int tane;
	tane = 0;

	printf("Bir Metin Giriniz:");
	gets(metin);  //scanf yerini karakter metin çagýrýrken bu kullanýlýr.
	printf("Bir Harf Giriniz:");
	scanf_s(" %c", &a);

	int i;
	for ( i = 0; metin[i] != '\0' ; i++)
	{
		if (metin[i]==a)
		{
			tane = tane + 1;
		}
	}
	printf("%c harfinden %d tane var", a, tane);
	*/

	//fibonacci serisi
	/*int a, b, i, c, boyut;
	a = 0;
	b = 1;

	printf("Serinin Boyutunu Giriniz:");
	scanf_s("%d", &boyut);

	if (boyut<3)
	{
		if (boyut == 1)
		{
			printf("%d", a);
		}
		else if (boyut == 2)
		{
			printf("%d, %d", a, b);
		}
		else
		{
			printf("Hatali Giris Yaptiniz!!");
		}
	}
	else
	{
		printf("%d,%d", a, b);
		for ( i = 3; i <= boyut; i++)
		{
			c = a + b;
			printf(",%d", c);
			a = b;
			b = c;
		}
	}*/

	/*int sayi, i, asal;
	asal = 1;

	printf("Bir Sayi Giriniz:");
	scanf_s("%d", &sayi);

	for ( i = 2; i < sayi; i++)
	{
		if (sayi%i==0)
		{
			asal = 0;
		}
	}

	if (asal==1 && sayi>1)
	{
		printf("%d Sayisi Asaldir.",sayi);
	}
	else
	{
		printf("%d Sayisi Asal Degildir.",sayi);
	}*/

	//öðrenci not durumu sorgulama

	/*float vize, final, ortalama;
	char harf;

	printf("Vize Notunuzu Giriniz:");
	scanf_s("%f", &vize);
	printf("Final Notunuzu Giriniz:");
	scanf_s("%f", &final);

	ortalama = (vize * 40 / 100) + (final * 60 / 100);

	if (vize<0 || vize >100 || final<0 || final>100)
	{
		printf("Hatali Not Girdiniz!!");
	}
	else
	{
		if (ortalama < 50)
		{
			harf = 'F';
		}
		else if (ortalama < 70)
		{
			harf = 'C';
		}
		else if (ortalama < 85)
		{
			harf = 'B';
		}
		else
		{
			harf = 'A';
		}
	}

	if (harf == 'F')
	{
		printf("ortalamaniz: %f , harf notunuz: %c , durum KALDI:(", ortalama, harf);
	}
	else
	{
		printf("ortalamaniz: %f , harf notunuz: %c , durum GECTI:)", ortalama, harf);
	}*/


	//ikinci dereceden denklemin köklerini bulma

	/*int delta, a, b, c, x1, x2, x;

	printf("a,b ve c degerlerini giriniz:");
	scanf_s("%d%d%d", &a, &b, &c);

	delta = b * b - 4 * a * c;

	if (delta<0)
	{
		printf("Reel Kok Yoktur.");
	}
	else if (delta > 0)
	{
		x1 = -b - (sqrt(delta)) / 2 * a;
		x2 = -b + (sqrt(delta)) / 2 * a;

		printf("Iki Kok Var. \n");
		printf("x1 = %d\n", x1);
		printf("x2 = %d\n", x2);
	}
	else
	{
		x = -b / 2 * a;
		printf("Tek Kok Var.\n");
		printf("x = %d\n", x);
	}*/

	/*int boyut, a, b, c, i;
	a = 0;
	b = 1;

	printf("Boyut Uzunlugunu Giriniz: ");
	scanf_s("%d", &boyut);

	if (boyut<3)
	{
		if (boyut == 1)
		{
			printf("%d", a);
		}
		else if (boyut == 2)
		{
			printf("%d, %d", a, b);
		}
		else
		{
			printf("Hatali Giris Yaptiniz.");
		}
	}
	else
	{
		printf("%d,%d", a, b);
		for ( i = 3; i <= boyut; i++)
		{
			c = a + b;
			printf(",%d", c);
			a = b;
			b = c;
		}
	}*/

	/*int n, asal, i;
	asal = 1;

	printf("Bir Sayi Giriniz: ");
	scanf_s("%d", &n);

	for ( i = 2; i < n; i++)
	{
		if (n%i==0)
		{
			asal = 0;
		}
	}
	if (asal==1 && n>0)
	{
		printf("Asaldir.");
	}
	else
	{
		printf("Asal Degildir.");
	}*/


	//klavyeden girilen n tane verinin diziye yerleþtirilmesi.

	/*int a[sayi], n, i;

	printf("Dizinin Boyutunu Giriniz: ");
	scanf_s("%d", &n);

	for ( i = 0; i < n; i++)
	{
		a[i] = i;
		printf("a[%d] = %d\n", i, i);
	}*/


	//tüm elemanlarý sýfýr olan dizi oluþturma

	/*int a[sayi], i, n;

	printf("Dizinin Boyutunu Giriniz: ");
	scanf_s("%d", &n);

	for ( i = 0; i < n; i++)
	{
		a[i] = 0;
		printf("a[%d] = %d\n", i, a[i]);
	}*/


	//klavyeden girilen n elemanlý bir dizinin elemanlarýný toplama.


	/*int a[sayi], n, i, toplam;

	toplam = 0;

	printf("Dizinin Boyutunu Giriniz: ");
	scanf_s("%d", &n);

	for ( i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
		toplam += a[i];
	}
	printf("Dizideki Sayilarin Toplami: %d", toplam);
	*/


	//klavyeden girilen bir n elemanlý a ve b dizilerini toplayarak c dizisini oluþturan ve yazdýran program

	/*int a[sayi], b[sayi], c[sayi], i, n;

	printf("Dizinin Degerini Giriniz: ");
	scanf_s("%d", &n);

	for ( i = 0; i < n ; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
	for ( i = 0; i < n; i++)
	{
		printf("b[%d] = ", i);
		scanf_s("%d", &b[i]);
	}
	for ( i = 0; i < n; i++)
	{
		c[i] = a[i] + b[i];
		printf("c[%d] =  %d\n", i, c[i]);
	}*/

	//klavyeden girilen bir n elemanlý a dizisini k katsayýsý ile çarpýp b dizisini oluþturan ve yazdýran program

	/*int a[sayi], b[sayi], i, n, k;

	printf("Dizinin Uzunlugunu Giriniz: ");
	scanf_s("%d", &n);

	printf("k Katsayisini Giriniz: ");
	scanf_s("%d", &k);

	for (i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
	for ( i = 0; i < n; i++)
	{
		b[i] = k * a[i];
		printf("b[%d] = %d\n", i, b[i]);
	}*/


	//klavyeden girilen n elemanlý a dizisinin elemanlarýný baþka bir dizi kullamadan tersten yazdýran program.

	/*int a[sayi], i, n, g;

	printf("Dizinin Uzunlugunu Giriniz: ");
	scanf_s("%d", &n);

	for ( i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
	for ( i = 0; i < n; i++)
	{
		printf("a[%d]\n", i, a[n - i - 1]);
	}*/


	//klavyeden girilen n elemanlý a dizisinin elemanlarýný ters sýrada b dizisine yazdýran program.

	/*int a[sayi], b[sayi], i, n, j;
	printf("Dizinin Uzunlugunu Giriniz: ");
	scanf_s("%d", &n);

	for ( i = 0; i < n; i++)
	{
		printf("a[%d] =", i);
		scanf_s("%d", &a[i]);
	}
	for ( i = 0; i < n; i++)
	{
		b[i] = a[n-1-i];
		printf("b[%d] = %d\n", i, b[i]);
	}*/


	//klavyeden girilen n elemanlý a ve b dizilerinin skaler çarpýmýný hesaplayan program.

	/*int a[sayi], b[sayi], i, n, skalerCarpým;
	printf("Dizilerin Uzulungunu Giriniz: ");
	scanf_s("%d", &n);

	for ( i = 0; i < n ; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
	for ( i = 0; i < n; i++)
	{
		printf("b[%d] = ", i);
		scanf_s("%d", &b[i]);
	}
	skalerCarpým = 0;
	for ( i = 0; i < n; i++)
	{
		skalerCarpým = skalerCarpým + a[i] * b[i];
	}
	printf("Skaler Carpmanin Sonucu = %d", skalerCarpým);*/

	//klavyeden girilen n elemanlý bir a dizisinin aritmetik,geometrik,harmonik ve kontraharmonik ortalamasýný hesaplayan program.

	/*float a[sayi], n, toplam1, aritmetik, geometrik, carpim, harmonik, toplam2, toplam3, kontraharmonik;
	int i;
	toplam1 = 0;
	toplam2 = 0;
	toplam3 = 0;
	carpim = 1;
	printf("Dizinin Uzunlugunu Giriniz: ");
	scanf_s("%f", &n);

	for (i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%f", &a[i]);
		toplam1 = toplam1 + a[i];
		carpim = carpim * a[i];
		toplam2 = toplam2 + 1 / a[i];
		toplam3 = toplam3 + pow(a[i], 2);
	}
	kontraharmonik = toplam3 / toplam1;
	harmonik = n / toplam2;
	aritmetik = toplam1 / n;
	geometrik = pow(carpim, 1.0/n);
	printf("Dizinin Aritmetik Ortalamasi = %f\n", aritmetik);
	printf("Dizinin Geometrik Ortalamasi = %f\n", geometrik);
	printf("Dizinin Harmonik Ortalamasi = %f\n", harmonik);
	printf("Dizinin Kontraharmonik Ortalamasi = %f\n", kontraharmonik);*/

	
	return 0;
}