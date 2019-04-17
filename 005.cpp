#include<iostream>
using namespace std;
bool verificar(long long num,int can){
	for(int i=1;i<=can;i++){
		if(num%i!=0)
			return false;
	}
	return true;
}
int main(){
	long long num=1;
	for(int i=1;i<=20;i++){
		if(num%i==0){
			continue;}
		else
			num*=i;
	}
	for(int i=1;i<=20;i++){
		if(verificar(num/i,20))
			num/=i;
	}
	cout<<num<<endl;
}
