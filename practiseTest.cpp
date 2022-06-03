#include<iostream>
#include<iomanip>
using namespace std;

double btp; // btp is a global variable. btp means "Basic Tax Payable"
double ftp;// ftp is a global variable. ftp  means "Final Tax Payable"

double btpcal(double income){
	if(income>=0 && income<=50000){
		btp=0;
		return btp;
	}
	else if(income>50000 && income<=100000){
		btp= (income-50000)*5/100;
		return btp;
	}
	else if(income>100000 && income<=150000){
		btp=(50000*5/100)+(income-100000)*10/100;
		return btp;
	}
	else if(income>150000 && income<=200000){
		btp=(50000*5/100)+(50000*10/100)+(income-150000)*20/100;
		return btp;
	}
	else if(income>200000 && income<=250000){
		btp=(50000*5/100)+(50000*10/100)+(50000*20/100)+(income-200000)*35/100;
		return btp;
	}
	else if(income>250000){
		btp=(50000*5/100)+(50000*10/100)+(50000*20/100)+(50000*35/100)+(income-250000)*55/100;
		return btp;
	}
	else{
		btp=0;
		return btp;
	}
}

double finaltaxwithone(int child){
	if(child==1){
		ftp=btp-(btp*5/1000);
		return ftp;
	}
}

double finaltaxwithtwo(int child){
	if(child==2){
		ftp=btp-(btp*13/1000);
		return ftp;
	}
}
double finaltaxwith3(int child){
	if(child>=3){
		ftp=btp-(btp*25/1000);
		return ftp;
	}
}


int main(void){
	double income;
	cout<<"Income"<<setw(35)<<"Tax without deduction"<<setw(35)<<"Tax with deduction\n";
	cout<<setw(55)<<"1 child"<<setw(15)<<"2 children"<<setw(15)<<"3 children\n";
	
	while(true){
		
	cin>>income ;
	
	
	double x=btpcal(income);
	double y=finaltaxwithone(1);
	double z=finaltaxwithtwo(2);
	double w=finaltaxwith3(3); 
	
	
	cout<<setw(30)<<x<<setw(25)<<y<<setw(15)<<z<<setw(15)<<w<<"\n";
}
	
}
