#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
int mass [4] = {0,1,2,3};
int cmd;
while(1){
}
cout<<"0-exit,1-print,2-idx,3-sort"<<endl;
cout<<"vvedite chislo"<<endl;
cin>>cmd;

switch (cmd)
	{	
	case 0:{
		return 0;
		break;
}
	case 1:{
		for(int i;i<4;i++)
		cout<<mass[4];
		cout<<endl;      
		break;
	}
	case 2:{
		
		break;
	}
	case 3:{
		break;
	}	
	}
 
	system("pause");
	return 0;
}
