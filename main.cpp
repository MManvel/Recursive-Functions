#include <iostream>

long long power(int a,int b){
	if(b==0)return 1;
	return a * power(a,b-1);
}

int main(){
	int a,b;
	std::cin>>a>>b;
	std::cout<<power(a,b)<<std::endl;
	return 0;
}
