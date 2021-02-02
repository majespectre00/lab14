#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &i1,int &i2, int &i3, int&i4){
    int i = rand()%6+1;
	int temp;
	switch (i)
	case 1:{
		temp = i1;
		i1=i2;
		i2=temp;
		break;
	case 2:
		temp = i1;
		i1=i3;
		i3=temp;
		break;
	case 3:
		temp = i1;
		i1=i4;
		i4=temp;
		break;
	case 4:
		temp = i2;
		i2=i3;
		i3=temp;
		break;
	case 5:
		temp = i2;
		i2=i4;
		i4=temp;
		break;
	case 6:
		temp = i3;
		i3=i4;
		i4=temp;
		break;
	}
}
