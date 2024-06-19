//Lecture Management System...

#include<iostream>
#include<string>
using namespace std;

class LMS
{
	int lnum,temp;
	string lname;
	string course;
	string sub;
	
	public:
		
	//Assign initial values using perameterized constructer...
			LMS(string nam,string subj,string cours,int lect)
			{
		
				lnum=lect;
				lname=nam;
				course=cours;
				sub=subj;
				temp++;
			
			}
			LMS()//Default constructer
   			 {
	        lnum = 0;
	        lname = "";
	        course = "";
	        sub = "";
	      
	      
  		  	}
  		  	//add lecture details...
  		  	void lect_details()
  		  	{
  				if(temp==1)
  				{
  					cout<<"\n\n\t NOTE:-These lecture's time is 2:00 to 3:00 PM";
  					cout<<"\n\t -It start from 28/10/2024";
					cout<<"\n\t -First five lecture is for basics";			
				}
				else if(temp==2)
				{
					cout<<"\n\n\t NOTE:-These lecture's Time is 3:00 to 4:00 PM";
					cout<<"\n\t -It start from 12/10/2024";
					cout<<"\n\t -First seven lecture is basics";
				}
				else if(temp==3)
				{
					cout<<"\n\n\t NOTE:-These lecture's Time is 4:00 to 5:00 PM";
					cout<<"\n\t -It start from 02/11/2024";
					cout<<"\n\t -First 22 lecture is basics";
				}
				else if(temp==4)
				{
					cout<<"\n\n\t NOTE:-These lecture's Time is 9:00 to 10:00 AM";
					cout<<"\n\t -It start from 02/11/2024";
					cout<<"\n\t -First 28 lecture is basics";
				}
				else if(temp==5)
				{
					cout<<"\n\n\t NOTE:-These lecture's Time is 11:00 to 12:00 AM";
					cout<<"\n\t -It start from 08/8/2024";
					cout<<"\n\t -First ten lecture is basics";
				}
				
				
			}
			//display name and lecture details
			void print()
			{
				cout<<"\n\n-------------------------------------------";
				cout<<"\n\n\t @Name of lecturer="<<lname;
				cout<<"\n\n\t @Number of Lecture="<<lnum;
				cout<<"\n\n\t @Name of Course="<<course;
				cout<<"\n\n\t @Name of subjetc="<<sub;
				lect_details();
				cout<<"\n---------------------------------------------";
			}
};
main()
{
	LMS LECT[5];
		
	for(int i=0;i<5;i++)
	{
	
	int ln=0;
	string nm,sb,cs;
	
	cout<<"\n\n\t Enter the Name of lecturer=";
	cin>>nm;
	
	cout<<"\n\n\t Enter the subject=";
	cin>>sb;
	
	cout<<"\n\n\t Enter the course=";
	cin>>cs;
	
	cout<<"\n\n\t Enter the no. of lecture=";
	cin>>ln;
	
	cout<<"\n---------------------------------------\n";
	
	LECT[i]=LMS(nm,sb,cs,ln);
	}
	for(int j=0;j<5;j++)
	{
	LECT[j].print();
	}
}
