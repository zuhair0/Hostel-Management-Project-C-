#include<iostream>
#include<iomanip>
#include"USER CLASS.cpp"
//#include"HOSTEL SYSTEM.cpp"
using namespace std;
int main(){
	user student;
	hostelsystem H;
	Hostel hos;
	showdetails s;
	room R;
	string N,Pname,addres,city;
	int std_phone,parent_phone,range;
	char choice;
	do{
		cout<<setw(50)<<"***********************************"<<endl;
		cout<<setw(50)<<"*     HOSTEL MANAGMENT SYSTEM     *"<<endl;
		cout<<setw(50)<<"***********************************"<<endl;
		cout<<endl;
		cout<<setw(42)<<"-----MAIN MENU-----"<<endl;
	cout<<setw(43)<<"1. Enter student data."<<endl;
	cout<<setw(59)<<"2. Show Hostels with respect to range."<<endl;
	cout<<setw(41)<<"3. Show stored data."<<endl;
	cout<<setw(28)<<"4. Exit"<<endl;
	cout<<setw(35)<<"Enter choice: ";
	cin>>choice;
	switch(choice){
		case '1':{
			cout<<"Enter name: ";
	cin>>N;
	cout<<"Enter parent name: ";
	cin>>Pname;
	cout<<"Enter city: ";
	cin>>city;
	cout<<"Enter address: ";
	cin>>addres;
	cout<<"Enter student phoone: ";
	cin>>std_phone;
	cout<<"Enter parent phone: ";
	cin>>parent_phone;
	student.setname(N);
	student.setparentname(Pname);
	student.setcity(city);
	student.setaddress(addres);
	student.set_stdphone(std_phone);
	student.set_parentphone(parent_phone);
	cout<<"Want to see MAIN MENU again Y/N: ";
			cin>>choice;
			break;
		}
		break;
		case '2':{
		H.hostels();
		hos.hosteldetails();
		R.room23000(student);
		cout<<"Want to see MAIN MENU again Y/N: ";
			cin>>choice;
		break;
		}
		break;
		case '3':{
			s.show2(student);
			cout<<"Want to see MAIN MENU again Y/N: ";
			cin>>choice;
			break;
		}
		break;
		case '4':{
			exit(0);
			break;
		}
	}
	}while(choice =='Y' || choice=='y');
}

