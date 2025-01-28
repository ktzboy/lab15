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
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

void shuffle(int &a, int &b, int &c, int &d) {
    int x=a, y=b, z=c, o=d;
    int money[] = {x, y, z, o};
    a = money[rand()%4];
    do {
        b = money[rand()%4];
    } while(b == a);
    do {
        c = money[rand()%4];
    } while(c == a or c == b);
    do {
        d = money[rand()%4];
    } while(d == a or d == b or d == c);
}