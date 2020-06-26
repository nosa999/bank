#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <iostream>
#include <string.h>
void new_account(void);
void menu1(void);
void bardasht(void);
void variz(void);
void check1(void);
void mujudi(void);
void int_to_ascii(int,char *);
void ascii_to_int(int *, char *);
void show1(void);
using namespace std;
int m=0,n=0,check=0,amount[3],type[3];

string name[3],family[3],fatherName[3],sudur[3],tarikh[3],checkNumber[3],ID[3],type1[3];
int main(int argc, char** argv) {
	menu1();
	getch();
	return 0;
}
void menu1(){
	int a;
	cout<<"\n1-sabtenam.\n2-bardasht.\n3-variz.\n4-check.\n5-mandeHesab.\n";
	cin>>a;
		if(a==1){
		new_account();
	}
	else if(a==2){
		bardasht();
	}
	else if(a==3){
		variz();
	}
	else if(a==4){
		check1();
	}
	else if(a==5){
		mujudi();
	}
	else{
		show1();
	}
}
void new_account(){
	checkNumber[m]="";
	char zxc[5];
	int magic;
	cout<<"\nname:";
	cin>>name[m];
		cout<<"\nfamily:";
	cin>>family[m];
		cout<<"\nfatherName:";
	cin>>fatherName[m];
		cout<<"\nID:";
	cin>>ID[m];
		cout<<"\nsadere az:";
	cin>>sudur[m];
		cout<<"\nmablagh avvalie:";
	cin>>amount[m];
	cout<<"\ntarikhe eftetahe hesab:";
	cin>>tarikh[m];
		cout<<"\nno'e hesab ra entekhab konid:\n1-kutah moddat\n2-kutah moddat vizhe\n3-shenavar\n4-gharzolhasane\n";
	cin>>type[m];
	if(type[m]==1)
	type1[m]="kutah moddat";
	else if(type[m]==2)
	type1[m]="kutah moddat vizhe";
	else if(type[m]==3)
	type1[m]="shenavar";
	else
	type1[m]="gharzolhasane";
	cout<<"\naya check mikhahid:  1-bale  2-kheyr  ";
	cin>>check;
	if(check==1){
	magic=rand();
	magic=magic%100;
		int_to_ascii(magic,zxc);
	cout<<magic;
	checkNumber[m]="1393"+ID[m]+zxc;
	cout<<"\nshomare check" <<(m+1) <<":" << checkNumber[m];

}
else
cout<<"\n";
	m=m+1;
	n=n+1;
	menu1();
}
void bardasht(){
	int ss,bardasht,date;
	cout<<"\nshomare hesab: ";
	cin>>ss;
	for(m=0;m<n;m++){
		if(m==ss){
			cout<<"\nmablagh bardashti: ";
			cin>>bardasht;
			cout<<"\ntarikhe bardasht: ";
			cin>>date;
			amount[ss]=amount[ss]-bardasht;
			cout<<amount[ss];
			break;
		}
		else
		continue;
	}
	menu1();
}
void variz(){
	int ss,variz,date;
	cout<<"\nshomare hesab: ";
	cin>>ss;
	for(m=0;m<n;m++){
		if(m==ss){
			cout<<"\nmablagh varizi: ";
			cin>>variz;
			cout<<"\ntarikhe variz: ";
			cin>>date;
			amount[ss]=amount[ss]+variz;
			cout<<amount[ss];
			break;
		}
		else
		continue;	
	}
	menu1();
}
void check1(){
	int ss;
	cout<<"\nshomare check ra vared konid: ";
	cin>>ss;
	menu1();
}
void mujudi(){
	int ss;
	cout<<"\nshomare hesab ra vared konid: ";
	cin>>ss;
	for(m=0;m<n;m++){
		if(m==ss){
			cout<<"\nmujudie shoma:"<<amount[m];		
			break;
		}
		else
		continue;
}
menu1();
}
void int_to_ascii(int value,char *str){
	int saveVal=value;
	char temp, *saveStr=str;
	if(value<0)
	value *= -1;
	do{
		*str++ =(value%10)+48;
		value = value/10;
	}while(value>0);
	if(saveVal<0)
	*str++='-';
	*str--='\0';
	while(saveStr<str){
		temp=*str;
		*str--=* saveStr;
		*saveStr++ = temp;
	}
}
void ascii_to_int(int *value,char *str){
	int sign=1;
	*value=0;
	while(*str == ' ') str++;
	if(*str=='-' || *str=='+')
	sign = (*str++=='-')?-1:1;
	while(*str)
	if((*str>='0') && (*str <= '9'))
	*value = (*value * 10)+(*str ++ -48);
	else {
		cout<< "\nwatning:the<"<<*str<<">is invalid character.\n";
		break;
	} 
	*value *=sign;
}
void show1(){
	int ss;
		cout<<"\nshomare hesab ra vared konid: ";
	cin>>ss;
	for(m=0;m<n;m++){
		if(m==ss){
			cout<<"\nname:"<<name[m]<<"\nfamily:"<<family[m]<<"\nfatherName:"<<fatherName[m]<<"\nshomareShenasname:"<<ID[m]<<"\nmahale sudur:"<<sudur<<"\nmujudi:"<<amount[m]<<"\ntarikh eftetah hesab:"<<tarikh[m]<<"\nno'e hesab:"<<type[m];		
			break;
		}
		else
		continue;
}
menu1();
}