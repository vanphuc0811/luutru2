#include<stdio.h>
void nhapmang1c(int a[10], int n);
void xuatmang1c(int a[10],int n);
int gtln(int a[10],int n);
int max(int a[10],int n);
int main()
{
	int a[10],n;
	printf("\n NHAP SO PHAN TU CUA MANG :=");
	scanf("%d",&n);
	nhapmang1c(a,n);
	xuatmang1c(a,n);
//	gtln(a,n);
//	max(a,n);
return 0;
}

void nhapmang1c(int a[10], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n NHAP PHAN TU THU a[%d]=",i);
		scanf("%d",&a[i]);
	}
}

void xuatmang1c(int a[10], int n)
{
	printf("\n\n CAC PHAN TU CUA MANG LA :=");
	  for(int j=0;j<n;j++)
	  printf("%d	;	",a[j]);
}
int gtln(int a[10],int n)
{
	int max =a[0];
	for (int i=1;i<1;i++)
	    if(max<a[i])
	    max=a[i];
	printf("\n GIA TRI LON NHAT LA := %d",max);
return max;
}
