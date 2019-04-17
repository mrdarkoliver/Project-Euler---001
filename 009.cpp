#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int num;
	for(int i=1;i<=1000;i++){
		for(int j=i;j<=1000;j++){
			for(int k=j;k<=1000;k++){
				if((pow(i,2)+pow(j,2)==pow(k,2)) && ((i+j+k)==1000))
					num=i*j*k;
			}
		}
	}
	cout<<num;
	
}
//31875000

