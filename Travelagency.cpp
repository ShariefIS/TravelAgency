#include<iostream.h>
#include<unistd.h>
int c=0;
long int pswd=373940,psd;
class travel
{
private:
	char ch,name[20],addr[100],;
	long int phn;
	FILE *fp[10];
	 int destf,dest,mot,seats;
public:
	travel()
	{
		system("clear");
		cout<<"\n\n\n\t\t\tWELCOME TO AIS TRAVEL AGENCY"<<endl;
		cout<<"\n\t\t\t\tEnter your choice.."<<endl;
		cout<<"\t\t\t\t1.Admin Login\n\t\t\t\t2.Registrations\n\t\t\t\t3.Search Booking\n\t\t\t\t4.Exit"<<endl;	
		cin>>ch;
		switch(ch)
		{
			case '1':
				Admin();
				break;
			case '2':
				Reg();
				break;
			case '3':
				//srch();
				break;
			case '4':	
				exit(1);
		}
	}
	void Admin()
	{	
		label:
		cout<<"\n\t\t\t\tADMINISTRATION\n"<<endl;
		cout<<"\nEnter admin password:";
		cin>>psd;
		if(c!=2)
		{
			if(pswd==psd)
			{
				cout<<"\n\t\t\t1.Modify\n\t\t\t2.Password Change\n\t\t\t3.Exit";
				cin>>ch;
				switch(ch)
				{
					case '1':
						//modify();
						break;
					case '2':
						cout<<"\n\t\tEnter new password:"<<endl;
						cin>>pswd;
						travel();
						break;
					case '3':
						travel();
						break;
				}
			}
			else
			{	
				cout<<"\n\t\tEntered Password is Incorrect"<<endl;
				c++;
				if(c==2)
				{
					c=0;
					travel();	
				}
				goto label;
			}
		}
	}
	void Reg()
	{
		system("clear");
		cout<<"\n\t\t\t\tREGISTRATION\n"<<endl;
		cout<<"\n\n\t\t\t\tEnter your choice:";
		cout<<"\n\t\t\t1.Old Coustomer\n\t\t\t2.New Registration\n\t\t\t3.Exit";
		cin>>ch;
		switch(ch)
		{
			case '1':
				Oldcoustr();
				break;
			case '2':
				Booking();
				break;
			case '3':	
				exit(1);
	    }
	}
	void Booking()
	{
		cout<<"\n\t\t\t\tNEW BOOKING \n"<<endl;
		cout<<"\n\t\tEnter Details\n";
		cout<<"\n\t\tName: ";
		cin>>name;
		cout<<"\n\t\tPhone Number: ";
		cin>>phn;
		cout<<"\n\t\tAddress:";
		cin>>addr;
		cout"\n\t\tDate of journey";
		cin>>date;	cout<<"\n\t\tDestination:\n\t1.Hyderabad\n\t2.Delhi\n\t3.Kolkata\n\t4.Chennai\n\t5.Banglore\n\t6.Mumbai\n\t7.Goa\n\t9.Agra";
		cout<<"\n\t\tEnter Destination option: ";
		cin>>destf;
		cin>>date;	cout<<"\n\t\tDestination:\n\t1.Hyderabad\n\t2.Delhi\n\t3.Kolkata\n\t4.Chennai\n\t5.Banglore\n\t6.Mumbai\n\t7.Goa\n\t9.Agra";
		cout<<"\n\t\tEnter Destination option: ";
		cin>>dest;
		switch(destf)
		{
			case 1:
			       if(destf==dest)
				   			throw "Invalid Destination";
					if(dest=2)
					{
						cout<<"\nEnter mode of Transport: ";
						cout<<"\n1.Bus\n2.Train\n3.Car";
						cin>>mot;
						switch(mot)
						{
							case 1:		
								int avl=Avail();
								cout<<"\nCosts ";cout<<"\nThe available seats are: "<<avl;
								cout<<"\nEnter number of seats to reserve";
								cin>>seats;
								if(seats<=avl)
								{
									cout
								}
																
						}
					}		   
				
		}
};
int main()
{
	travel t1;
	
}
