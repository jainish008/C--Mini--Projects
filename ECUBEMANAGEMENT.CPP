// Program for mini college management system
// Header Files
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class EGC // class
{
      public:
     char name[50];
     char designation[50];
     int emp_id;
     int salary;
     EGC() //default constructor
     {
     cout<<"Enter Name of Employee"<<endl;
     gets (name);
     cout<<"Enter Employee ID Number"<<endl;
     cin>>emp_id;
     cout<<"Enter Your Designation"<<endl;
     cin>>designation;
     }
     void show_info()
     {
     cout<<"Name = "<<name<<endl;
     cout<<"Emp Id Number = "<<emp_id<<endl;
     cout<<"Your Designation ="<<designation<<endl;
	 }
};
class ETS  :  public EGC // classes and inherited with class EGC
{  public:
   float salary;
   ETS() //default constructor
   {
   cout<<"Ecube Teaching staff salary";
   cin>>salary;
   }
};
class ENTS : public EGC // classes and inherited with class EGC
{      public:
       float salary;
	ENTS()  //default constructor
	{
	cout<<"Ecube Non-Teaching staff salary";
	cin>>salary;
	}
};
class Computing // class
{       public:
	char *studentname;
	int level;
	int student_id;
	Computing() //default constructor
	{
	cout<<"Enter a Student Name: "<<endl;
	gets(studentname);
	cout<<"Enter a Level :  "<<endl;
	cin>>level;
	cout<<"Enter a Student ID : "<<endl;
	cin>>student_id;
	}
};
class Business // class
{       public:
	char *studentname;
	int level;
	int  student_id;
	Business()  //default constructor
	{
	cout<<"Enter a Student Name: "<<endl;
	gets(studentname);
	cout<<"Enter a Level :  "<<endl;
	cin>>level;
	cout<<"Enter a Student ID : "<<endl;
	cin>>student_id;
	}
};

void main() //start point o execution
{     int i;

       EGC *ptr; // pointer
       Computing *ptr1; // pointer
       Business *ptr2;  // pointer
       clrscr(); // clear the history of console screens
       cout<<"WELCOME TO ECUBE GLOBAL COLLEGE"<<endl;    // main menu of college
       cout<<"Press 1 for Teaching staff"<<endl;
       cout<<"Press 2 for Non teaching staff"<<endl;
       cout<<"Press 3 for student info"<<endl;
       cin>>i;
       switch(i) //conditional statement
       {
       case 1: //for pressing 1 there will be Teachers details present in it.
       cout<<"Press 1 to Add Teacher Details :"<<endl;
       cout<<"Press 2 to exit: "<<endl;
       cin>>i;
       if(i==1) //conditional statement
       {
       cout<<"How many entries you want to add"<<endl;
       cin>>i;
       for(int z=0;z<i;z++)     //conditional statement
       {
       ptr= new ETS[i]; //pointer pointing to class ETS
       }
       }
       int emp;
       cout<<"press 3 to search data"<<endl;
       cin>>i;
       if(i==3)
       {
       cout<<"Enter Emp id number to search data"<<endl;
       cin>>emp;
       for(int a=0;a<i;a++,ptr++)
	{
	if(emp==(ptr->emp_id))
		{
	cout<<"Name of the Employee"<<ptr->name<<endl;
	cout<<"Employee ID number"<<ptr->emp_id<<endl;
	cout<<"Designation of Employee"<<ptr->designation<<endl;
       cout<<"Salary of Employee"<<((ETS*)ptr)->salary<<endl;
		}

	}
       }
       else if(i ==2){
       exit(0); }
       break;
       case 2: // press 2 you will get non teaching staff details present in it
       cout<<"Press 1 to add Non Teaching staff details:"<<endl;
       cout<<"Press 2 to exit:"<<endl;
       cin>>i;
       if(i==1) //conditional statement
       {
       cout<<"How many entries you want to add"<<endl;
       cin>>i;
       for(int i=0;i<3;i++){    //conditional statement
       ptr= new ENTS[i];    }   //pointer pointing out class of ENTS
       }
       int ntemp;
       cout<<"press 3 to search data"<<endl;
       cin>>i;
       if(i==3) {
       cout<<"Enter Emp ID number to search details"<<endl;
       cin>>ntemp;
	for(int a=0;a<i;a++,ptr++)
	{
	if(ntemp==(ptr->emp_id))
		{
	cout<<"Name of the Employee"<<ptr->name<<endl;
	cout<<"Employee ID number"<<ptr->emp_id<<endl;
	cout<<"Designation of Employee"<<ptr->designation<<endl;
	cout<<"Salary of Employee"<<ptr->salary<<endl;
		}

	}
	}
	if(i==2){
       exit(0);}
       break;
       case 3:
       cout<<"Student information"<<endl;
       cout<<"Press 1 for Computing students"<<endl;
       cout<<"Press 2 for Business students"<<endl;
       cin>>i;
		switch(i) // //conditional statement for students zone
		{
		case 1:cout<<"Computing students"<<endl;
		 if(i==1)   //conditional statement
       {
       cout<<"How many entries you want to add"<<endl;
       cin>>i;
		for(int i=0;i<3;i++)  { //conditional statement
			ptr1= new Computing[i];}     //pointer pointing out the class Computing
		       }
		       int stud1;
       cout<<"press 3 to search data"<<endl;
       cin>>i;
       if(i==3) {
       cout<<"Enter Student ID no to search details"<<endl;
       cin>>stud1;
       for(int b=0;b<i;b++,ptr1++)
	{
	if(stud1==(ptr1->student_id))
		{
	cout<<"Name of the Students"<<ptr1->studentname<<endl;
	cout<<"Student ID number"<<ptr1->student_id<<endl;
	cout<<"Student level "<<ptr1->level<<endl;
		}

	}
	}

		       if(i==2){
		       exit(0);}
			break;
		case 2:cout<<"Business studnets"<<endl;
		 cout<<"Press 2 to exit:"<<endl;
       cin>>i;
       if(i==1) //conditional statement
       {
       cout<<"How many entries you want to add"<<endl;
       cin>>i;
       int stud1;
       cout<<"press 3 to search data"<<endl;
       cin>>i;
		for(int j=0;j<3;j++){   //conditional statement
			ptr2= new Business[i];} //pointer pointing out class of Business
			}
		 int stud2;
       cout<<"press 3 to search data"<<endl;
       cin>>i;
       if(i==3) {
       cout<<"Enter Student ID no to search details"<<endl;
       cin>>stud1;
       for(int c=0;c<i;c++,ptr2++)
	{
	if(stud1==(ptr1->student_id))
		{
	cout<<"Name of the Students"<<ptr2->studentname<<endl;
	cout<<"Student ID number"<<ptr2->student_id<<endl;
	cout<<"Student level "<<ptr2->level<<endl;
		}

	}
	}
		 if(i==2){
		 exit(0);}
					break;
		default:cout<<"Invalid Option Selected";
		}
       break;
       default:
       cout<<"Invalid Option Selected"<<endl;
       }
	getch();
}
