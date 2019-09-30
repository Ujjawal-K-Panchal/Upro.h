//Upro.h
/*
******************* By Developers of Umax ***********************************
******************* Creator cum Developer cum first user : Ujjawal Panchal***
******************* Upro.h **************************************************
******************* All rights reserved by : Ujjawal Panchal ****************
------------------- Thanks for using! ---------------------------------------
------------------- Development date : 29/11/2014 ---------------------------
------------------- Development time : 12:54 PM -----------------------------
------------------- Digital_Sign : UM ---------------------------------------
-----------------------------------------------------------------------------
*/
//Header Files
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <dos.h>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include<tchar.h>

//Using C++11 Namespace standards

using namespace std;
void Upro_Help();//Prototype
//Upro::Crypto
//Upro::standard_prototypes_&_definitions
void dlay(float l)
{
    _sleep(l*1000);
}
//special effects:
//beep function :
void sound(char g, float l)
{
char n = g;
if (n == 'A'||'a'){
Beep(2750,l*1000);

}
else if(n == 'B'||'b'){
Beep(3087,l*1000);

}
else if(n == 'C'||'c'){
Beep(1637,l*1000);

}
else if(n == 'D'||'d'){
Beep(1835,l*1000);

}
else if(n == 'E'||'e'){
Beep(2060,l*1000);

}
else if(n == 'F'||'f'){
Beep(2183,l*1000);

}
else if(n == 'G'||'g'){
Beep(2450,l*1000);

}
}
//delay function:
delay(float x)//x in seconds
{
	_sleep(x*1000);
}
/*
color changer function :
requires windows.h : system("color <background color code><text color code>);

0 = Black
1 = Blue
2 = Green
3 = Aqua
4 = Red
5 = Purple
6 = Yellow
7 = White
8 = Gray
9 = Light Blue
A = Light Green
B = Light Aqua
C = Light Red
D = Light Purple
E = Light Yellow
F = Bright White
use with care!
*/
//Upro::Crypto
void crypto()
{
    char ch[100] , host;int i;
    cout<<" -------------------------(Upro::1.0)-----------------------------"<<endl;
    cout<<"|   _______   _______  __     __  ______   _________   ________   |"<<endl;
    cout<<"|  |  _____| |  ___  | \\ \\   / / |  __  | |___   ___| |  ____  |  |  "<<endl;
    cout<<"|  | |       | |___| |  \\ \\_/ /  | |__| |     | |     | |    | |  |   "<<endl;
    cout<<"|  | |       |     __|   \\   /   |  ____|     | |     | |    | |  |  "<<endl;
    cout<<"|  | |_____  | | \\ \\      | |    | |          | |     | |____| |  |   "<<endl;
    cout<<"|  |_______| |_|  \\_\\     |_|    |_|          |_|     |________|  |   "<<endl;
    cout<<" -------------------------(Upro::1.0)-----------------------------"<<endl;
    delay(0.20);
    cout<<"Crypto :: Encrypter  welcomes you !"<<endl;host=16;
    delay(0.20);
    cout<<"Enter string "<<host;
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a' or ch[i]=='A')
            ch[i]+=3;
        else if(ch[i]=='e' or ch[i]=='E')
            ch[i]+=6;
        else if(ch[i]=='i' or ch[i]=='I')
            ch[i]+=9;
        else if(ch[i]=='o' or ch[i]=='O')
            ch[i]+=12;
        else if(ch[i]=='u' or ch[i]=='U')
            ch[i]+=4;

        else ch[i]+=20;

    }
    for(i=0;ch[i]!='\0';i++)
        cout<<ch[i];delay(1.5);
    ///---------------------------(Crypto::Decrypter)-------------------------
    system("cls");
    cout<<" -------------------------(Upro::1.0)-----------------------------"<<endl;
    cout<<"|   _______   _______  __     __  ______   _________   ________   |"<<endl;
    cout<<"|  |  _____| |  ___  | \\ \\   / / |  __  | |___   ___| |  ____  |  |  "<<endl;
    cout<<"|  | |       | |___| |  \\ \\_/ /  | |__| |     | |     | |    | |  |   "<<endl;
    cout<<"|  | |       |     __|   \\   /   |  ____|     | |     | |    | |  |  "<<endl;
    cout<<"|  | |_____  | | \\ \\      | |    | |          | |     | |____| |  |   "<<endl;
    cout<<"|  |_______| |_|  \\_\\     |_|    |_|          |_|     |________|  |   "<<endl;
    cout<<" -------------------------(Upro::1.0)-----------------------------"<<endl;
    delay(0.20);
    cout<<"Crypto :: Decrypter  welcomes you !"<<endl;host=16;
    delay(0.20);
    cout<<"would you like to decrypt the previous string(enter 1) or a new one(enter 2<new string>) ? "<<endl;
    cout<<"enter answer "<<host;cin>>i;
    if(i==1)
    {
        for(i=0;ch[i]!='\0';i++)
        {
        if(ch[i]=='d' or ch[i]=='D')
            ch[i]-=3;
        else if(ch[i]=='o' or ch[i]=='O')
            ch[i]-=6;
        else if(ch[i]=='r' or ch[i]=='R')
            ch[i]-=9;
        else if(ch[i]=='[' or ch[i]=='{')
            ch[i]-=12;
        else if(ch[i]=='y' or ch[i]=='Y')
            ch[i]-=4;
        else ch[i]-=20;
        }
    }
    else if(i==2)
    {

        char str[50];
            gets(ch);
         for(i=0;ch[i]!='\0';i++)
        {
        if(ch[i]=='d' or ch[i]=='D')
            ch[i]-=3;
        else if(ch[i]=='o' or ch[i]=='O')
            ch[i]-=6;
        else if(ch[i]=='r' or ch[i]=='R')
            ch[i]-=9;
        else if(ch[i]=='[' or ch[i]=='{')
            ch[i]-=12;
        else if(ch[i]=='y' or ch[i]=='Y')
            ch[i]-=4;
        else ch[i]-=20;

        }
    }
    cout<<"The decrypted string is : ";
    for(i=0;ch[i]!='\0';i++)
        cout<<ch[i];
    }


//Standard Calculator
void std_cal()
{
		long double x , y;double a; char ch='y';
	while( ch=='y')
                {
                                system("cls");
		cout<<"\t\t\t\tSTANDARD CALCULATOR\n";
	cout<<"Please Enter the numbers : "<<endl;
	cin>>x>>y;
	cout<<"The Standard Arithematic Operations are : \nAddition(1)\nSubraction(2)\nMultiplication(3)\nDivision(4)\n";
	cout<<"Please enter your choice number : ";
	cin>>a;cout<<endl;
	if(a==1)cout<<x+y<<" is answer"<<endl;
        else if(a==2)cout<<x-y<<" is answer"<<endl;
        else if(a==3)cout<<x*y<<" is answer"<<endl;
        else if(a==4)cout<<x/y<<" is answer"<<endl;
 	cout<<"Do you want to continue ? y/n :> ";cin>>ch;
              }	      
}

//Loading Scheme
//Upro :: Disco Bar Load
void Bar_Load()
{
int i , x;
    char unload=177 , load=219 ,a1=223 , a2=220 , a3=222 , a4=221 , a5=254 ;
    cout<<"\t\t\t\tLoading "<<a1<<endl;system("color 9");

    for( i=0;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color A");
    cout<<"\t\t\t\tLoading "<<a2<<endl;
    for(x=0;x<=4;x++)
    {
        cout<<load;
    }
    for(i=5;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color B");
    cout<<"\t\t\t\tLoading "<<a3<<endl;
    for(x=0;x<=8;x++)
    {
        cout<<load;
    }
    for(i=9;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color C");
    cout<<"\t\t\t\tLoading "<<a4<<endl;
    for(x=0;x<=12;x++)
    {
        cout<<load;
    }
    for(i=13;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color D");
    cout<<"\t\t\t\tLoading "<<a5<<endl;
    for(x=0;x<=16;x++)
    {
        cout<<load;
    }
    for(i=17;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color E");
    cout<<"\t\t\t\tLoading "<<a1<<endl;
    for(x=0;x<=20;x++)
    {
        cout<<load;
    }
    for(i=21;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color 6");
    cout<<"\t\t\t\tLoading "<<a2<<endl;
    for(x=0;x<=24;x++)
    {
        cout<<load;
    }
    for(i=25;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color 2");
    cout<<"\t\t\t\tLoading "<<a3<<endl;
    for(x=0;x<=28;x++)
    {
        cout<<load;
    }
    for(i=29;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color 4");
    cout<<"\t\t\t\tLoading "<<a3<<endl;
    for(x=0;x<=32;x++)
    {
        cout<<load;
    }
    for(i=33;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color 7");
    cout<<"\t\t\t\tLoading "<<a4<<endl;
    for(x=0;x<=36;x++)
    {
        cout<<load;
    }
    for(i=37;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color 6");
    cout<<"\t\t\t\tLoading "<<a5<<endl;
    for(x=0;x<=40;x++)
    {
        cout<<load;
    }
    for(i=41;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color A");
    cout<<"\t\t\t\tLoading "<<a1<<endl;
    for(x=0;x<=44;x++)
    {
        cout<<load;
    }
    for(i=45;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color B");
    cout<<"\t\t\t\tLoading "<<a2<<endl;
    for(x=0;x<=48;x++)
    {
        cout<<load;
    }
    for(i=49;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color E");
    cout<<"\t\t\t\tLoading "<<a3<<endl;
    for(x=0;x<=52;x++)
    {
        cout<<load;
    }
    for(i=53;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color 7");
    cout<<"\t\t\t\tLoading "<<a4<<endl;
    for(x=0;x<=56;x++)
    {
        cout<<load;
    }
    for(i=57;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color D");
    cout<<"\t\t\t\tLoading "<<a5<<endl;
    for(x=0;x<=60;x++)
    {
        cout<<load;
    }
    for(i=61;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color C");
    cout<<"\t\t\t\tLoading "<<a1<<endl;
    for(x=0;x<=64;x++)
    {
        cout<<load;
    }
    for(i=65;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color B");
    cout<<"\t\t\t\tLoading "<<a2<<endl;
    for(x=0;x<=68;x++)
    {
        cout<<load;
    }
    for(i=69;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color A");
    cout<<"\t\t\t\tLoading "<<a3<<endl;
    for(x=0;x<=72;x++)
    {
        cout<<load;
    }
    for(i=73;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);system("cls");system("color 4");
    cout<<"\t\t\t\tLoading "<<a4<<endl;
    for(x=0;x<=79;x++)
    {
        cout<<load;
    }
    for(i=80;i<=79;i++)
    {
        cout<<unload;
    }
    delay(0.25);
}

//Upro Loading Van : Note that the drawing might not seem stable here , but when it runs , it will seem a well drawn van!
void van_load()
{
        cout<<" ________________________________________"<<endl;
        cout<<"|  UPRO                                  |"<<endl;
        cout<<"|  Loading                               | "<<endl;
        cout<<"|  Van                                   |________"<<endl;
        cout<<"|                                                 |"<<endl;
        cout<<"|               __             __                 |"<<endl;
        cout<<"|_____________/  O |_________/  O |_______________|"<<endl;
        delay(0.25);system("cls");//8 spaces
        cout<<"         ________________________________________"<<endl;
        cout<<"        |  UPRO                                  |"<<endl;
        cout<<"        |  Loading.                              | "<<endl;
        cout<<"        |  Van                                   |________"<<endl;
        cout<<"        |                                                 |"<<endl;
        cout<<"        |               __             __                 |"<<endl;
        cout<<"        |_____________/  O |_________/  O |_______________|"<<endl;
        delay(0.25);system("cls");//16 spaces
        cout<<"                 ________________________________________"<<endl;
        cout<<"                |  UPRO                                  |"<<endl;
        cout<<"                |  Loading..                             | "<<endl;
        cout<<"                |  Van                                   |________"<<endl;
        cout<<"                |                                                 |"<<endl;
        cout<<"                |               __             __                 |"<<endl;
        cout<<"                |_____________/  O |_________/  O |_______________|"<<endl;
        delay(0.25);system("cls");//24 spaces
        cout<<"                         ________________________________________"<<endl;
        cout<<"                        |  UPRO                                  |"<<endl;
        cout<<"                        |  Loading...                            | "<<endl;
        cout<<"                        |  Van                                   |________"<<endl;
        cout<<"                        |                                                 |"<<endl;
        cout<<"                        |               __             __                 |"<<endl;
        cout<<"                        |_____________/  O |_________/  O |_______________|"<<endl;
        delay(0.25);system("cls");//28 spaces
        cout<<"                             ________________________________________"<<endl;
        cout<<"                            |  UPRO                                  |"<<endl;
        cout<<"                            |  Loading....                           | "<<endl;
        cout<<"                            |  Van                                   |________"<<endl;
        cout<<"                            |                                                 |"<<endl;
        cout<<"                            |               __             __                 |"<<endl;
        cout<<"                            |_____________/  O |_________/  O |_______________|"<<endl;
        delay(0.25);system("cls");
}
//Upro::Quiz function
void quiz()
	  {
		 system("cls"); int points=0;
	  int option;
	   cout<<"Loading";
	   dlay(0.5);system("cls");
	   cout<<"Loading .";
	   dlay(0.5);system("cls");
	   cout<<"Loading ..";
	   dlay(0.5);system("cls");
	   cout<<"Loading ...";
	   dlay(0.5);system("cls");
	   cout<<"quiz lvl 1: easy"<<endl;
	   cout<<"What is the return value of a void function?"<<endl;
	   cout<< "1.null 2.void 3.zero 4.none of these"<<endl;
	   cout<<"choose correct option :>"<<endl;cin>>option;
	   if(option==1)points++;else points--;system("cls");
	   cout<<"quiz lvl 1:easy"<<endl;
	   cout<<"give output of the code , assuming there are no errors :"<<endl;
	   cout<<" int x=1000;x--;x=x+1000;cout<<x;"<<endl;
	   cout<<"1.2000 2.1000 3.999 4.1999"<<endl;cin>>option;
	   if(option==4)points++;else points--;
	   if(points>=0)
	   {
			system("cls");
		   cout<<" quiz lvl 2: medium "<<endl;
		   cout<<"which is this operator =="<<endl;
		   cout<<"1.Relational 2.Logical 3.Assignment 4.Conditional"<<endl;
		   cin>>option;if(option==1)points++;else points --;
		   system("cls");
		   cout<<"quiz lvl 2: medium"<<endl;
		   cout<<"who was the creator of C++ ? :>"<<endl;
		   cout<<"1.Dennis Ritchie 2.Bjarne Stroustrup 3.Fred Flinston 4.none"<<endl;
		   cin>>option;if(option==2)points++;else points--;
		   system("cls");
		   if(points>=3)
		   {
		   system("cls");
		   cout<<"quiz lvl 3:LORD OF DARKNESS : ULTRA HARD!!!"<<endl;
		   cout<<"Give result of following code : "<<endl;
		   cout<<"int x , int c=0/2+3;x=0/1+10000;x=2*x;x--;x=-x;x++;x--;x=x+3;";
		   cout<<"1.-19999 2.20000 3.null 4.-19996 "<<endl;
		   cin>>option;if(option==4)points++;else points--;
		   system("cls");
		   cout<<"quiz lvl 3:LORD OF DARKNESS : ULTRA HARD!!!"<<endl;
		   cout<<"What is the variable name of file stream output & input"<<endl;
		   cout<<"1.fstream 2.ofstream 3.ifstream 4.filestreamer"<<endl;
		   cin>>option;if(option==1)points++;else points--;
		   system("cls");
		   cout<<"quiz lvl 3:LORD OF DARKNESS : ULTRA HARD!!!"<<endl;
		   cout<<"how to make a class public ? "<<endl;
		   cout<<"1.class.public() function 2.public label 3.:: operator 4.none"<<endl;
		   cin>>option;if(option==2)points++;else points--;
		   system("cls");
		   cout<<"quiz lvl 3:LORD OF DARKNESS : ULTRA HARD!!!"<<endl;
		   cout<<"What was the initial name of C++ ?"<<endl;
		   cout<<"1.C construct 2.C classes 3.C with classes 4.C#"<<endl;
		   cin>>option;if(option==3)points++;else points--;
		   system("cls");
		   cout<<"quiz lvl 3:LORD OF DARKNESS : ULTRA HARD!!!"<<endl;
		   cout<<"what is fullform of ENIAC?"<<endl;
		   cout<<"1.Electrical Numerical Integration & Automatic Calculator"<<endl;
		   cout<<"2.Electronic Numeric Integrator & Automatic Calculator"<<endl;
		   cout<<"3.Electronic Numeric Integrator & Automatic Computer"<<endl;
		   cout<<"Electronic Numeric Integrator & Autofunction Computer"<<endl;
		   cin>>option;if(option==2)points++;else points--;
		   if(points==3)
		   cout<<"GAME OVER! points are : "<<points<<"average student !"<<endl;
		   if(points==4)
		   cout<<"GAME OVER! points are : "<<points<<"above average student !\n";
		   if(points==6 || points==5)
		   cout<<"GAME OVER ! points are : "<<points<<"good student !"<<endl;
		   if(points==8 || points==7)
		   cout<<"GAME OVER ! points are : "<<points<<"outstanding!"<<endl;
		   if(points==9)
		   cout<<"GAME CRUSHED ! points are : "<<points<<" YOU ARE UCHIHA MADARA!"<<endl;

		   }
		   else
				cout<<"Game Over ! your points are : "<<points<<"Your rank is Lazy student";

	  }
	  else
	  cout<<"GAME OVER ! your points are : "<<points<<" Your rank is NOOB(Layman)";


	
	  }

//Upro::Welcome animation (please note that the drawing doesnt seem stable hre but it will run perfectly in the output box)
void welcome_anime()
{

cout<<"     ___                   "<<endl;
cout<<"    |   |                  "<<endl;
cout<<"    |   |                  "<<endl;
cout<<"    |   |                  "<<endl;
cout<<"                           "<<endl;
cout<<"                           "<<endl;
delay(0.15);system("cls");
cout<<"     ___                   "<<endl;
cout<<"    |   |                  "<<endl;
cout<<"    |   |                  "<<endl;
cout<<"    |   | |                "<<endl;
cout<<"    |   |_|                "<<endl;
cout<<"    |____                  "<<endl;
delay(0.15);system("cls");
cout<<"     ___   ___               "<<endl;
cout<<"    |   | |   |              "<<endl;
cout<<"    |   | |   |              "<<endl;
cout<<"    |   | |   |              "<<endl;
cout<<"    |   |_|   |              "<<endl;
cout<<"    |_________|              "<<endl;
delay(0.15);system("cls");
cout<<"     ___   ___   _______                "<<endl;
cout<<"    |   | |   | |  ___  |               "<<endl;
cout<<"    |   | |   | |                       "<<endl;
cout<<"    |   | |   | |                       "<<endl;
cout<<"    |   |_|   | |                       "<<endl;
cout<<"    |_________| |__                     "<<endl;
delay(0.15);system("cls");
cout<<"     ___   ___   _______              "<<endl;
cout<<"    |   | |   | |  ___  |             "<<endl;
cout<<"    |   | |   | | |___| |             "<<endl;
cout<<"    |   | |   | |                     "<<endl;
cout<<"    |   |_|   | |                     "<<endl;
cout<<"    |_________| |__|                  "<<endl;
delay(0.15);system("cls");
cout<<"     ___   ___   _______               "<<endl;
cout<<"    |   | |   | |  ___  |              "<<endl;
cout<<"    |   | |   | | |___| |              "<<endl;
cout<<"    |   | |   | |   ____|              "<<endl;
cout<<"    |   |_|   | |  |                   "<<endl;
cout<<"    |_________| |__|                   "<<endl;
delay(0.15);system("cls");
cout<<"     ___   ___   _______   _______              "<<endl;
cout<<"    |   | |   | |  ___  | |  ___                "<<endl;
cout<<"    |   | |   | | |___| | | |__                 "<<endl;
cout<<"    |   | |   | |   ____| |                     "<<endl;
cout<<"    |   |_|   | |  |      |                     "<<endl;
cout<<"    |_________| |__|      |__                   "<<endl;
delay(0.15);system("cls");
cout<<"     ___   ___   _______   _______            "<<endl;
cout<<"    |   | |   | |  ___  | |  ___  |           "<<endl;
cout<<"    |   | |   | | |___| | | |___| |           "<<endl;
cout<<"    |   | |   | |   ____| |                   "<<endl;
cout<<"    |   |_|   | |  |      |  |\\              "<<endl;
cout<<"    |_________| |__|      |__|                "<<endl;
delay(0.15);system("cls");
cout<<"     ___   ___   _______   _______                "<<endl;
cout<<"    |   | |   | |  ___  | |  ___  |               "<<endl;
cout<<"    |   | |   | | |___| | | |___| |               "<<endl;
cout<<"    |   | |   | |   ____| |     __|               "<<endl;
cout<<"    |   |_|   | |  |      |  |\\ \\               "<<endl;
cout<<"    |_________| |__|      |__| \\_\\              "<<endl;
delay(0.15);system("cls");
cout<<"     ___   ___   _______   _______    _______             "<<endl;
cout<<"    |   | |   | |  ___  | |  ___  |  |  ____              "<<endl;
cout<<"    |   | |   | | |___| | | |___| |  | |                  "<<endl;
cout<<"    |   | |   | |   ____| |     __|                       "<<endl;
cout<<"    |   |_|   | |  |      |  |\\ \\                       "<<endl;
cout<<"    |_________| |__|      |__| \\_\\                      "<<endl;
delay(0.15);system("cls");
cout<<"     ___   ___   _______   _______    ________        "<<endl;
cout<<"    |   | |   | |  ___  | |  ___  |  |  ____  |       "<<endl;
cout<<"    |   | |   | | |___| | | |___| |  | |              "<<endl;
cout<<"    |   | |   | |   ____| |     __|  | |              "<<endl;
cout<<"    |   |_|   | |  |      |  |\\ \\    | |__          "<<endl;
cout<<"    |_________| |__|      |__| \\_\\   |_____         "<<endl;
delay(0.15);system("cls");
cout<<"     ___   ___   _______   _______    ________              "<<endl;
cout<<"    |   | |   | |  ___  | |  ___  |  |  ____  |             "<<endl;
cout<<"    |   | |   | | |___| | | |___| |  | |    | |             "<<endl;
cout<<"    |   | |   | |   ____| |     __|  | |    | |             "<<endl;
cout<<"    |   |_|   | |  |      |  |\\ \\    | |____| |           "<<endl;
	
cout<<"    |_________| |__|      |__| \\_\\   |________|           "<<endl;
system("color 8");delay(0.5);
system("color F");delay(0.5);
system("color 3");delay(0.5);
system("color 9");delay(0.5);
system("color 5");delay(0.5);
system("color D");delay(0.5);
delay(1.0);
cout<<endl<<endl<<"Welcomes you ! Programmer ::UM::UPRO all rights reserved"<<endl;
delay(0.85);
}
//Upro::Bill_Creator::all rights reserved::UM::
void bill_creator()
{
    string corp , t_product;int i , x , no_item, j ;float temp_price , tax ;double total=0 ;
    cout<<"enter name of corp : "<<endl;
    cin>>corp;ofstream bill("Bill_temp.txt");
    cout<<"enter the number of items bought : "<<endl;
    cin>>x;bill<<"-------- "<<corp<<" CORPORATION"<<"--------"<<endl<<endl<<"Bill :\n";
    bill<<"no"<<"        "<<"name"<<"        "<<"price"<<"\n";
    cout<<"warning please donot use space while writing name : instead use '_' "<<endl;
    for(i=1;i<=x;i++)
    {
        cout<<"Enter name & price & no. of items of product "<<i<<" :"<<endl;
        cin>>t_product;cin>>temp_price>>no_item;
        for(j=1;j<=no_item;j++){

        bill<<i<<"        "<<t_product<<"        "<<temp_price<<endl;
        i++;
        total+=temp_price;
        }
	i--;
    }
    bill<<"---------------------------------------------------------------------"<<endl;
    cout<<"total is : "<<total<<endl;
    cout<<"please enter the tax to be implied : without (%) sign : "<<endl;
    cin>>tax;
    cout<<"final amount to be payed is : "<<total+(total*tax/100);
bill<<"The total is : "<<total<<"\n\nThe total tax is : "<<tax<<"% "<<"which will be "<<total*tax/100<<"rupees"<<endl;
    bill<<endl<<endl<<"The total amount to be payed is : "<<total+(total*tax/100)<<endl;
    bill<<"-------------(Using Bill_Creator::Upro::UM::AllRightsReserved)--------------"<<endl;
}
//Upro::Geodetails
void geodetails()
{
    SYSTEMTIME time;
    GetLocalTime(&time);
    cout<<"Welcome to Upro::Geodetails"<<endl;//cout<<"\t\t\tUpro::Geodetails"<<endl;
    int k=0 , j, l=1;
    char arrow=30;char d='|';
    delay(0.1);
    system("color 1");
    for(j=0;j<5 && l<6;j++)
    {
        if(j==1)
        {
            system("cls");
cout<<"Loading |"<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                       "<<arrow<<"                                        "<<endl;
delay(0.2);system("cls");
         }
         else if(j==2)
         {  system("cls");
             cout<<"Loading /"<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                       "<<arrow<<"                                        "<<endl;
delay(0.2);system("cls");
         }
         else if(j==3)
         {  system("cls");
             cout<<"Loading _"<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                       "<<arrow<<"                                        "<<endl;
delay(0.2);system("cls");
         }
         else if(j==4)
                {
                    system("cls");
                    cout<<"Loading \\"<<endl;j=0;l++;
                    if(l%2==0)system("color 3");else system("color 1");
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                       "<<arrow<<"                                        "<<endl;
delay(0.2);system("cls");
                }
    }
    system("color A");cout<<"\t\t\tUpro::Geodetails"<<endl;delay(0.25) , sound('d' , 0.25);
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                       "<<arrow<<"                                        "<<endl;

delay(0.25);system("cls");cout<<"\t\t\tUpro::Geodetails"<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                             "<<arrow<<"                                        "<<endl;

delay(0.25);system("cls");cout<<"\t\t\tUpro::Geodetails"<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                   "<<arrow<<"                                        "<<endl;

delay(0.25);system("cls");cout<<"\t\t\tUpro::Geodetails"<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"         "<<arrow<<"                                        "<<endl;

delay(0.25);system("cls");cout<<"\t\t\tUpro::Geodetails"<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<""<<arrow<<"                                        "<<endl;

delay(0.25);system("cls");cout<<"\t\t\tUpro::Geodetails"<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<""<<arrow<<"                                        "<<endl;

delay(0.25);system("cls");cout<<"\t\t\tUpro::Geodetails"<<endl;
cout<<"                                                                                          "<<endl;
cout<<"                                                                                          "<<endl;
cout<<""<<arrow<<"                                        "<<endl;

delay(0.25);system("cls");cout<<"\t\t\tUpro::Geodetails"<<endl;
cout<<"                                                                                          "<<endl;
cout<<""<<arrow<<"                                        "<<endl;

delay(0.25);system("cls");cout<<"\t\t\tUpro::Geodetails"<<endl;
cout<<arrow<<"                                        "<<endl;

delay(0.25);system("cls");cout<<"\t\t\tUpro::Geodetails"<<endl;
cout<<arrow<<":                                        "<<endl;

delay(0.25);system("cls");cout<<"\t\t\tUpro::Geodetails"<<endl;
cout<<arrow<<": Ahm                                       "<<endl;

delay(0.25);system("cls");cout<<"\t\t\tUpro::Geodetails"<<endl;
cout<<arrow<<": Ahmeda                                       "<<endl;

delay(0.25);system("cls");cout<<"\t\t\tUpro::Geodetails"<<endl;
cout<<arrow<<": Ahmedabad                                       "<<endl;

delay(0.25);system("cls");cout<<"\t\t\tUpro::Geodetails"<<endl;
cout<<arrow<<": Ahmedabad , In                                       "<<endl;
int host;
for(host=0;host<=5;host++)
{
delay(0.25);system("cls");cout<<"\t\t\tUpro::Geodetails"<<endl;
cout<<arrow<<": Ahmedabad , India\n\n                                       "<<endl;
for(j=5;j>host;j--)cout<<endl;
cout<<"   Current Date is : "<<time.wDay<<"."<<time.wMonth<<"."<<time.wYear<<endl;
}

for(host=0;host<=5;host++)
{
delay(0.25);system("cls");cout<<"\t\t\tUpro::Geodetails"<<endl;
cout<<arrow<<": Ahmedabad , India\n\n                                       "<<endl;
cout<<"   Current Date is : "<<time.wDay<<"."<<time.wMonth<<"."<<time.wYear<<endl;
for(j=5;j>host;j--)cout<<endl;
cout<<"   Current Day is : "<<time.wDayOfWeek<<"th day of week"<<endl;
}

for(host=0;host<=5;host++)
{
delay(0.25);system("cls");cout<<"\t\t\tUpro::Geodetails"<<endl;
cout<<arrow<<": Ahmedabad , India\n\n                                       "<<endl;
cout<<"   Current Date is : "<<time.wDay<<"."<<time.wMonth<<"."<<time.wYear<<endl;
cout<<"   Current Day is : "<<time.wDayOfWeek<<"th day of week"<<endl;
for(j=5;j>host;j--)cout<<endl;
cout<<"   Current Time(GMT+5:30) is : "<<time.wHour<<":"<<time.wMinute<<":"<<time.wSecond<<":"<<time.wMilliseconds<<endl;
}
if((time.wMonth<=2 && time.wMonth<4) || time.wMonth>10)cout<<"   Current Weather is : Winter"<<endl;
else if(time.wMonth>2 && time.wMonth<7)cout<<"   Current Westher is : Summer"<<endl;
else   cout<<"  Current Weather is : Rainy"<<endl;

}
//Upro::Menu Display
void Upro_Menu_Display()
{
    system("cls");
        delay(0.2), sound('c',0.2);
        system("color F4");
        cout<<endl<<endl<<endl<<endl<<endl<<"\n\n\n\n\n\n\n\n\n\n\n\nE";
        delay(0.07);system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<"\n\n\n\n\n\n\n\n\n\n\n\nME";
        delay(0.07);system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<"\n\n\n\n\n\n\n\nMEN";
        delay(0.07);system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<"\n\n\n\n\n\n\n\n\n\n\n\nMENU"<<endl;
                                                ///next animation
                                                delay(0.07);system("cls");
                                                cout<<endl<<endl<<endl<<endl<<endl<<"\n\n\n\n\n\n\n\n\n\nMENU"<<endl;
                                                 delay(0.07);system("cls");
                                                cout<<endl<<endl<<endl<<endl<<endl<<"\n\n\n\n\n\n\n\nMENU"<<endl;
                                                 delay(0.07);system("cls");
                                                cout<<endl<<endl<<endl<<"\n\n\n\n\n\n\n\nMENU"<<endl;
                                                 delay(0.07);system("cls");
                                                 cout<<endl<<"\n\n\n\n\n\n\n\nMENU"<<endl;
                                                 delay(0.07);system("cls");
                                                 cout<<"\n\n\n\n\n\n\n\nMENU"<<endl;
                                                 delay(0.07);system("cls");
                                                //next animation
                                                        cout<<"Calculator\n\n\n\n\n\n\n\nMENU"<<endl;
                                                        delay(0.12);system("cls");
                                                        cout<<"\n\nCalculator\n\n\n\n\n\nMENU"<<endl;//2 add before , 2 remove after calc
                                                        delay(0.12);system("cls");
                                                        cout<<"\n\n\n\nCalculator\n\n\n\nMENU"<<endl;
                                                        delay(0.12);system("cls");
                                                        cout<<"\n\n\n\n\n\nCalculator\n\n            MENU"<<endl;
                                                        delay(0.12);system("cls");
                                                        cout<<"\n\n\n\n\n\n\n\nCalculator            MENU"<<endl;
                                                        delay(0.12);system("cls");
                                                        cout<<"\n\n\n\n\n\n\n\n            MENU \nCalculator"<<endl;
                                                        delay(0.12);system("cls");
                                                        cout<<"\n\n\n\n\n\n\n\nMENU\nCalculator"<<endl;
                                                        delay(0.12);system("cls");
                                                        cout<<"\n\n\n\n\nMENU\nCalculator"<<endl;
                                                        delay(0.12);system("cls");
                                                        cout<<"\n\nMENU\nCalculator"<<endl;
                                                        delay(0.12);system("cls");
                                                        cout<<"MENU\nCalculator"<<endl;
                                                        delay(0.12);system("cls");
                                                        ///next animation
                                                            cout<<"MENU\nCalculator\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nC++ Quiz"<<endl;
                                                            delay(0.12);system("cls");
                                                            cout<<"MENU\nCalculator\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nC++ Quiz"<<endl;
                                                            delay(0.12);system("cls");
                                                            cout<<"MENU\nCalculator\n\n\n\n\n\n\n\n\n\n\n\n\n\nC++ Quiz"<<endl;
                                                            delay(0.12);system("cls");
                                                            cout<<"MENU\nCalculator\n\n\n\n\n\n\n\n\n\n\n\nC++ Quiz"<<endl;
                                                            delay(0.12);system("cls");
                                                            cout<<"MENU\nCalculator\n\n\n\n\n\n\n\n\n\nC++ Quiz"<<endl;
                                                            delay(0.12);system("cls");
                                                            cout<<"MENU\nCalculator\n\n\n\n\n\n\n\nC++ Quiz"<<endl;
                                                            delay(0.12);system("cls");
                                                            cout<<"MENU\nCalculator\n\n\n\n\n\nC++ Quiz"<<endl;
                                                            delay(0.12);system("cls");
                                                            cout<<"MENU\nCalculator\n\n\n\nC++ Quiz"<<endl;
                                                            delay(0.12);system("cls");
                                                            cout<<"MENU\nCalculator\n\nC++ Quiz"<<endl;
                                                            delay(0.12);system("cls");
                                                            cout<<"MENU\nCalculator\nC++ Quiz"<<endl;
                                                            delay(0.12);system("cls");
                                                            ///next animation
                                                                        cout<<"MENU                B\nCalculator\nC++ Quiz\n"<<endl;
                                                                        delay(0.12);system("cls");
                                                                        cout<<"MENU\nCalculator          B\nC++ Quiz\n"<<endl;
                                                                        delay(0.12);system("cls");
                                                                        cout<<"MENU\nCalculator\nC++ Quiz            B\n"<<endl;
                                                                        delay(0.12);system("cls");
                                                                        cout<<"MENU\nCalculator\nC++ Quiz\n                    B"<<endl;
                                                                        delay(0.12);system("cls");
                                                                        cout<<"MENU\nCalculator\nC++ Quiz\n                    B"<<endl;
                                                                        delay(0.12);system("cls");
                                                                        cout<<"MENU\nCalculator\nC++ Quiz\n                B"<<endl;
                                                                        delay(0.12);system("cls");
                                                                        cout<<"MENU\nCalculator\nC++ Quiz\n             B"<<endl;
                                                                        delay(0.12);system("cls");
                                                                        cout<<"MENU\nCalculator\nC++ Quiz\n        B"<<endl;
                                                                        delay(0.12);system("cls");
                                                                        cout<<"MENU\nCalculator\nC++ Quiz\n     B"<<endl;
                                                                        delay(0.12);system("cls");
                                                                        cout<<"MENU\nCalculator\nC++ Quiz\nB"<<endl;
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBi"<<endl;
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill"<<endl;
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill C"<<endl;
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Cre"<<endl;
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Crea"<<endl;
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creato"<<endl;
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill  reator"<<endl;
                                                                          cout<<"     C"<<endl;
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill  reator"<<endl;
                                                                          cout<<"   C"<<endl;
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill reator"<<endl;
                                                                          cout<<" C"<<endl;
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<" C"<<endl;
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"C\n\n\n\n\n\n\n\n\n\n\n\n\n\n r\n  y\n   p\n    t\n     o";
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"C\n\n\n\n\n\n\n\n\n\n\n\n r\n  y\n   p\n    t\n     o";
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"C\n\n\n\n\n\n\n\n\n\n r\n  y\n   p\n    t\n     o";
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"C\n\n\n\n\n\n\n\n r\n  y\n   p\n    t\n     o";
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"C\n\n\n\n\n\n r\n  y\n   p\n    t\n     o";
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"C\n\n\n\n r\n  y\n   p\n    t\n     o";
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"C\n r\n  y\n   p\n    t\n     o";
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"Cr\n  y\n   p\n    t\n     o";
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"Cr\n  y\n   p\n    t\n     o";
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"Cry\n   p\n    t\n     o";
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"Cry\n   p\n    t\n     o";
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"Cryp\n    t\n     o";
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"Crypt\n     o";
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"Crypto";
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"Crypto";
                                                                          cout<<"\n\n\n\n\n\n\nGeodetails"<<endl;
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"Crypto";
                                                                          cout<<"\n\n\n\n\nGeodetails"<<endl;
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"Crypto";
                                                                          cout<<"\n\n\nGeodetails"<<endl;
                                                                          delay(0.12);system("cls");
                                                                          cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
                                                                          cout<<"Crypto";
                                                                          cout<<"\nGeodetails"<<endl;
                                                                          ///Next animation
    char ch[]="/ASCII convert";
   delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t72";
   delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"\t\t\t\t\t\t\t72";
   delay(0.12);system("cls");
   cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"\t\t\t\t\t72";
   delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"\t\t\t72";
   delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"72";
   delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"72\t\t\t\t\t\t\t\t\t69";
   delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"72\t\t\t\t\t\t\t69";
    delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"72\t\t\t\t\t69";
   delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"72\t\t\t69";
   delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"7269";
   delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"7269\t\t\t\t\t\t\t\t\t76";
   delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"7269\t\t\t\t\t\t\t76";
   delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"7269\t\t\t\t\t76";
   delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"7269\t\t\t76";
   delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"726976";
    delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"726976\t\t\t\t\t\t\t\t\t80";
   delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"726976\t\t\t\t\t\t\t80";
   delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"726976\t\t\t\t\t80";
   delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"726976\t\t\t80";
   delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"72697680";
    for(int i=0;ch[i]!='\0';i++)
    {
            cout<<ch[i];delay(0.1);
    }
delay(0.25);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"72697680\ASCII convert";
delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"H697680\ASCII convert";
delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"HE7680\ASCII convert";

delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"HEL80\ASCII convert";
delay(0.12);system("cls");
    cout<<"MENU\nCalculator\nC++ Quiz\nBill Creator"<<endl;
    cout<<"Crypto";//H=72 E=69 L=76 P=80
    cout<<"\nGeodetails"<<endl;
    cout<<"HELP";

delay(2.12);system("cls");
}
void Upro_Menu_Operation()
    { 	char ch;	string host01;
        cout<<" :> ";
        delay(0.25);system("cls");
            cout<<" :> ";
        delay(0.25);system("cls");
        cout<<" use :> ";
        delay(0.10);system("cls");
        cout<<" to use :> ";
        delay(0.10);system("cls");
        cout<<" want to use :> ";
        delay(0.10);system("cls");
        cout<<" you want to use :> ";
        delay(0.10);system("cls");
        cout<<" Feature you want to use :> ";
        delay(0.10);system("cls");
        cout<<" Feature you want to use :> ";
        delay(0.10);system("cls");
        cout<<" The Feature you want to use :> ";
        BOOM: delay(0.10);system("cls");
        cout<<"Enter The Feature you want to use :> ";
        cin>>host01;
           if(host01=="calc" or host01=="Calc")
        {
            BOOMER:
            sound('c', 0.4);system("cls");Bar_Load();system("cls");system("color BE");
            std_cal();
        }
        else if(host01=="Quiz" or host01=="quiz")
        {
            sound('c' , 0.4);system("cls");van_load();system("cls");system("color 5F");
            quiz();
        }
        else if(host01=="Bill" or host01=="Billing" or host01=="bill" or host01=="billing")
        {
            sound('c' , 0.4);system("cls");van_load();system("cls");system("color AF");
            bill_creator();
        }
        else if(host01=="Encrypter" or host01=="Crypto" or host01=="crypto" or host01=="encrypter")
        {
            sound('c' , 0.4);system("cls");van_load();system("cls");system("color AF");
            crypto();system("cls");
        }
        else if(host01=="Geodetails" or host01=="geo" or host01=="geodetails" or host01=="Geo")
        {
            sound('c' , 0.4);system("cls");system("color CF");geodetails();
            
        }
	else if(host01=="Help" or host01=="help" or host01=="HELP")
	{
		sound('c' , 0.4);system("cls");system("color CF");Upro_Help();
            
        }
	else
		cout<<"Incorrect Command Entered !"<<endl;
		}
void Upro_Help()
{
        cout<<"Please refer to your User Manual for help or contact the mentioned programmer in User Manual";
}
