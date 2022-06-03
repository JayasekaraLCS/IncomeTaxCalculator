#include<iostream>
using namespace std;

int add2num(int a, int b){
	int total;
	total = a+b;
	return total;
}

int main(){
	int x,y;
	cout<<"Enter 2 numbers --> ";
	cin>>x>>y;
	cout<<add2num(x,y);
}
