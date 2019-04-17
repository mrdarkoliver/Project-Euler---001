#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(long long num){
	if (num<2)
		return false;
	else{
		for(long long i=2;i<=sqrt(num);i++){
			if(num%i==0)
				return false;
		}
	}
	return true;
}
int main(){
	long long sum=0;
	for (long long i=2;i<=2000000;i++){
		if(isPrime(i))
			sum+=i;
	}
	cout<<sum<<endl;
}
