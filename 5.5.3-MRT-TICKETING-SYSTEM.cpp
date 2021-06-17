#include<iostream>
using namespace std;
int main()
{
	cout<<"COMMUTERS SCHEDULE"<<endl;
	cout<<"Commuters Classification:        Charge:"<<endl;
	cout<<"1. Student                       8.00 PHP"<<endl;
	cout<<"2. Regular                       10.00 PHP"<<endl;
	cout<<"3. Senior                        8.00 PHP"<<endl;
	cout<<"4. Minor                         Free"<<endl;
	
	int select;
	double nof,charge,tp,ap,change;

	
	
	
	cout<<"Select Classification :";
	cin>>select;
	switch(select)
	{
		case '1' :
			
			break;
			
		case '2' :
			
			break;
		
		case '3' :
		
			break;
		
		case '4' :	
		
		break;
	}
	
	
	
	if (select == 1)
	{
		charge = 8;
		cout<<" Student                       8.00 PHP"<<endl;
			cout<<" Enter Total Number of Passengers :";
			cin>>nof;
				tp = (charge*nof);
			cout<<"Total :"<<tp<<endl;
			cout<<"Enter Amount:";
			cin>>ap;
			change = ap-tp;
			cout<<"Your Change is:"<<change;
			
	}
	else if (select == 2)
	{
		charge = 10;
		cout<<" Regular                       10.00 PHP"<<endl;
			cout<<" Enter Total Number of Passengers :";
			cin>>nof;
				tp = (charge*nof);
			cout<<"Total :"<<tp<<endl;
			cout<<"Enter Amount:";
			cin>>ap;
			change = ap-tp;
			cout<<"Your Change is:"<<change;
	}
	
		
		else if (select == 3)
	{
		charge = 8;
		cout<<" Senior                       8.00 PHP"<<endl;
			cout<<" Enter Total Number of Passengers:";
			cin>>nof;
				tp = (charge*nof);
			cout<<"Total :"<<tp<<endl;
			cout<<"Enter Amount:";
			cin>>ap;
			change = ap-tp;
			cout<<"Your Change is:"<<change;
	}
		
		else if (select == 4)
	{
		charge = 0;
		cout<<" Minor                       Free"<<endl;
			cout<<" Enter Total Number of Passengers :";
			cin>>nof;
				tp = (charge*nof);
			cout<<"Total :"<<tp<<endl;
			cout<<"Enter Amount:";
			cin>>ap;
			change = ap-tp;
			cout<<"Your Change is:"<<change;
	}
	
	
	return 0;
}
