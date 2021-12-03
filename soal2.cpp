#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
/*void Unknown(int x , int y)
{
int bil=3;
clrscr();
do
{
printf("%d",bil);
bil +=2;
}
while(bil<=11);
int a =20, b=30;
int *pa , *pb;
pa =&a; pb=&b;
*pa += *pb;
cout<<a<<""<<b;
x+=y;
y+=x;
}*/
main(){
	/*int i,j;
	i=5;j=8;
	Unknown(i,j);
	cout<<i+j;
	int list[5];
	for (int i =0; i <5;i++){
		list[i]=i;
		if(i>2) list[i] = list[i]-3;
	}
	for(int i =0;i<5;i++)
	cout << list[i]<<"";
	int i;
	i=5&6;
	cout<<"hasil operasi :"<<i;*/
	int array[4][8][16];
	int i=1;
	array[++i]=--i;
	cout<<array[0]+array[1]+array[2];
getch();
}
