#include<iostream>
using namespace std;
int main(){
	int sum=0;
	for (int i=1,j=1,aux=0;i<4000000;aux=i+j,i=j,j=aux){
		if(i%2==0)
			sum+=i;
	}
	cout<<sum<<endl;
}
