#include<iostream>
using namespace std;

char before(char x){
	if(x>char(64) && x<char(91)){
		if(x == 'A'){
			return 'Z';
		}else{
			return x-1;
		}
	}else{
		int y = '0';
		return y;
	}
}

int main(){
	
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
