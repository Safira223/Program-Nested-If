#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int a,b,c; //untuk mengelompokkan variabel
	cout<<"Program Input Bilangan Terbesar\n\n";//untuk menampilkan teks yang ingin ditulis di program
	cout<<"Input Bilangan A : ";
	cin>>a; //untuk mendapatkan input dari user
	cout<<"Input Bilangan B : ";
	cin>>b;
	cout<<"Input Bilangan C : ";
	cin>>c;
	
	if(a>b){
	  if(a>c){ //untuk memberikan pernyataan yang benar 
	  cout<<"Bilangan terbesar adalah bilangan A  : "<<a;
	}else if(c>a){ //untuk memberikan pengecualian atau pernyataan yang salah
	  cout<<"Bilangan terbesar adalah bilangan C  : "<<c;
	}
	}else if(b>a){
	  if(b>c){
	  cout<<"Bilangan terbesar adalah bilangan B  : "<<b;
	}else if(c>b){
	  cout<<"Bilangan terbesar adalah bilangan C  : "<<c;
	}
	}
	
	getch();//untuk menghentikan suatu proses yang berjalan
}
