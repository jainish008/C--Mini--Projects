//Build a program which tell your BMI(body mass index) using user height and weight.
//Header File
#include<iostream.h>
#include<conio.h>


void main()  //This start point of the execution
{
	clrscr(); //it clear console screen, in simple language it claers the console history
	float weight_kg;   //float is data type and weight_kg is variable
	float height_m;   //float is data type and height_m is variabel
	float bmi;
	cout<<"Enter Weight in Kilograms (Kgs)"<<endl;
	cin>>weight_kg;   //cin is standard input type in which you can give input through keyboard
	cout<<"Enter Height in Meters (m)"<<endl;
	cin>>height_m;  //cin is standard input type in which you can give input through keyboard
	bmi = weight_kg / (height_m * height_m);
	cout<<"Print the Body Mass Index of the person "<<bmi<<endl;
	getch();

}
