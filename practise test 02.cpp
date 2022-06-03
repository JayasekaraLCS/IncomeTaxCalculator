#include<iostream>
#include<iomanip>
using namespace std;
string stname;
int mmarks;
int smarks;
int hmarks;
int emarks;

void insertdata(string name[],int math[],int sci[],int his[],int eng[],int loc){
		for(int x=0;x<=loc-1;x++){
			//for insert the students name to the name array.
			
				cout<<"Enter the "<<x+1<<" Student Name,Maths,Science,English and History marks accordingly: ";
				cin>>stname>>mmarks>>smarks>>emarks>>hmarks;
				name[x]=stname;
				math[x]=mmarks;
				sci[x]=smarks;
				eng[x]=emarks;
				his[x]=hmarks;
			
		}		
}

void printdata(string name[],int math[],int sci[],int eng[],int his[],int nstu){
	int total[nstu];
	
		cout<<"\n\n"<<setw(10)<<"ST Name"<<setw(25)<<"Maths"<<setw(15)<<"Science"<<setw(15)<<"English"<<setw(15)<<"History"<<setw(16)<<"Total\n";
	for(int x=0;x<=nstu-1;x++){
		total[x]=math[x]+sci[x]+eng[x]+his[x];
		cout<<setw(10)<<name[x]<<setw(25)<<math[x]<<setw(15)<<sci[x]<<setw(15)<<eng[x]<<setw(15)<<his[x]<<setw(15)<<total[x]<<"\n";
	}
	
	for(int z=0;z<=nstu;z++){
		
	for(int x=0;x<=nstu-2;x++){
		int t;
		if(total[x]>total[x+1]){
			int t;
			t=total[x];
			total[x]=total[x+1];
			total[x+1]=t;
		}
	}
	}
		
	cout<<"\n\nAggregate marks of the examination in ascending order\n";
	for(int y=0;y<=nstu-1;y++){
		cout<<total[y]<<"\n";
	}
}


int main(void){
	int nstu;
	int loc;
	
	//validating the no of students in the class.
	while(true){
		cout<<"How many students in the class: ";
		cin>>nstu;
		
		if(nstu>=1 && nstu<=40){
			loc=nstu;
			break;
		}
		else if(nstu==0){
			cout<<"at least 1 student should be in the class to use the programme.\n\n";
		}
		else{
			cout<<"This programme supported for maximum 40 students..\n\n";
		}
		
	}
	
	
	string name[loc];
	int math[loc];
	int sci[loc];
	int his[loc];
	int eng[loc];
	
	insertdata(name,math,sci,his,eng,nstu);
	
	printdata(name,math,sci,eng,his,nstu);
	
}
