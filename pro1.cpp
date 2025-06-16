#include<iostream>
#include<windows.h>
#include<iomanip>
#include<conio.h>
#include<stdio.h>
#include <thread>
#include <chrono>
using namespace std;
int n=0,z=0; 
string nst[10],grade[10];
string id[10];
string sex[10];
string idt[10];
string aget[10];
string nte[10],skill[10];const int times = 30;
float total_salary[10];
float salary[10];
int teach[10];
float tax[10];
void ia();
void delay(const std::string& text);
void strings();
void gotoxy(int x , int y);
void manu();
void teacher();
void Student();
void searchs();
void deletes();
void updates();void sorts();void inteacher();void display();void SearchT();
void remove();void Upgrate();void sortt();

void ia() {
cout<<setw(40)<<"\t\t\t\t\t\t|------------<><><><><><>---------------|"<<endl;
cout<<setw(40)<<"\t\t\t\t\t\t|      ========        ===========      |"<<endl;
cout<<setw(40)<<"\t\t\t\t\t\t|    ===      ===      ====   ====      |"<<endl;
cout<<setw(40)<<"\t\t\t\t\t\t|    ===      ===        ==   ==        | "<<endl;
cout<<setw(40)<<"\t\t\t\t\t\t|    ============        ==   ==        |  "<<endl;
cout<<setw(40)<<"\t\t\t\t\t\t|    ============        ==   ==        |  "<<endl;
cout<<setw(40)<<"\t\t\t\t\t\t|    ===      ===        ==   ==        |  "<<endl;
cout<<setw(40)<<"\t\t\t\t\t\t|    ===      ===      ====   ====      | "<<endl;
cout<<setw(40)<<"\t\t\t\t\t\t|    ===      ===      ===========      |  "<<endl;
cout<<setw(40)<<"\t\t\t\t\t\t|------------<><><><><><>---------------|"<<endl; 
cout<<endl;
//cout<<"\t\t\t\t\t"<<setfill('=')<<setw(20)<<" AGA INSTITUTE "<<setw(20)<<setfill('=')<<"\n"; 
}  

void delay(const string& text) {
    for (char c : text) {
        cout << c;
        this_thread::sleep_for(chrono::milliseconds(100));
    }
    cout << flush;
}
void strings(){
			system("color E9");
    string stanzas[] = {
        "\n\n\t\t\t\t\t[ Welcome to my project ] ","\n\t\t\tThis project talk about system to store data managment student and teacher.","\n\t\tYou can input output search delete edit and sort data."
      
    };

    for (const auto& line : stanzas) {
        delay(line);
        cout << endl;
        this_thread::sleep_for(chrono::milliseconds(150));
    }
    this_thread::sleep_for(chrono::milliseconds(50));   
    manu();
}
void thank(){
		system("color E9");
		string thank[] ={"\n\n\t\t\t\t\tThank you for use my system.","\n\t\t\t\tI wish you good luck your life.","\n\t\t\t\t\tGood bye..................................;)"};
		for(const auto& line : thank){
			delay(line);
			cout<<endl;
			this_thread::sleep_for(chrono::milliseconds(150));
		}
		this_thread::sleep_for(chrono::milliseconds(50)); 
}
void loading(){
	system("color E9");
	printf("\e[?251]");
	SetConsoleCP(437);
	SetConsoleOutputCP(437);
	int bar1 =177, bar2 = 219;
	cout<<"\t\t\t loading..."<<endl;
	for(int i = 0; i<35; i++)
		cout<<"\r";
	cout<<"\n\t\t\t";
		cout<<(char)bar1;

	
	for(int i = 0; i<35; i++){
		cout<<(char)bar2;
		Sleep(150);
	}
	cout<<endl;
	cout<<(char)1;
	cout<<"\t\twiating 3seconds.";
 this_thread::sleep_for(chrono::seconds(3));

}
void gotoxy(int x , int y){
  COORD setCoord;
  setCoord.X=x;
   setCoord.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),setCoord);
}

void login()
{
	int num =3;
	ia();
		system("color E9");
	cout<<setw(80)<<"========================================================"<<endl;
	cout<<setw(58)<<" LOGIN  \n";
	cout<<setw(80)<<"========================================================"<<endl;
//	system("color 2");
	string pastmp;
	string ntmp;
	    for(int i = num; i>=0; i--) 
        					//1chea column and 5 chea  row
    { 	//gotoxy(1,5);
        cout<<"\t\tInput username   : "; getline(cin,ntmp);
        	
        cout<<"\t\tInput userpassword : "; getline(cin,pastmp);
        
  system("cls");
  ia();
        system("color E9");
        cout<<endl;
        cout<<setw(30)<<" username : "<<ntmp<<endl;
        cout<<setw(30)<<" userpassword : "<<pastmp<<endl;
        if(ntmp == "aga" && pastmp == "ai123")
        {
           cout<<"login successful."<<endl;
				loading();
				 strings();
        }else {
            cout<<"try again."<<i<<endl;
        }
        if(ntmp != "aga" && pastmp != "ai123" ){
            cout<<endl;
            
            cout<<"\t\tInput Username  and Userpassword incorrect.:("<<endl;
        }else if(pastmp != "ai123"){
            cout<<endl;
             
            cout<<"\t\tInput Userpassword  incorrect.:("<<endl;
        }else{
        	 
        	cout<<"\t\tInput Username  incorrect.:("<<endl;
		}

    }
         cout<<endl;
      cout<<"login is not successful."<<endl;
      exit(0);
}

void inputs()//student
{
system("cls");
ia();
	system("color F5");
	cout<<endl;
		cout<<setw(80)<<"[========================================================]"<<endl;
		cout<<setw(50)<<" 			INPUT INFORMATION STUDENT "<<endl;
		cout<<setw(80)<<"[========================================================]"<<endl;
		cout<<endl;
		cout<<" \tEnter user ID for student		: "; cin>>id[n];
		cout<<" \tEnter user Name for student		: "; cin.clear();cin.ignore();getline(cin,nst[n]);
		cout<<" \tEnter user Sex for student		: "; cin>>sex[n];
		cout<<" \tEnter user Grade for student		: "; cin.clear();cin.ignore();getline(cin,grade[n]);
		n++;
		cout<<endl<<endl;
}

void outputs()//student
{
	system("cls");
	ia();
	system("color E3");
	cout<<endl;
		cout<<setw(70)<<"[========================================================]"<<endl;
		cout<<setw(45)<<" 			OUTPUT INFORMATION STUDENT "<<endl;
		cout<<setw(70)<<"[========================================================]"<<endl;
		cout<<endl;
		cout<<setw(30)<<"ID"<<setw(20)<<"Name"<<setw(15)<<"Sex"<<setw(20)<<"Grade"<<endl;
	for(int i =0; i<n;i++)
		{
		cout<<setw(30)<<id[i]<<setw(23)<<nst[i]<<setw(11)<<sex[i]<<setw(20)<<grade[i]<<endl<<endl;
		
		}
		system("pause");
		cout<<endl<<endl;
		
}

void searchs()//student
{
	system("cls");
	ia();
system("color E3");
	cout<<endl;
		cout<<setw(70)<<"[========================================================]"<<endl;
		cout<<setw(45)<<" 			OUTPUT INFORMATION STUDENT "<<endl;
		cout<<setw(70)<<"[========================================================]"<<endl;
		cout<<endl;
		cout<<setw(30)<<"ID"<<setw(20)<<"Name"<<setw(15)<<"Sex"<<setw(20)<<"Grade"<<endl;
	for(int i =0; i<n;i++)
		{
		cout<<setw(30)<<id[i]<<setw(23)<<nst[i]<<setw(11)<<sex[i]<<setw(20)<<grade[i]<<endl<<endl;
		
		}
	getch();
		cout<<endl<<endl;
	
	
		cout<<setw(70)<<"[========================================================]"<<endl;
		cout<<setw(45)<<" 		SEARCH INFORMATION STUDENT "<<endl;
		cout<<setw(70)<<"[========================================================]"<<endl;
		cout<<endl;
	cout<<"Want you to search id for any studnet in list ? "<<endl;
	string stmp;
	int issearch;
		cout<<"\t you can search id now -> "; cin>>stmp;
		issearch =0;
		for(int i = 0; i<n; i++)
			{
				if(id[i] == stmp)
				{
					cout<<"\t\t The ID "<<id[i]<<" have in list. "<<endl;	
					issearch =1;
				}
			}
			if (issearch == 0 )
			{
				cout<<"\t\tYour ID search don't have in list."<<endl;
			}
			getch();
}

void deletes()//student
{
	system("cls");
	ia();
	system("color E3");
	cout<<endl;
		cout<<setw(70)<<"[========================================================]"<<endl;
		cout<<setw(45)<<" 			OUTPUT INFORMATION STUDENT "<<endl;
		cout<<setw(70)<<"[========================================================]"<<endl;
		cout<<endl;
		cout<<setw(30)<<"ID"<<setw(15)<<"Name"<<setw(15)<<"Sex"<<setw(20)<<"Grade"<<endl;
	for(int i =0; i<n;i++)
		{
		cout<<setw(30)<<id[i]<<setw(23)<<nst[i]<<setw(11)<<sex[i]<<setw(20)<<grade[i]<<endl<<endl;
		
		}
	getch();
		cout<<setw(70)<<"[========================================================]"<<endl;
		cout<<setw(45)<<" 		DELETE INFORMATION STUDENT "<<endl;
		cout<<setw(70)<<"[========================================================]"<<endl;
		cout<<endl;
	cout<<"\t\t\t\tWant you to delete id for any studnet in list ? "<<endl;
	string dtmp;int isd;
	isd=0;
	cout<<"\t\t Enter your fovarite ID you want remove in list : "; cin>>dtmp;
for(int i = 0 ; i<n ; i++){
	if(id[i]== dtmp ){
		id[i] = id[i+1];
		nst[i] = nst[i+1];
		sex[i] = sex[i+1];
		grade[i] = grade[i+1];
		isd =1;
		n--;
	}
}
	if(isd==0)
	{
		cout<<"\t Your ID delete is not successful."<<getch()<<endl;
	}else{
			cout<<"\t Your ID delete is  successful."<<getch()<<endl;
	}
	cout<<"\t\t<=========================================================================>"<<endl;
	 outputs();
	cout<<endl;
		
	
}

void updates() //student
{
	system("cls");
	ia();
	int op,isid;
	isid=0;
	string idtmp;

	system("color E3");
	cout<<endl;
		cout<<setw(70)<<"[========================================================]"<<endl;
		cout<<setw(45)<<" 			OUTPUT INFORMATION STUDENT "<<endl;
		cout<<setw(70)<<"[========================================================]"<<endl;
		cout<<endl;
		cout<<setw(30)<<"ID"<<setw(20)<<"Name"<<setw(15)<<"Sex"<<setw(20)<<"Grade"<<endl;
	for(int i =0; i<n;i++)
		{
		cout<<setw(30)<<id[i]<<setw(23)<<nst[i]<<setw(11)<<sex[i]<<setw(20)<<grade[i]<<endl<<endl;
		
		}
		getch();
		cout<<setw(70)<<"[========================================================]"<<endl;
		cout<<setw(45)<<" 		Edite INFORMATION STUDENT "<<endl;
		cout<<setw(70)<<"[=========================================================]"<<endl;
		cout<<endl;
		head:
			h:
cout<<"|========================================|\n";
		cout<<"|=\t\t1.New ID\t\t=|\n";
		cout<<"|=\t\t2.New NAME\t\t=|\n";
		cout<<"|=\t\t3.New SEX\t\t=|\n";
		cout<<"|=\t\t4.New GRADE\t\t=|\n";
		cout<<"|=\t\t5.Edit All\t\t=|\n";
		cout<<"|=\t\t6.Stay or Exit\t\t=|\n";
cout<<"|========================================|\n";
cout<<"Enter Option = "; cin>>op;
	if(op == 1 ){
		cout<<"Input ID : ";cin>>idtmp;
		for(int i =0; i<n; i++){
				if(idtmp == id[i]){
				cout<<"Input new Id : "; cin>>id[i];
				isid=1;
			}
		}
			cout<<setw(30)<<"ID"<<setw(20)<<"Name"<<setw(15)<<"Sex"<<setw(20)<<"Grade"<<endl;
	for(int i =0; i<n;i++)
		{
		cout<<setw(30)<<id[i]<<setw(23)<<nst[i]<<setw(11)<<sex[i]<<setw(20)<<grade[i]<<endl<<endl;
		
		}
		goto h;
	}else if(op == 2){
			cout<<"Input ID "; cin>>idtmp;
			for(int i = 0 ; i<n;i++){
				if(idtmp == id[i]){
					cout<<"Input New Name : "; cin.clear();cin.ignore();getline(cin,nst[i]);
					isid=1;
				}
			}
				cout<<setw(30)<<"ID"<<setw(20)<<"Name"<<setw(15)<<"Sex"<<setw(20)<<"Grade"<<endl;
	for(int i =0; i<n;i++)
		{
		cout<<setw(30)<<id[i]<<setw(23)<<nst[i]<<setw(11)<<sex[i]<<setw(20)<<grade[i]<<endl<<endl;
		
		}
			goto h;
	}else if(op == 3){
		cout<<"Input  ID : "; cin>>idtmp;
		for(int i = 0 ; i<n; i++){
			if(idtmp == id[i])
			{
				cout<<"Input New Sex : "; cin>>sex[i];
				isid=1;
			}
		}
			cout<<setw(30)<<"ID"<<setw(20)<<"Name"<<setw(15)<<"Sex"<<setw(20)<<"Grade"<<endl;
	for(int i =0; i<n;i++)
		{
		cout<<setw(30)<<id[i]<<setw(23)<<nst[i]<<setw(11)<<sex[i]<<setw(20)<<grade[i]<<endl<<endl;
		
		}
		goto h;
	}else if(op == 4){
		cout<<"Input ID : "; cin>>idtmp;
		for(int i=0; i<n; i++){
			if(idtmp == id[i]){
				cout<<"Input New Grade : "; cin.clear();cin.ignore();getline(cin,grade[i]); 
				isid=1;
			}
		}
		cout<<endl;
			cout<<setw(30)<<"ID"<<setw(20)<<"Name"<<setw(15)<<"Sex"<<setw(20)<<"Grade"<<endl;
	for(int i =0; i<n;i++)
		{
		cout<<setw(30)<<id[i]<<setw(23)<<nst[i]<<setw(11)<<sex[i]<<setw(20)<<grade[i]<<endl<<endl;
		
		}
		goto h;
	}else if(op == 5){
		cout<<"Input ID : "; cin>>idtmp;
		for(int i = 0; i<n; i++){
			if(idtmp == id[i]){
				cout<<"Input New ID : "; cin>>id[i];
				cout<<"Input New Name : "; cin.clear();cin.ignore();getline(cin,nst[i]);
				cout<<"Input New Sex : "; cin.clear();cin>>sex[i];
				cout<<"Input New Grade : "; cin.clear();cin.ignore();getline(cin,grade[i]);
				isid = 1;
			}
		}
		cout<<endl;
			cout<<setw(30)<<"ID"<<setw(20)<<"Name"<<setw(15)<<"Sex"<<setw(20)<<"Grade"<<endl;
	for(int i =0; i<n;i++)
		{
		cout<<setw(30)<<id[i]<<setw(23)<<nst[i]<<setw(11)<<sex[i]<<setw(20)<<grade[i]<<endl<<endl;
		
		}
		goto h;
	}else if (op == 6){
		system("cls");
		ia();
		string l;
		hi:
		cout<<"|========================|"<<endl;
		cout<<"|=\t[M/m].Manu\t=|"<<endl;
		cout<<"|=\t[T/t].Teacher\t=|"<<endl;
		cout<<"|=\t[S/s].Student\t=|"<<endl;
		cout<<"|=\t[B/b].Break\t=|"<<endl;
		cout<<"|========================|"<<endl;
		cout<<"Enter letter... ";cin>>l;
		if(l == "M" || l == "m"){
			manu();
		}else if (l=="T"|| l == "t"){
			teacher();
		}else if(l == "B" || l == "b"){
			thank();
			exit(0);
		}else if(l == "s" || l == "S"){
			Student();
		}else{
			goto hi;
		}
	}else {
		goto head;
	}
	if(isid==0){
	cout<<"Edit not complete."<<endl;
	}else{
		cout<<"Edit complete."<<endl;
	}
}

void sorts()//student
{	
		system("color E3");
cout<<endl;
		ia();
		cout<<endl;
		string idtmp, ntmp,gtmp,sextmp;
		
		cout<<setw(70)<<"[========================================================]"<<endl;
		cout<<setw(45)<<" 		  SORT INFORMATION STUDENT "<<endl;
		cout<<setw(70)<<"[========================================================]"<<endl;
		cout<<endl;
		
		for(int i =0; i<n; i++)
		{
			for(int j = i+1; j<n; j++)
			{
				if(id[i] > id[j])
				{
					
				
					idtmp=id[i];
					id[i]=id[j];
					id[j]=idtmp;
					
					ntmp=nst[i];
					nst[i]=nst[j];
					nst[j]=ntmp;
					
					sextmp=sex[i];
					sex[i]=sex[j];
					sex[j]=sextmp;
					
					gtmp=grade[i];
					grade[i]=grade[j];
					grade[j]=gtmp;
				}
			}
		}
		cout<<setw(30)<<"ID"<<setw(20)<<"Name"<<setw(15)<<"Sex"<<setw(20)<<"Grade"<<endl;
	for(int i =0; i<n;i++)
		{
		cout<<setw(30)<<id[i]<<setw(23)<<nst[i]<<setw(11)<<sex[i]<<setw(20)<<grade[i]<<endl<<endl;
		
		}
	system("pause");		
}
void inteacher(){
	
	system("cls");
	ia();
	system("color F5");
	cout<<endl;
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<setw(50)<<" 			INPUT INFORMATION TEACHER "<<endl;
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<endl;
		cout<<" \tEnter user ID for Teacher		        : ";cin>>idt[z];
		cout<<" \tEnter user Name for Teacher	        	: "; cin.clear();cin.ignore();getline(cin,nte[z]);
		cout<<" \tEnter user Age for Teacher	        	: "; cin>>aget[z];
		cout<<" \tEnter user Skill for Teacher             	: "; cin.clear();cin.ignore();getline(cin,skill[z]);
		cout<<"\tEnter time to come teaching per month    	: "; cin>>teach[z];
		cout<<"\tOne hour of earning money                	: $"<<times<<endl;
		cout<<"\t\t If salarry > 1000$ -> Tax = 7%.\n \t\t salary >500 -> Tax = 5%  and salary <=500 -> 3%."<<getch()<<endl;
		salary[z] = times*teach[z];
	if(salary[z]>1000)
	{
	    	tax[z]=salary[z] *0.05;
			total_salary [z] = salary[z] - tax[z];
	}else if(salary[z]>500)
	{
	    	tax[z]=salary[z] *0.03;
			total_salary [z] = salary[z] - tax[z];
	}else 
	{
	    	tax[z]=0;
			total_salary [z] = salary[z] - tax[z];
	}
		z++;
		cout<<endl;
}

void display()
{
	system("cls");
	ia();
system("color F5");
	cout<<endl;
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<setw(58)<<" 		Display INFORMATION TEACHER "<<endl;
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<endl;	
		cout<<setw(10)<<"ID"<<setw(15)<<"Name"<<setw(14)<<"Age"<<setw(15)<<"Skill"<<setw(16)<<"Time Teaching"<<setw(14)<<"Salary" <<setw(16)<<"Tax salary"<<setw(18)<<"total salary"<<endl;
		cout<<endl;
		for(int k = 0; k<z; k++)
		{
			cout<<setw(10)<<idt[k]<<setw(16)<<nte[k]<<setw(13)<<aget[k]<<setw(15)<<skill[k]<<setw(12)<<teach[k]<<setw(15)<<salary[k]<<"$"  <<setw(14)<<tax[k]<<"$"<<setw(16)<<total_salary[k]<<"$"<<endl;
			cout<<endl;
		}
			cout<<"\t\t<=========================================================================>"<<endl;
		system("pause");
	
}

void SearchT(){
		string idtmp;
			cout<<endl;
	system("color F5");
	ia();
	cout<<endl;
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<setw(58)<<" 		 Display INFORMATION TEACHER "<<endl;
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<endl;	
		cout<<setw(10)<<"ID"<<setw(15)<<"Name"<<setw(14)<<"Age"<<setw(15)<<"Skill"<<setw(16)<<"Time Teaching"<<setw(14)<<"Salary" <<setw(16)<<"Tax salary"<<setw(18)<<"total salary"<<endl;
		cout<<endl;
		for(int k = 0; k<z; k++)
		{
			cout<<setw(10)<<idt[k]<<setw(16)<<nte[k]<<setw(13)<<aget[k]<<setw(15)<<skill[k]<<setw(12)<<teach[k]<<setw(15)<<salary[k]<<"$"  <<setw(14)<<tax[k]<<"$"<<setw(16)<<total_salary[k]<<"$"<<endl;
			cout<<endl;
		}
			cout<<"\t\t<=========================================================================>"<<getch()<<endl;
	cout<<endl;
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<setw(58)<<" 		SEARCH INFORMATION TEACHER "<<endl;
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<endl;	
	int is;           
	is=0;
		cout<<"Input ID you want search : "; cin>>idtmp;
		for(int i = 0; i<z; i++){
				if (idtmp ==idt[i] ){
					is=1;
					cout<<"The ID "<<idtmp<<" have in list."<<getch()<<endl;
				}
		}
		if(is==0){
				cout<<"The ID "<<idtmp<<" don't have in list."<<getch()<<endl;
		}
	}
	
void remove(){
	system("cls");
	ia();
system("color F5");
	string retmp,nte;
	int isd;
//	int age;
//	float sal,tax_sa,total
	display();
	cout<<endl;
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<setw(58)<<" 		Delete INFORMATION TEACHER "<<endl;
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<endl;	
		cout<<"Input ID for remove : "; cin>>retmp;
		for(int i =0; i<z; i++){
			if(idt[i] == retmp){
				for(int j = i ; j<z;j++){
				idt[j]=idt[j+1];
				nte[j]=nte[j+1];
				aget[j]=aget[j+1];
				skill[j]=skill[j+1];
				salary[j]=salary[i+1];
				tax[j]=tax[j+1];
				total_salary[j]=total_salary[j+1];
				}
				isd=1;
					z--;
			}
		}
		cout<<"\t\t<=========================================================================>"<<endl;
		
		if(isd==0)
		{
		
			cout<<" You information  is'n delete successful :("<<getch()<<endl;
		}else{
				cout<<" You information  is delete successful ;)"<<getch()<<endl;
		}
		display();
			
	}
void Upgrate(){
	string udtmp;
	int isu =0,choice;
		system("cls");
		ia();
		system("color F5");
	cout<<endl;
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<setw(58)<<" 		Display INFORMATION TEACHER "<<endl;
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<endl;	
		cout<<setw(10)<<"ID"<<setw(15)<<"Name"<<setw(14)<<"Age"<<setw(15)<<"Skill"<<setw(16)<<"Time Teaching"<<setw(14)<<"Salary" <<setw(16)<<"Tax salary"<<setw(18)<<"total salary"<<endl;
		cout<<endl;
		for(int k = 0; k<z; k++)
		{
			cout<<setw(10)<<idt[k]<<setw(16)<<nte[k]<<setw(13)<<aget[k]<<setw(15)<<skill[k]<<setw(12)<<teach[k]<<setw(15)<<salary[k]<<"$"  <<setw(14)<<tax[k]<<"$"<<setw(16)<<total_salary[k]<<"$"<<endl;
			cout<<endl;
		}
			cout<<"\t\t<=========================================================================>"<<getch()<<endl;
	cout<<endl;
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<setw(58)<<" 		EDITE INFORMATION TEACHER "<<endl;
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<endl;
		h:
		cout<<"|===============================================|"<<endl;
		cout<<"Do you want edite information?"<<endl;
		cout<<"\t1.New ID"<<endl;
		cout<<"\t2.New Name"<<endl;
		cout<<"\t3.New Age"<<endl;
		cout<<"\t4.New Skill"<<endl;
		cout<<"\t5.New Time Teaching"<<endl;
		cout<<"\t6.EDITE ALL OPTION."<<endl;
		cout<<"\t7.Stay Or Exit."<<endl;
		cout<<"|===============================================|"<<endl;
		cout<<"\tCHOICE THIS OPTION..."; cin>>choice;
		cout<<"|===============================================|"<<endl;
		if(choice == 0 || choice >8){
			goto h;
		}
		switch(choice){
			case 1:
				cout<<endl;
			cout<<"Ok You can edit Id. "<<endl;	
			cout<<"Enter last ID : "; cin>>udtmp;
			for(int i =0 ; i<z; i++){
				if(udtmp == idt[i]){
					cout<<"Input New ID : "; cin>>idt[i];
					isu=1;
				}
			}
			cout<<"You can see information.";
			system("pause");
			display();
			goto h;
				break;
			case 2:
				cout<<"Ok You can Edit Name. "<<endl;	
				cout<<"Enter  ID : "; cin>>udtmp;
				for(int i =0; i<z;i++){
					if  (udtmp == idt[i]){
						cout<<"Input New Name : "; cin.clear();cin.ignore();getline(cin,nte[i]);
						isu=1;
					}
				}
			cout<<"You can see information.";
			system("pause");
			display();
			goto h;
			case 3:
				cout<<"Ok You can Edit AGE. "<<endl;	
				cout<<"Enter  ID : "; cin>>udtmp;
				for(int i =0; i<z;i++){
					if  (udtmp == idt[i]){
						cout<<"Input New Age : "; cin>>aget[i];
						isu=1;
					}
				}
				cout<<"You can see information.";
			system("pause");
			display();
				goto h;
				break;
			case 4:
				cout<<"Ok You can Edit Skill. "<<endl;	
				cout<<"Enter  ID : "; cin>>udtmp;
				for(int i =0; i<z;i++){
					if  (udtmp == idt[i]){
						cout<<"Input New Skill : "; cin.clear();cin.ignore();getline(cin,skill[i]);
						isu=1;
					}
				}
				cout<<"You can see information.";
			system("pause");
			display();
				goto h;
				break;
			case 5:
			cout<<"Ok You can Edit Time Teaching. "<<endl;	
				cout<<"Enter  ID : "; cin>>udtmp;
				for(int i =0; i<z;i++){
					if  (udtmp == idt[i]){
						cout<<"Input New Time Teaching : "; cin>>teach[i];
						salary[i] = teach[i]*times;
							if(salary[i]>1000)
						{
						    	tax[i]=salary[i] *0.05;
								total_salary [i] = salary[i] - tax[i];
						}else if(salary[i]>500)
						{
						    	tax[i]=salary[i] *0.03;
								total_salary [i] = salary[i] - tax[i];
						}else  
						{
						    	tax[i]=0 ;
								total_salary [i] = salary[i] - tax[i];
						}
						isu=1;
					}
				}
				cout<<"You can see information.";
			system("pause");
			display();
				goto h;
				break;
			case 6:
			cout<<"Do you want modify all option information."<<endl;
			cout<<"Enter information for modify (ID,Name,Age,Skill,Time Teaching),but you input ID for operate >> "; cin>>udtmp;
			for (int i = 0; i<z;  i++){
					if(udtmp == idt[i]){
					cout<<"Input New ID : "; cin>>idt[i];
					cout<<"Input New Name : "; cin.clear();cin.ignore();getline(cin,nte[i]);
					cout<<"Input New Age : "; cin>>aget[i];
					cout<<"Input New Skill : "; cin.clear();cin.ignore();getline(cin,skill[i]);
					cout<<"Input New Time Teaching : "; cin>>teach[i];
						salary[i] = teach[i]*times;
							if(salary[i]>1000)
						{
						    	tax[i]=salary[i] *0.05;
								total_salary [i] = salary[i] - tax[i];
						}else if(salary[i]>500)
						{
						    	tax[i]=salary[i] *0.03;
								total_salary [i] = salary[i] - tax[i];
						}else  
						{
						    	tax[i]=0 ;
								total_salary [i] = salary[i] - tax[i];
						}
						isu=1;
				}
			}
			cout<<"You can see information.";
			system("pause");
			display();
			goto h;
				break;	
				case 7:
						char op;
						cout<<endl;
						system("cls");
						ia();
						k: 
						cout<<"\t\t|========================================|"<<endl;
						cout<<"\t\t|=\t\t[M].Manu\t\t=|"<<endl;
						cout<<"\t\t|=\t\t[T].Teacher\t\t=|"<<endl;
						cout<<"\t\t|=\t\t[S].Student\t\t=|"<<endl;
						cout<<"\t\t|=\t\t[B].Break\t\t=|"<<endl;
						cout<<"\t\t|========================================|"<<endl;
						cout<<endl;cout<<"\t Input Option you want to go..."; cin>>op;
//						if( op != 'T' ||op != 'M' ||  op != 'S' ){
//							goto k;
//						}
					if(op == 'M' || op =='m'){
							manu();
						}else if(op == 'T'|| op == 't'){
							teacher();
						}else if(op == 'S'|| op == 's'){
							Student();
							
						}else if(op == 'B' || op == 'b'){
							thank();
							exit(0);
						}else{
							goto k;
						}
					break;
				
				
		}
		cout<<endl;
		for(int k = 0; k<z; k++)
		{
			cout<<setw(10)<<idt[k]<<setw(16)<<nte[k]<<setw(13)<<aget[k]<<setw(15)<<skill[k]<<setw(12)<<teach[k]<<setw(15)<<salary[k]<<"$"  <<setw(14)<<tax[k]<<"$"<<setw(16)<<total_salary[k]<<"$"<<endl;
			cout<<endl;
		}
		
		if(isu == 0){
			
			cout<<"Your information update aren't successfully.;)"<<endl;
		}else{
			
			cout<<"Your information update are successful.;)"<<endl;
		}
	
}

void sortt(){
	system("cls");
	ia();
system("color F5");
	cout<<endl;
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<setw(58)<<" 		Display INFORMATION TEACHER "<<endl;
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<endl;	
		cout<<setw(10)<<"ID"<<setw(15)<<"Name"<<setw(14)<<"Age"<<setw(15)<<"Skill"<<setw(16)<<"Time Teaching"<<setw(14)<<"Salary" <<setw(16)<<"Tax salary"<<setw(18)<<"total salary"<<endl;
		cout<<endl;
		for(int k = 0; k<z; k++)
		{
			cout<<setw(10)<<idt[k]<<setw(16)<<nte[k]<<setw(13)<<aget[k]<<setw(15)<<skill[k]<<setw(12)<<teach[k]<<setw(15)<<salary[k]<<"$"  <<setw(14)<<tax[k]<<"$"<<setw(16)<<total_salary[k]<<"$"<<endl;
			cout<<endl;
		}
			cout<<"\t\t<=========================================================================>"<<endl;
			cout<<"Press anykey to sort...";
			cout<<endl;
		getch();
		system("color E0");
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<setw(58)<<" 		Sort INFORMATION TEACHER "<<endl;
		cout<<setw(80)<<"|========================================================|"<<endl;
		cout<<endl;
		for(int i = 0 ; i<z; i++){
			for(int j =i+1; j<z; j++){
				string itmp,name,atmp,sktmp;
				int tmp;
				float ttmp,taxtmp,stmp;
					if(idt[i]>idt[j]){
							itmp = idt[i];
							idt[i] = idt[j];
							idt[j] = itmp;
							
							name = nte[i];
							nte[i] = nte[j];
							nte[j]= name;
							
							atmp = aget[i];
							aget[i] = aget[j];
							aget[j] = atmp;
							
							sktmp=skill[i];
							skill[i]=skill[j];
							skill[j]= sktmp;
							
							tmp = teach[i];
							teach[i] = teach[j];
							teach[j] = tmp;
							
							stmp = salary[i];
							salary[i] = salary[j];
							salary[j] = stmp; 
							
							taxtmp = tax[i];
							tax[i] = tax[j];
							tax[j] = taxtmp;
							
							ttmp = total_salary[i];
							total_salary[i] = total_salary[j];
							total_salary[j] = ttmp;													
					}
			}
		}
		
			cout<<setw(10)<<"ID"<<setw(15)<<"Name"<<setw(14)<<"Age"<<setw(15)<<"Skill"<<setw(16)<<"Time Teaching"<<setw(14)<<"Salary" <<setw(16)<<"Tax salary"<<setw(18)<<"total salary"<<endl;
		cout<<endl;
		for(int k = 0; k<z; k++)
		{
			cout<<setw(10)<<idt[k]<<setw(16)<<nte[k]<<setw(13)<<aget[k]<<setw(15)<<skill[k]<<setw(12)<<teach[k]<<setw(15)<<salary[k]<<"$"  <<setw(14)<<tax[k]<<"$"<<setw(16)<<total_salary[k]<<"$"<<endl;
			cout<<endl;
		}
	cout<<"\t\t<=========================================================================>"<<getch()<<endl;
		
	
}

int  main()		
{
	int option;
//		setmode(_fileno(stdout),_O_U16TEXT);
SetConsoleCP(CP_UTF8);
	
	login();

	return 0;
}

void manu(){
	while(true)
	{	
	system("cls");
	ia();
	system("color E9");
	h:
	header:
			int option;
		cout<<setw(80)<<"<<========================================================>>"<<endl;
		cout<<setw(65)<<" Would do you have choice of menu. "<<endl;
		cout<<setw(60)<<" 1.  Teacher. "<<endl;
		cout<<setw(60)<<" 2.  Student. "<<endl;
		cout<<setw(60)<<" 3.  Break.   "<<endl;
		cout<<setw(80)<<"<<========================================================>>"<<endl;
		cout<<setw(40)<<"|====================================|"<<endl;
		cout<<setw(40)<<"| Enter Option to input information  |"<<endl;
		cout<<setw(40)<<"|====================================|"<<endl;
	cout<<"\t\t";cin>>option;
		switch(option)
		{
					case 1 :
						teacher();
					break;
					case 2 :                                                   
						Student();			
					break;
					case 3  :
						thank();
						exit(0);
						break;
				
		}
	}
}

void teacher(){
	ch:
		system("cls");
			ia();
	system("color F9");
				cout<<setw(65)<<"|====================================|"<<endl;
				cout<<setw(60)<<"    Information of Teacher 	"<<endl;
				cout<<setw(65)<<"|====================================|"<<endl;
				cout<<"1.Input  information   "<<endl;
			   	cout<<"2.Output information  "<<endl;
				cout<<"3.Search information  "<<endl;
				cout<<"4.Delete information  "<<endl;
				cout<<"5.Edite  information   "<<endl;
				cout<<"6.Sort	information    "<<endl;
				cout<<"7.Exit   information    "<<endl;
				int choose;
				
				cout<<"Choose option : ";cin>>choose;
				if(choose <=0 || choose >=8 )
				{
					cout<<"You can try again!"<<getch();
					cout<<endl; goto ch;
				}
				system("cls");
						switch(choose)
						{
							case 1 :
								cout<<endl;
								inteacher();							
								goto ch;
								break;
							case 2 :
								cout<<endl;	
							   display();
						    goto ch;
								break;
							case 3 :
								cout<<endl;
								SearchT();
								goto ch;
								break;
							case 4 :
								cout<<endl;
								remove();
								goto ch;
								break;
							case 5 :
								cout<<endl;
								 Upgrate();
								goto ch;
								break;
							case 6 :
								cout<<endl;
								sortt();
								goto ch;
								break;
							case 7 :
								manu();
								break;
						}	
}

void Student(){
	student:
		system("cls");
			ia();
	system("color F9");
			
				cout<<endl<<endl;
				cout<<setw(65)<<"|====================================|"<<endl;
				cout<<setw(65)<<"|=   Input Information of student   =|"<<endl;
				cout<<setw(65)<<"|====================================|"<<endl;
				cout<<"1.Input  information   "<<endl;
			   	cout<<"2.Output information  "<<endl;
				cout<<"3.Search information  "<<endl;
				cout<<"4.Delete information  "<<endl;
				cout<<"5.Edite  information   "<<endl;
				cout<<"6.Sort	information    "<<endl;
				cout<<"7.Exit	information    "<<endl;
				int choice;
				to:
				cout<<"Choice option : ";cin>>choice;
				if(choice <=0 || choice >=8 )
				{
					cout<<"You can try again!"<<getch();
					cout<<endl; goto to;
				}
				system("cls");
				system("color 15");
						switch(choice)
						{
							case 1 :
								cout<<endl;
								inputs();
								system("pause");
								goto student;
								break;
							case 2 :
								cout<<endl;
								outputs();
							goto student;
								break;
							case 3 :
								cout<<endl;
								searchs();							
							goto student;
								break;
							case 4 :
								cout<<endl;
								deletes();							
							goto student;
								break;
							case 5 :
								cout<<endl;
								updates();							
							goto student;
								break;
							case 6 :
									cout<<endl;
							sorts();
							system("pause");							
							goto student;
								break;
							case 7 :
								manu();
								break;
						}
}