#include<iostream>
#include<math.h>
using namespace std;
int NDigitos(int num){
	int c=0;
	while(num>0){
		num/=10;
		c++;
	}
	return c;
}
int GetDigit(int num,int pos){
	int res = num/pow(10,pos);
	res = res%10;
	return res;
}
bool IsPalNum(int num){
	int tam=NDigitos(num);
	for(int i=0,j=tam-1;i<j;i++,j--){
		int num1=GetDigit(num,i);
		int num2=GetDigit(num,j);
		if (num1!=num2)
			return false;
	}
	return true;
}
int main(){
	int mayor=0;
	for(int i=999;i>=100;i--){
		for(int j=999;j>=100;j--){
			if(IsPalNum(i*j)){
				int aux=i*j;
				if (aux>mayor)
					mayor=aux;
			}
		}
	}
	cout<<mayor<<endl;
}
