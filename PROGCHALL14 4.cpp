#include <iostream>
using namespace std;

class Numdays {
	private :
		int hours;
	
	public :
		Numdays (){
			hours = 0;
		}
		
		Numdays (int hours){
			this -> hours = hours;
		}
		
		void setNumdays (int hours){
			this -> hours = hours;
		}
		
		void print (){
			cout << hours/8 << "Day(s)" << endl;
		}
		
		Numdays operator ++ (){
			++hours;
			return *this;
		}
		
		Numdays operator --(){
			--hours;
			return *this;
		}
		
		Numdays operator ++(int){
			Numdays temp (hours);
			hours ++;
			return temp;
		}
		
		Numdays operator -- (int){
			Numdays temp (hours);
			hours --;
			return temp;
		}
		
		Numdays operator + (const Numdays &right){
			Numdays temp;
			
			temp.hours = hours + right.hours;
			return temp;
		}
		
		Numdays operator - (const Numdays &right){
			Numdays temp;
			
			temp.hours = hours + right.hours;
			return temp;
		}
};
int main (){
	int number;
	
	Numdays obj;

	cout << "Work hours : ";
	cin >> number;
	cout << endl;
	
	obj.setNumdays(number);
	obj.print();
	
	return 0;
}
