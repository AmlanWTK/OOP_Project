#include<iostream>
#include<string>
#include<conio>
#include<fstream>
#include<unistd.h>
#include<windows.h>
using namespace std;
class one
{


public:
	void menu1();

};
void one::menu1()
{

		cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO MY FOOD ORDERING SYSTEM =========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Veggie Supreme (Rs.480)\t\t\t[2] Exotica Pizza(Rs.440)\t\t\t\t[3] Chicken Sizzler (Rs.580)\n\t[4] Chrispy Chicken (Rs.520)\t\t\t[5] Spaghetti (Rs.350)\t\t\t\t\t[6] Country Feast (Rs.400)\n\t[7] Tetrazzini (Rs.420)\t\t\t\t[8] Double Cheese (Rs.540)\t\t\t\t[9] Makizushi (Rs.548)\n\t[10] Ham Burger (Rs.390)\t\t\t[11] Margherita Pizza(Rs.525)\t\t\t\t[12] Fish 'n' Chips (Rs.425)\n\t[13] Fajitas (Rs.335)\t\t\t\t[14] Tempura (Rs.324)\t\t\t\t\t[15] Hot Dog (Rs.360)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
 cout<<"\n\t======================================================================================================================================="<<endl;
}
	class two:public one
	{
	protected:
		 int  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0;
     string y,ye;
     public:
void menu2()
{    ofstream write;
write.open("order.text");
if(!write)
{
	cout<<"File can not be opened"<<endl;
	exit (-1);
}

   a:
   	b:
   		c:
   	 cout<<"\n\n\tENTER YOUR ORDER (You can order one at a time): ";
      cin>>ch;


  cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER? (y/n) :";

  cin>>ye;

  if(ye=="y"|| ye=="Y")
  {
  	goto b;
  }
  else
  {
   switch(ch)
   {


   	case 1:
        cout<<"\n\n\tHOW MANY PIZZA Do YOU WANT? :";
   		cin>>pizza;
   		a=400;
   		s=s+a*pizza;
   		write<<"YOU ORDER  Veggie Supreme : 400";
   		write<<" \n";
   		write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Veggie Supreme "<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;

   	break;



   	case 2:
   		cout<<"\n\n\tHOW MANY PIZZA DO YOU WANT? :";
   		cin>>pizza;

		   b=350;
   		s=s+b*pizza;
   		write<<"YOU ORDER  Exotica : 350";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Exotica "<<endl<<"\tYOUR ORDER IS SUCCESSFULLY RECEIVED "<<endl;
   	break;


   	case 3:
   		cout<<"\n\n\tHOW MANY CHICKEN SIZZLER DO YOU WANT? :";
   		cin>>pizza;

   		c=300;
   		s=s+c*pizza;
        write<<"YOU ORDER  Chicken Sizzler : 300";
         write<<" \n";
        write<<"NUMBER OF Chicken Sizzler IS : "<<pizza;
   		 write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Chicken Sizzler "<<endl<<"\tYOUR ORDER IS SUCCESSFULLY RECEIVED "<<endl;
   	break;



    case 4:
   		cout<<"\n\n\tHOW MANY CHRISPY CHICKEN DO YOU WANT? :";
   		cin>>pizza;

   		d=450;
   		s=s+d*pizza;
   		write<<"YOU ORDER  CHRISPY Chicken : 450";
     	write<<" \n";
   		write<<"NUMBER OF CHRISPY Chicken IS : "<<pizza;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER  Chrispy Chicken "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
    	break;

   	case 5:
   		cout<<"\n\n\tHOW MANY SPAGHETTI DO YOU WANT?:";
   		cin>>pizza;

   		e=350;
   		s=s+e*pizza;
   		write<<"YOU ORDER  Spaghetti : 350";
   		write<<" \n";
   			write<<"NUMBER OF Spaghetti IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Spaghetti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 6:
   		cout<<"\n\n\tHOW MANY PIZZA DO YOU WANT?:";
   		cin>>pizza;

   		f=400;
   		s=s+f*pizza;
   		write<<"YOU ORDER Country Feast : 400";
   		write<<"\n ";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Country Feast "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 7:
   		cout<<"\n\n\tHOW MANY TETRAZZINI DO YOU WANT?:";
   		cin>>pizza;

   		g=350;
   		s=s+g*pizza;
   		write<<"YOU ORDER Tetrazzini : 350";
   		write<<"\n ";
   			write<<"NUMBER OF Tetrazzini IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Tetrazzini "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 8:
   		cout<<"\n\n\tHOW MANY PIZZA DO YOU WANT? :";
   		cin>>pizza;

   		h=500;
   		s=s+h*pizza;
   		write<<"YOU ORDER Double Cheese : 500";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Double Cheese "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

	case 9:
	cout<<"\n\n\tHOW MANY MAKIZUSHI DO YOU WANT? :";
   		cin>>pizza;

		i=500;
		s=s+i*pizza;
		write<<"YOU ORDER Makizushi : 500";
		write<<" \n";
			write<<"NUMBER OF Makizushi IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Makizushi "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 10:
   		cout<<"\n\n\tHOW MANY HAM BURGER DO YOU WANT? :";
   		cin>>pizza;

   		j=390;
   		s=s+j*pizza;
   		write<<"YOU ORDER Ham Burger : 390";
   		write<<" \n";
   			write<<"NUMBER OF Ham Burger IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Ham Burger "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 11:
   			cout<<"\n\n\tHOW MANY PIZZA DO YOU WANT? :";
   		cin>>pizza;

   		k=525;
   		s=s+k*pizza;
   		write<<"YOU ORDER Margherita : 525";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Margherita "<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 12:
   		cout<<"\n\n\tHOW MANY FISH 'n' CHIPS YOU WANT :";
   		cin>>pizza;

   		l=425;
   		s=s+l*pizza;
   		write<<"YOU ORDER Fish 'n' Chips : 425";
   		write<<" \n";
   			write<<"NUMBER OF Fish 'n' Chips IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Fish 'n' Chips "<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 13:
   		cout<<"\n\n\tHOW MANY FAJITAS YOU WANT :";
   		cin>>pizza;

   		m=330;
   		s=s+m*pizza;
   		write<<"YOU ORDER  Fajitas  : 330";
   		write<<" \n";
   			write<<"NUMBER OF Fajitas IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Fajitas "<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 14:
   		cout<<"\n\n\tHOW MANY TEMPURA DO YOU WANT :";
   		cin>>pizza;

   		n=320;
   		s=s+n*pizza;
   		write<<"YOU ORDER Tempura : 320";
   		write<<" \n";
   			write<<"NUMBER OF Tempura IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Tempura "<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 15:
   		cout<<"\n\n\tHOW MANY HOT DOG DO YOU WANT? :";
   		cin>>pizza;

   		o=360;
   		s=s+o*pizza;
   		write<<"YOU ORDER  Hot Dog : 360";
   		write<<"\n ";
   			write<<"NUMBER OF Hot Dog IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Hot Dog "<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 16:
   		cout<<"\n\t\t\t\t\t The Food Management Project";
   	exit(0);
   	break;

   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	for(int a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "...";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : B1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  Sifat"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;


  write.close();
  }
  void show1()
  {
  	menu1();
  	menu2();
  }

};
class three:public one,public two
{
	public:
		void total()
      {
      		long userId;

			d:
			cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t---------------------";
			cout<<"\n\t\t\t\t\t\t\tEnter Login Id = ";
			cin>>userId;
			cout<<"\t\t\t\t\t\t\t---------------------";
			if(userId!=123)
			{
				cout<<"\nDon't try to be smart.....Enter correct id\n";
				goto d;
			}
			else
			cout<<"\n\n\n\t\t\t\t\t\t\tHello Code-Projects,\n";
			z:
			string pwd="food";  //password
			string pass="";  //empty string
			char c;
				cout<<"\n\n\n\t\t\t\t\t\t\tPassword = ";
				p:
				c=getch();
				cout<<"*";   //for printing * instead for password
				if(c!=13)
				{
					pass=pass+c;  //for concatenating the string
					goto p;
				}

      			{
      			if(pass==pwd)
      			{
      				cout<<"\n\n\t\t\t\t\t\t\tAccess Granted. Welcome to my food ordering system\n\n\n";
      				system("PAUSE");
      				system("CLS");
      				show1();
				}
				else
				{
				cout<<"\nWrong Password. Don't try to become smart\n";
				goto z;
				}
			}
		}
};
int main()
{
   three ob;
   ob.total();
   getch();
}
