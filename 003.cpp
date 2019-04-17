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
int LargestPrimeFactor(long long num){
	long i=sqrt(num);
	for(;i>=1;i--){
		if(num%i==0 && isPrime(i))
			return i;
	}
}
int main(){
	cout<<LargestPrimeFactor(600851475143)<<endl;
}
