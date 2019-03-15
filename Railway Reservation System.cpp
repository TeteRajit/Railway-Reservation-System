#include<iostream>
using namespace std;
#define MAX 10
class passenger
{
private:
    char name[30];
    int age;
public:
    void getDetails(void);
    void putDetails(void);
};
void passenger::getDetails(void){
    cout<< "Enter name: " ;
    cin>>name;
    cout<< "enter age: ";
    cin>>age;
}
 
void passenger::putDetails(void){
    cout<<"passenger details:\n";
    cout<<"Name:"<<name<<",age:"<<age;
}

int main()
{
	passenger std[MAX];
	int logout,dd,paymentproceed,mm,yy,n,quota,clas,bank,booktickets,contin,fare,i,age,sex,trainno,loop,service,pnrstatus,cancel;
	char fromstation[30];
	char tostation[30];
	char username[20];
	char password[30];
	char weekday;
	char bankusername[20];
	char bankpassword[30];
	cout<<"\n\n*********************************welcome to IRCTC********************************\n\n";
	cout<<"\nUSERNAME:";
	cin>>username;
	cout<<"\nPASSWORD:";
	cin>>password;
	menu:cout<<"\n\nenter the service do you want "<<"\n1.train enquiry"<<"\n2.ticket reservation"<<"\n3.ticket cancellation";
	cin>>service;
	if(service==1)
	{
	cout<<"\n\n\n***********************welcome to the IRCTC train enquiry********************************\n\n";
	cout<<"\nenter from station:";
	cin>>fromstation;
	cout<<"\nenter to station:";
	cin>>tostation;
	cout<<"\n\nenter to which date you want to travel(dd-mm-yy):\n";
	cin>>dd>>mm>>yy;
	cout<<"\n\nthe trains available are\n"<<"1.	T.NO 170543\t"<<fromstation<<" to "<<tostation<<" express\n"<<"2.	T.NO 164893\t"<<fromstation<<" to "<<tostation<<" passenger"<<endl;
	cout<<"\n\ntrain no 1 is available on the days M	TH	SA\n\n";
	cout<<"\n\ntrain no 2 is available on the days M	T	W	TH	F	SA	SU\n\n";
	cout<<"\n\nplease select the train 1 or 2:";
	cin>>trainno;
	cout<<"\n\npls select the which week day you want to travel:";
	cin>>weekday;
	if(trainno==1)
	{
		if(weekday=='M'||weekday=='TH'||weekday=='SA')
		{
			cout<<"\n\ncertainly will take you to the next step\n";
		}
		else
		{
			cout<<"\n\nenter the correct week day present";
			goto notcontinue;
		}
	}
	if(trainno==2)
	{
		if(weekday=='M'||weekday=='T'||weekday=='W'||weekday=='TH'||weekday=='F'||weekday=='SA'||weekday=='SU')
		{
			cout<<"\n\ncertainly will take you to the next step\n";
		}
		else
		{
			cout<<"\n\nenter the corrct week day present";
			goto notcontinue;
		}
	}
	cout<<"\n\nenter class do you want to have the seat/s:\n1.general\n2.chaircar\n3.sleeperclass\n4.firstclass\n5.A.C two tired\n6.A.C three tired\n";
	cin>>clas;
	switch(clas)
	{
		case 1:cout<<"\nthe general class has 120 seats available\t"<<"the fare is 500 rupees"<<endl;
		break;
		case 2:cout<<"\nthe chaircar class has 30 seats available\t"<<"the fare is 300 rupees"<<endl;
		break;
		case 3:cout<<"\nthe sleeper class has 63 seats available\t"<<"the fare is 800 rupees"<<endl;
		break;
		case 4:cout<<"\nthe first class has 10 seats available\t"<<"the fare is 5000 rupees"<<endl;
		break;
		case 5:cout<<"\nthe A.C two tire has a waiting list of 33\t"<<"the fare is 3000 rupees"<<endl;
		break;
		case 6:cout<<"\nthe A.C three tire has a waiting list of 2\t"<<"the fare is 1500 rupees"<<endl;
		break;
	}
		cout<<"\n\nto log out your account enter 1";
		cin>>logout;
		if(logout==1)
		{
			goto notcontinue;
		}
		else
		{
			goto menu;
		}
		
	}
	if(service==2)
	{
	cout<<"\n\n\n*******************welcome to IRCTC ticket reservation*******************\n\n";
	cout<<"\nenter from station:";
	cin>>fromstation;
	cout<<"\nenter to station:";
	cin>>tostation;
	cout<<"\n\nenter to which date you want to travel(dd-mm-yy):";
	cin>>dd>>mm>>yy;
	cout<<"\n\nthe trains availabla are\n"<<"1.	T.NO 170543\t"<<fromstation<<" to "<<tostation<<" express\n"<<"2.	T.NO 164893\t"<<fromstation<<" to "<<tostation<<" passenger"<<endl;;
	cout<<"\n\nthe trains available are\n"<<"1.	T.NO 170543\t"<<fromstation<<" to "<<tostation<<" express\n"<<"2.	T.NO 164893\t"<<fromstation<<" to "<<tostation<<" passenger"<<endl;
	cout<<"\n\ntrain no 1 is available on the days m	th	sa\n\n";
	cout<<"\n\ntrain no 2 is available on the days m	t	w	th	f	sa	su\n\n";
	cout<<"\n\nplease select the train 1 or 2:";
	cin>>trainno;
	cout<<"\n\npls select the which week day you want to travel:";
	cin>>weekday;
	if(trainno==1)
	{
		if(weekday=='m'||weekday=='th'||weekday=='sa')
		{
			cout<<"\n\ncertainly will take you to the next step\n";
		}
		else
		{
			cout<<"\n\nenter the correct week day present";
			goto notcontinue;
		}
	}
	if(trainno==2)
	{
		if(weekday=='m'||weekday=='t'||weekday=='w'||weekday=='th'||weekday=='f'||weekday=='sa'||weekday=='su')
		{
			cout<<"\n\ncertainly will take you to the next step\n";
		}
		else
		{
			cout<<"\n\nenter the corrct week day present";
			goto notcontinue;
		}
	}
	cout<<"\n\nwhich quota do u want:\n1.general\n2.=ladies\n3.seniorcitizen\n4.physicallyhadicaped\n5.tatkal\n6.currentreservation\n";
	cin>>quota;
	switch(quota)
	{
		case 1:cout<<"\nyou have selected general quota..\n";
		break;
		case 2:cout<<"\nyou have selected ladies quota..\n";
		break;
		case 3:cout<<"\nyou have selected seniorcitizen quota..\n";
		break;
		case 4:cout<<"\nyou have selected physically handicaped quota..\n";
		break;
		case 5:cout<<"\nyou have selected tatkal quota..\n";
		break;
		case 6:cout<<"\nyou have selected current reservation..\n";
		break;
		default:cout<<"\nenter the correct quota...\n";
	}
	cout<<"\n\nin which class do you want to have the seat/s:\n1.general\n2.chaircar\n3.sleeperclass\n4.firstclass\n5.A.C two tired\n6.A.C three tired\n";
	cin>>clas;
	switch(clas)
	{
		case 1:cout<<"\nthe general class has 120 seats available\t"<<"the fare is 500 rupees"<<endl;
		break;
		case 2:cout<<"\nthe chaircar class has 30 seats available\t"<<"the fare is 300 rupees"<<endl;
		break;
		case 3:cout<<"\nthe sleeper class has 63 seats available\t"<<"the fare is 800 rupees"<<endl;
		break;
		case 4:cout<<"\nthe first class has 10 seats available\t"<<"the fare is 5000 rupees"<<endl;
		break;
		case 5:cout<<"\nthe A.C two tire has a waiting list of 33\t"<<"the fare is 3000 rupees"<<endl;
		break;
		case 6:cout<<"\nthe A.C three tire has a waiting list of 2\t"<<"the fare is 1500 rupees"<<endl;
		break;
		default:cout<<"\nenter the correct class do u want";
	}
	cout<<"\n\ndo you want to continue for booking (yes=1,no=0)\n";
	cin>>contin;
	if(contin==1)
	goto forcontinue;
	else
	goto notcontinue; 
	forcontinue: cout <<"\n\nEnter total number of passengers: ";
    cin >> n;
     
    for(loop=0;loop< n; loop++){
        cout << "\nEnter details of passengers " << loop+1 << ":\n";
        std[loop].getDetails();
    }
     
    cout << endl;
	cout<<"\n\ndo you want to book the tickets (1=yes,0=no)\n";
	cin>>booktickets;
	if(booktickets=1)
	{
		cout<<"\nyou are in the netbanking option..\n";
		cout<<"\nplease select the bank for the payment:\n";
		cout<<"1.state bank of india.\n";
		cout<<"2.indian bank.\n";
		cout<<"3.syndicate bank.\n";
		cout<<"4.bank of baroda.\n";
		cout<<"5.axis bank.\n";
		cout<<"6.karur vysya bank.\n";
		cout<<"7.andhra bank\n";
		cin>>bank;
		switch(bank)
		{
			case 1:cout<<"\n\t\twelcome to the state bank of india\n";
			break;
			case 2:cout<<"\n\t\twelcome to the indian bank\n";
			break;
			case 3:cout<<"\n\t\twelcome to the syndicate bank\n";
			break;
			case 4:cout<<"\n\t\twelcome to the bank of baroda\n";
			break;
			case 5:cout<<"\n\t\twelcome to the axis bank\n";
			break;
			case 6:cout<<"\n\t\twelcome to the karur vysya bank\n";
			break;
			case 7:cout<<"\n\t\twelcome to the andhra bank\n";
			break;
			default:cout<<"enter correct bank no...";
		}
		cout<<"username:";
		cin>>bankusername;
		cout<<"password:";
		cin>>bankpassword;
		cout<<"do you want to proceed for the payment(1=yes,0=no):";
		cin>>paymentproceed;
		if(paymentproceed=1)
		{
			goto next;
		}
		else
		{
			goto notcontinue;
		}
	}
	else
	{
		goto notcontinue;
	}
	next:cout<<"\nthe tickets are booked for the given information \n";
	cout<<"\nfrom station:"<<fromstation<<endl;
	cout<<"\nto station:"<<tostation<<endl;
	cout<<"\npnr number 6745839251";
	for(loop=0;loop< n; loop++)
	{
    	cout<< (loop+1) << ":\n";
	    std[loop].putDetails();
	}

	if(quota==1)
	{
		cout<<"\nquota:general\n";
	}
	else if(quota==2)
	{
		cout<<"quota:ladies\n";
	}
	else if(quota==3)
	{
		cout<<"quota:seniorcitizen\n";
	}
	else if(quota==4)
	{
		cout<<"quota:physically handicaped\n";
	}
	else if(quota==5)
	{
		cout<<"quota:tatkal\n";
	}
	else
	{
		cout<<"qouta:current reservation\n";
	}
	if(clas==1)
	{
		cout<<"\nclass:general"<<endl;
	}
	else if(clas==2)
	{
		cout<<"\nclass:chair car"<<endl;
	}
	else if(clas==3)
	{
		cout<<"\nclass:sleeper class"<<endl;
	}
	else if(clas==4)
	{
		cout<<"\nclass:first class"<<endl;
	}
	else if(clas==5)
	{
		cout<<"\nclass:A.C two tire"<<endl;
	}
	else
	{
		cout<<"\nclass:A.C three tire"<<endl;
	}
	cout<<"seats:"<<n<<endl;
	if(clas==1)
	{
		fare=n*500;
		cout<<"\ntotal fare:"<<fare<<endl;
	}
	else if(clas==2)
	{
		fare=n*300;
		cout<<"\ntotal fare:"<<fare<<endl;
	}
	else if(clas==3)
	{
		fare=n*800;
		cout<<"\ntotal fare:"<<fare<<endl;
	}
	else if(clas==4)
	{
		fare=n*5000;
		cout<<"\ntotal fare:"<<fare<<endl;
	}
	else if(clas==5)
	{
		fare=n*3000;
		cout<<"\ntotal fare:"<<fare<<endl;
	}
	else
	{
		fare=n*1500;
		cout<<"\ntotal fare:"<<fare<<endl;
	}
	
	cout<<"\nto log out your account enter 1";
	cin>>logout;
		if(logout=0)
		{
			goto menu;
		}
		else
		{
			cout<<"\nyou are logged out.....";
			goto notcontinue;	
		}
	}
	if(service==3)
	{
	cout<<"\n\n***************************welcome to IRCTC ticket cancellation*****************************";
	cout<<"\nenter from station:";
	cin>>fromstation;
	cout<<"\nenter to station:";
	cin>>tostation;
	cout<<"\nenter the pnr number";
	cin>>pnrstatus;
	cout<<"\nthe given pnr number is the ticket from "<<fromstation<<" to "<<tostation<<endl;
	cout<<"\nwould you like to cancel the ticket(1=yes,0=no):";
	cin>>cancel;
	if(cancel=1)
	{
		goto cancelticket;
	}
	else
	{
		goto menu;
	}
	cancelticket:cout<<"\nthe ticket has been cancelled of the pnr number"<<pnrstatus<<endl;
	cout<<"\nto log out your account enter 1";
	cin>>logout;
	if(logout=0)
	{
		goto menu;
	}
	cout<<"\nyou are logged out....";
	goto notcontinue;
	}
	notcontinue:cout<<"\nyou are out of the page...."<<"\n visit again...!";
	cout<<"you are logged out\n";
	cout<<"\nthank you for visiting";
	return 0;	
}
