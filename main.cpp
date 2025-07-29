#include <iostream>


void PrintNumbers(int current,int n){
	if(current>n)return;
	std::cout<<current;
	if(current<n)std::cout<<" ";
	printNumbers(current+1,n);
}

int main(){
	int N;
	cin>>N;
	printNumbers(1,N);
	return 0;

}
