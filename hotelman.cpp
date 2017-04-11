#include<iostream.h>
#include<conio.h>
#include<string.h>
#include <time.h>
#include<ctype.h>
#include<process.h>
#include<fstream.h>
int trap=0;
struct logindata
{
char username[10];
char password[10];
};
struct logindata l[6]=
{
	{"Abhishek","Abhishek"},{"abhishek","abhishek"},{"112233","112233"},{"admin","12345"},{"Admin","12345"}
} ;
void login();
void coupd();
void coup();
void gen();
void dlx();
void spd();

void login()
{
cout<<"Welcome to Hotel Abhi system software"<<"\n";
cout<<"Please Enter your username.. : ";
cin>>l[5].username;
cout<<"\n";
cout<<"Please enter your password.. : ";
cin>>l[5].password;
char *temp5=l[5].username;
char *temp6=l[5].password;

/**************************************************************************/
//Now these two variables contain username and password
//Now we have predefined 4 sets of usenames and passwords for our progam initially
//Now declaring the first det of usenames and passwords

/******************************************************************
l[1].username='Ankeet';
l[1].password='Ankeet';
l[2].username='Neel';
l[2].password='Neel';
l[3].username='Subodh';
l[3].password='Subodh';
l[4].username='Teacher';
l[4].password='Teacher';

//These were the perdefined passwods and user ids selected by this Software
//Now there is one master admin also declared..... he can add usenames and passwods;
*/
ofstream fout;
fout.open("loginid.dat", ios::out | ios::binary);
//This statement opens the binary file
int i=0;
for(i=0;i<5;i++)
{ fout.write((char*) &l[i],sizeof(logindata));
  // All four detaild get inserted into file
}
//Now authentication of the system begins
//l[6] is da given data supplied by the user
//let us declare another stucture variable for the above process
//let it be temp;
fout.close();
logindata temp1;
ifstream fin;
fin.open("loginid.dat", ios::in | ios::binary |ios::app);
while((!fin.eof()) && trap==0)
{
//This is supposed to be done till the end of file is reached and trap is zero
fin.read((char*) &temp1, sizeof(logindata));
int z= strcmp(temp1.username,temp5);
if(z==0)//This means that they are equal i.e. strings match
				{
				 int z2=strcmp(temp1.password,temp6);
				 if(z2==0)
							{
							 trap=1;
							}
				}

}fin.close();
if (trap==0)
{
cout<<"The entered usernames and passwords do not match ........please contact the administrator";
getch();
exit(0);
}
};

class room
{
  protected:
	    int  r_no;
	    int  r_charge;
	    char r_cust[20];
	    char c_city[20];
	    int  c_mem;
	    char c_nat[20];
	    char r_avail;
	    int  r_per;
	    int  no;
	    char type[20];
	    int  charge;
	    char cust[20];
	    char avail;
	    int  per;
	    int year;
	    int mon;
	    int day;
  public:
	    char r_type[20];
	    char getavail()
	    {
	     return(r_avail);
	    }

	     void  getr1()
	    {
	      r_no=1;
	      strcpy(r_type,"Sp Dlx");
	      r_charge=1500;
	      r_avail='Y';
	      strcpy(r_cust,"N.A");
	      r_per=0;
	    }
	    void  getr2()
	    {
	      r_no=2;
	      strcpy(r_type,"Dlx");
	      r_charge=1000;
	      r_avail='Y';
	      strcpy(r_cust,"N.A");
	      r_per=0;
	    }

	    void  getr3()
	    {
	      r_no=3;
	      strcpy(r_type,"Gen");
	      r_charge=750;
	      r_avail='Y';
	      strcpy(r_cust,"N.A");
	      r_per=0;
	    }
	    void  getr4()
	    {
	      r_no=4;
	      strcpy(r_type,"Coupl");
	      r_charge=1250;
	      r_avail='Y';
	      strcpy(r_cust,"N.A");
	      r_per=0;
	    }
	    void  getr5()
	    {
	      r_no=5;
	      strcpy(r_type,"C Dlx");
	      r_charge=1500;
	      r_avail='Y';
	      strcpy(r_cust,"N.A");
	      r_per=0;
	    }



	    void putinfo()
	     {
	      cout<<"\n"<<r_no<<"\t "<<r_type<<"\t "<<r_charge<<"\t   "<<r_avail<<"\t        "<<r_cust<<"\t    "<<r_per;

	     }

	    void modify()
	     {
	      cout<<"\n Enter modifyied data";
	      cout<<"\n____________________________________________________________________________";
	      cout<<"\n Enter Room no :";
	      cin>>no;
	      cout<<"\n Enter Room type :";
	      cin>>type;
	      cout<<"\n Enter Room charges :";
	      cin>>charge;
	      cout<<"\n Enter Room Availability :";
	      cin>>avail;
	      cout<<"\n Enter name of cust living :";
	      cin>>cust;
	      cout<<"\n For how many days cust want the room :";
	      cin>>per;
	      cout<<"\n...... Data is modified";
	      r_no=no;
	      strcpy(r_type,type);
	      r_charge=charge;
	      r_avail=avail;
	      strcpy(r_cust,cust);
	      r_per=per;
	     }

	     void allocate()
	     {
	      if(r_avail=='Y')
	      {
	      cout<<"\n Enter Name of cust living :";
			cin>>cust;
	      cout<<"\n For how many days cust want the room :";
	      cin>>per;
	      cout<<"\n Enter city name :";
	      cin>>c_city;
	      cout<<"\n Enter nationality :";
	      cin>>c_nat;
	      cout<<"\n Enter no. of member in your group :";
	      cin>>c_mem;
	      cout<<"\n Enter the date of arrival ";
	      cout<<"\n------------------------------";
	      cout<<"\n Year : ";
	      cin >>year;
	      cout<<"\n Month :";
	      cin >>mon;
	      cout<<"\n Day :";
	      cin >>day;
	      cout<<"\n... Room is allocated to "<<cust<<" for "<<per<<" days.";
	      strcpy(r_cust,cust);
	      r_per=per;
	      r_avail='N';
	     }
	     else
	     {
	     cout<<"\n ERROR : Room cannot be allocated ...";
	     cout<<"\n Room is not available...";
	     }
	     }
	     void putcust()
	     {
	     int i,j;
	     i=day+r_per;
	     j=strcmp(r_cust,"N.A");
	     if(j==0)
	      {
		cout<<"\n Data not available ";
	       }
	     else
	     {
		cout<<"\n Room No        :"<<r_no;
		cout<<"\n Customer Name  :"<<r_cust;
		cout<<"\n Days           :"<<r_per;
		cout<<"\n City           :"<<c_city;
		cout<<"\n Nationality    :"<<c_nat;
		cout<<"\n No of member   :"<<c_mem;
		cout<<"\n Arrival Date   :"<<day<<"/"<<mon<<"/"<<year;
		date(i,mon,year);
	      }
	     }
	     friend void date(int d,int m,int y);
};
void date(int d,int m,int y)
 {
   int i;
   i=m%12;
if(i==0)
{
   if(d>31)
   {
   d=d-31;
   m=m+1;
   }
   if(m>12)
   {
    m=m-12;
    y=y+1;
   }
  cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
 }

else
if(i==1)
{
   if(d>31)
   {
   d=d-31;
   m=m+1;
   }
   if(m>12)
   {
    m=m-12;
    y=y+1;
   }
  cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
 }
else
if(i==2)
{
   if(d>30)
   {
   d=d-30;
   m=m+1;
   }
   if(m>12)
   {
    m=m-12;
    y=y+1;
   }
  cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
 }

else
if(i==3)
{
   if(d>31)
   {
   d=d-31;
   m=m+1;
   }
   if(m>12)
   {
    m=m-12;
    y=y+1;
   }
  cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
 }

else
if(i==4)
{
   if(d>30)
   {
   d=d-30;
   m=m+1;
   }
   if(m>12)
   {
    m=m-12;
    y=y+1;
   }
  cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
 }

else
if(i==5)
{
   if(d>31)
   {
   d=d-31;
   m=m+1;
   }
   if(m>12)
   {
    m=m-12;
    y=y+1;
   }
  cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
 }

else
if(i==6)
{
   if(d>30)
   {
   d=d-30;
   m=m+1;
   }
   if(m>12)
   {
    m=m-12;
    y=y+1;
   }
  cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
 }

else
if(i==7)
{
   if(d>31)
   {
   d=d-31;
   m=m+1;
   }
   if(m>12)
   {
    m=m-12;
    y=y+1;
   }
  cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
 }

else
if(i==8)
{
   if(d>31)
   {
   d=d-31;
   m=m+1;
   }
   if(m>12)
   {
    m=m-12;
    y=y+1;
   }
  cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
 }

else
if(i==9)
{
   if(d>30)
   {
   d=d-30;
   m=m+1;
   }
   if(m>12)
   {
    m=m-12;
    y=y+1;
   }
  cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
 }

else
if(i==10)
{
   if(d>31)
   {
   d=d-31;
   m=m+1;
   }
   if(m>12)
   {
    m=m-12;
    y=y+1;
   }
  cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
 }

else
if(i==11)
{
   if(d>30)
   {
   d=d-30;
   m=m+1;
   }
   if(m>12)
   {
    m=m-12;
    y=y+1;
   }
  cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
 }
}

 class bill: public room
 {
  private:
	  long total;
	  int food;
	  long room;
	  float ser;
	  int t;
	  int oc;
  public:

	  void calculate()
	  {
	   room= r_charge * r_per;
	   cout<<"\n Enter the bill amount of restaurant:";
	   cin>>food;
	   cout<<"\n Enter other charges:";
	   cin>>oc;
	   t=(int) room + food + oc;
	   ser=(int)(0.05*t);
	   total=t+ser;
	  }

	  void dispbill()
	  {
	   clrscr();
	   cout<<"\n________________________________________________________________________________";
		cout<<"\n*************************           Abhy Hotel          ***********************";
	   cout<<"\n                         --------------------------------                       ";
		cout<<"\n                          Mahaveer Nagar Durgapur ,Jaipur";
		cout<<"\n                                   Tel :- 0141-45454545                               ";
	   cout<<"\n--------------------------------------------------------------------------------";
	   cout<<"\n      Customer name : "<<r_cust;
	   cout<<"\n                              ";
	   cout<<"\n      Stayed for "<<r_per<<" days";
	   cout<<"\n      Room charges    : "<<r_charge<<"(Per day)";
	   cout<<"\n      Room charges    : "<<room<<"(total)";
	   cout<<"\n      Restaurant bill : "<<food;
	   cout<<"\n      Other charges   : "<<oc;
	   cout<<"\n                          Ser.tax % = 5%";
	   cout<<"\n                          Ser.tax   ="<<ser;
	   cout<<"\n      Bill Amount >>>>>> Rs "<<total;
	   cout<<"\n                              ";
	   cout<<"\n      THANK YOU !!!!!";
	   cout<<"\n      Do Visit Us Again !";

	   strcpy(r_cust,"N.A");
	   r_per=0;
	   r_avail='Y';
	   day=0;
	   mon=0;
	   year=0;
	   strcpy(c_city,"N.A ");
	   strcpy(c_nat,"N.A ");
	   c_mem = 0;
	  }
	  void check();
  };

  void bill:: check()
  {
	 if(r_avail=='Y')
	 {
	  cout<<"\n"<<r_no<<"\t "<<r_type<<"\t"<<r_charge<<"\t   "<<r_avail<<"\t        "<<r_cust<<"\t    "<<r_per;
	 }
  }



void main()
 {
  int i,ch;
  login();
  bill R[5];
  clrscr();
  getch();
  clrscr();
  R[0].getr1();
  R[1].getr2();
  R[2].getr3();
  R[3].getr4();
  R[4].getr5();

		time_t t;
  clrscr();

	   t = time(NULL);

	   cout<<"\n                                                        "<<ctime(&t);

	   t -= 24L*60L*60L;

	   cout<<"\n--------------------------------------------------------------------------------";
	   cout<<"\n--------------------------------------------------------------------------------";
		cout<<"\n*************************** WELCOME TO HOTEL ABHY ************************";
	   cout<<"\n--------------------------------------------------------------------------------";
		cout<<"\n--------------------------------------------------------------------------------";
      getch();
	 xyz:
	      clrscr();
	      cout<<"\n--------------------------------------------------------------------------------";
			cout<<"\n**********************               ABHY          **************************";
	      cout<<"\n                      ________________________________                          ";
			cout<<"\n                        Mahaveer Nagar Durgapur ,Jaipur-302018                          ";
			cout<<"\n                                Tel-0141-45454545.                                   ";
	      cout<<"\n--------------------------------------------------------------------------------";
	      cout<<"\n                                                              ";
	      cout<<"\n 1.GET INFORMATION                          2.GET CUSTOMER INFO     ";
	      cout<<"\n                                                              ";
	      cout<<"\n 3.MODIFY INFORMATION                       4.CHECK THE AVAILABILITY    ";
	      cout<<"\n                                                              ";
	      cout<<"\n 5.ALLOCATE ROOM                            6.FEATURES OF ROOMS                ";
	      cout<<"\n                                                              ";
	      cout<<"\n 7.CREATE BILL                              8.EXIT                  ";
	      cout<<"\n\n Enter your choice : ";
	      cin >>ch;
	      if(ch>8)
	      {
	      clrscr();
	      cout<<"\n Wrong choice ....";
	      getch();
	      goto xyz;
	      }

		    if(ch==1)
		    {

		     clrscr();
		     cout<<"\n                              ROOM INFO                                            ";
		     cout<<"\n                             -----------                                           ";
		     cout<<"\nRoom No| Type | Charge | Availability | Cust_Name | Period |";
			for(i=0;i<=4;i++)
			{
			 R[i].putinfo();

			}
			  getch();
		     clrscr();
				goto xyz;

		     }
		      else
			  if(ch==2)
			  {
			    abc:
			    clrscr();
			    int n;
			    cout<<"\n Enter room no. :";
			    cin>>n;
			    if(n>5)
			    {
			    cout<<"\n Wrong choice ....";
			    getch();
			    goto abc;
			    }
			    n=n-1;
			    clrscr();
			    cout<<"\n                              CUSTOMER INFO                                            ";
			    cout<<"\n                             --------------                                           ";
			    R[n].putcust();
			    getch();
			    clrscr();

				goto xyz;

		     }
		      else
			  if(ch==3)
			  {
			   pqr:
			   clrscr();
			   int a;
			   cout<<"\n Enter Room no :";
			   cin>>a;
			   if(a>5)
			   {
			   cout<<"\n Wrong choice ...";
			   getch();
			   goto pqr;
			   }
			   a=a-1;
			   R[a].modify();
			   getch();
			   clrscr();

				       goto xyz;

			  }

			   else
			       if(ch==4)
			       {
				clrscr();
				cout<<"\n                              AVAILABLE ROOMS                                           ";
				cout<<"\n                             -----------------                                           ";
				cout<<"\nRoom No| Type | Charge | Availability | Cust_Name | Period|";
				      for(i=0;i<=4;i++)
				       {
					R[i].check();
				       }
				getch();
				clrscr();

					    goto xyz;

			       }
				else
				    if(ch==5)

						{
						int b;

						def:
						clrscr();
						cout<<"\n Enter room no to be allocated(1-5):";
				      cin >>b;
				      if(b>5)
				      {
				      cout<<"\n Wrong choice ...";
				      getch();
				      goto def;
				      }
				      b=b-1;
				      R[b].allocate();
				      getch();
				      clrscr();

						  goto xyz;

				    }
				     else
					if(ch==6)
					{
					 ghi:
					 clrscr();
					 int a,d,e,f,g,h;
					 char b[5];
					 cout<<"\n Enter Room No(1-5):";
					 cin>>a;
					 if(a>5)
					 {
					 cout<<"\n Wrong choice ...";
					 getch();
					 goto ghi;
					 }
					 a=a-1;
					 strcpy(b,R[a].r_type);

					 d=strcmp(b,"Sp Dlx");
					 e=strcmp(b,"Dlx");
					 f=strcmp(b,"Gen");
					 g=strcmp(b,"Coupl");
					 h=strcmp(b,"C Dlx");
					     if(d==0)
					     {
					       spd();
					     }

					       else


						   if(e==0)
						   {
						    dlx();
						   }

						     else

							 if(f==0)
							 {
							  gen();
							 }

							  else


							      if(g==0)
							      {

							       coupd();

							      }

								else

								   if(h==0)
								   {
								    coup();
								   }

					 getch();
					 clrscr();

						     goto xyz;
					}
					 else
					     if(ch==7)
					     {
					      stu:
					      clrscr();
					      int b;
					      cout<<"\n Enter Room no :";
					      cin>>b;
					      if(b>5)
					      {
					      cout<<"\n Wrong choice ...";
					      getch();
					      goto stu;
					      }
					       {
						char av;
						av=R[b-1].getavail();
						if(av=='Y')
						{
						cout<<"\n ERROR: Room is not allocated.";
						cout<<"\n Bill cannot be created ";
						getch();
						goto stu;
						}
						else
					       {
						R[b-1].calculate();
						R[b-1].dispbill();
						getch();
					       }
					      }
						 clrscr();

							     goto xyz;
					      }
					       else
						   if(ch==8)
						   {
						     goto mno;
						   }

	 mno:
	 exit(0);
}

void spd()
{
clrscr();
 cout<<"\n                      FEATURES OF THIS ROOM                       ";
 cout<<"\n------------------------------------------------------------------";
 cout<<"\n\n Room Type       >>> Sp.delux                                  ";
 cout<<"\n\n Room charges    >>> Rs.1500 per day";
 cout<<"\n\n 1. Bed               >>>      2";
 cout<<"\n\n 2.Capacity           >>>      5";
 cout<<"\n\n 3.Balcony available     ";
 cout<<"\n------------------------------------------------------------------";
 cout<<"\n                     ADDITIONAL FEATURES                        ";
 cout<<"\n------------------------------------------------------------------";
 cout<<"\n\n 1.A/C  available ";
 cout<<"\n\n 2.Geyser available";
 cout<<"\n\n 3.TV available      ";
 cout<<"\n------------------------------------------------------------------";
 cout<<"\n NOTE :- Extra bed will cost Rs.50 per bed ";

 }

void dlx()
{
clrscr();
 cout<<"\n                      FEATURES OF THIS ROOM                       ";
 cout<<"\n-------------------------------------------------------------------";
 cout<<"\n\n Room Type       >>> Delux                                      ";
 cout<<"\n\n Room charges    >>>Rs.1000 per day";
 cout<<"\n\n 1. Bed               >>>      2";
 cout<<"\n\n 2.Capacity           >>>      5";
 cout<<"\n-------------------------------------------------------------------";
 cout<<"\n                    ADDITIONAL FEATURES                        ";
 cout<<"\n-------------------------------------------------------------------";
 cout<<"\n\n 1.A/C avaalable   ";
 cout<<"\n\n 3.Geyser available";
 cout<<"\n\n 4.TV available      ";
 cout<<"\n-------------------------------------------------------------------";
 cout<<"\n NOTE :- Extra bed will cost Rs.50 per bed ";
}

void gen()
{
 clrscr();
 cout<<"\n                      FEATURES OF THIS ROOM                       ";
 cout<<"\n------------------------------------------------------------------";
 cout<<"\n\n Room Type       >>> General                                   ";
 cout<<"\n\n Room charges    >>>Rs.750 per day";
 cout<<"\n\n 1. Bed               >>>      2";
 cout<<"\n\n 2.Capacity           >>>      5";
 cout<<"\n------------------------------------------------------------------";
 cout<<"\n                     ADDITIONAL FEATURES                        ";
 cout<<"\n------------------------------------------------------------------";
 cout<<"\n\n 1.Geyser available";
 cout<<"\n------------------------------------------------------------------";
 cout<<"\n NOTE :- Extra bed will cost Rs.50 per bed ";

 }

void coup()
{
 clrscr();
 cout<<"\n                      FEATURES OF THIS ROOM                       ";
 cout<<"\n------------------------------------------------------------------";
 cout<<"\n\n Room Type       >>> Couple                                     ";
 cout<<"\n\n Room charges    >>>Rs.1250 per day";
 cout<<"\n\n 1. Bed               >>>      1";
 cout<<"\n\n 2. Capacity           >>>     2";
 cout<<"\n\n 3.Balcony available     ";
 cout<<"\n------------------------------------------------------------------";
 cout<<"\n                    ADDITIONAL FEATURES                        ";
 cout<<"\n------------------------------------------------------------------";
 cout<<"\n\n 2.Geyser available";
 cout<<"\n\n 3.TV available      ";
 cout<<"\n------------------------------------------------------------------";
 cout<<"\n NOTE :- Extra bed will cost Rs.50 per bed ";

 }

void coupd()
{
 clrscr();
 cout<<"\n                      FEATURES OF THIS ROOM                       ";
 cout<<"\n------------------------------------------------------------------";
 cout<<"\n\n Room Type       >>> Couple delux                              ";
 cout<<"\n\n Room charges         >>> Rs.1500 per day";
 cout<<"\n\n 1. Bed               >>>      1";
 cout<<"\n\n 2.Capacity           >>>      2";
 cout<<"\n\n 3.Balcony available     ";
 cout<<"\n------------------------------------------------------------------";
 cout<<"\n                     ADDITIONAL FEATURES                        ";
 cout<<"\n------------------------------------------------------------------";
 cout<<"\n\n 1.A/C  available ";
 cout<<"\n\n 2.Geyser available";
 cout<<"\n\n 3.TV available      ";
 cout<<"\n------------------------------------------------------------------";
 cout<<"\n NOTE :- Extra bed will cost Rs.50 per bed ";
}
