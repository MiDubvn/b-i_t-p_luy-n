#include<stdio.h>
#include<conio.h>
struct game
{
	int ma;
	char ten[50];
	float tien;
	char tacgia[100];
};
void them1maychoigame(game a[], int &n)
{
	printf("nhap ma game: ");
	scanf_s("%d", &a[n].ma);

	printf("nhap ten: ");
	gets_s(a[n].ten);

	printf("nhap gia tien: ");
	scanf_s("%f", &a[n].tien);

	printf("nhap ten tac gia: ");
	gets_s(a[n].tacgia);
}
void themnhieumaychoigame(game a[], int &n)
{
	int m;
	printf("ban muon them bao nhieu may choi game: ");
	scanf_s("%d", &m);
	for (int i = 0; i < n; i++)
	{
		printf("nhap ma game: ");
		scanf_s("%d", &a[n].ma);

		printf("nhap ten: ");
		gets_s(a[n].ten);

		printf("nhap gia tien: ");
		scanf_s("%f", &a[n].tien);

		printf("nhap ten tac gia: ");
		gets_s(a[n].tacgia);
	}
}
void main() {
	game a;
	int a = , n;
	int chon = 1, tieptuc;
	do
	{
		printf("-------menu------\n");
		printf("them 1 may choi game");
		printf("them nhieu may choi game");
		printf("chon chuc nang: ");
		scanf_s("%d", chon);
		switch (tieptuc)
		{
		case 0:return;
		case 1:them1maychoigame(a, n);
			break;
		case 2:
			break;
		default:
			break;
		}
	} while (chon != 0);
}