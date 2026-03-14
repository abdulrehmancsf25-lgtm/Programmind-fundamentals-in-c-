#include<iostream>
 
using namespace std;
int main() {
	int salary,tax,alpha;
	cout<<"Your salary ";
	cin >> salary ;
	if (salary<=600000) {
		cout<<" total tax = 0";
		
	}
else if (salary > 600000 && salary < 1200001) {
	cout<<"Tax on first 600000 = 0 \t"<< endl;
	alpha= salary-600000;
	tax=(alpha * 5)/100;
	cout<<"Tax on extra amount above 600000:\t  "<< tax <<endl;
	cout<<" total tax : "<<tax;
	
	
}
else if (salary>1200000 && salary<2400001) {
	cout<<"Tax on First 1200000 \t= 30000 "<<endl;
	alpha = salary-1200000;
	tax=(alpha * 15)/100;
	cout<<"Tax on extra amount above 12 lac :\t  "<<tax<<endl;
	cout<<" total tax : "<<30000+tax;
}
else if (salary>2400000 && salary<3600001) {
	cout<<"Tax on First 2400000 = 210,000 \t"<<endl;
	alpha = salary-2400000;
	tax=(alpha *20)/100;
	cout<<"Tax on extra amount above 24 lac :  \t"<<tax<<endl;
	cout<<" total tax : "<<210000+tax;
}

else if (salary>3600000 && salary<4800001) {
	cout<<"Tax on First 3600000 = 450,000 \t "<<endl;
	 alpha = salary-3600000;
	tax=(alpha*25)/100;
	cout<<"Tax on extra amount above 36 lac :  \t"<<tax<<endl;
	cout<<" total tax : "<<450000+tax;
}	
	else if (salary>4800000 && salary<6000001) {
	cout<<"Tax on First 4800000 = 750,000 \t"<<endl;
	alpha= salary-4800000;
	tax=(alpha *30)/100;
	cout<<"Tax on extra amount above 48 lac : \t "<< tax<<endl;
	cout<<" total tax : "<<750000+tax;
}	
	else if (salary>6000000 ) {
	cout<<"Tax on First 6000000 = 1110000\t "<<endl;
	alpha = salary-6000000;
	tax=(alpha *35)/100;
	cout<<"Tax on extra amount above 60 lac : \t "<<tax<<endl;
	cout<<" total tax : " << 1110000+tax;
}	
	return 0;
}