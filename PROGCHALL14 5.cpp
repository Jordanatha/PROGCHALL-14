#include <iostream>
using namespace std;

class Numdays {
	private :
		float hours;
		int maxSickDays;
		int sickTaken;
		int maxVacation;
		int vacTaken;
		int maxUnpaid;
		int unpaidTaken;
	
	public :
		Numdays (){
			hours = 0;
			maxSickDays = 0;
			sickTaken = 0;
			maxVacation = 0;
			vacTaken = 0;
			maxUnpaid = 0;
			unpaidTaken = 0;
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
		
		void setMaxSickDays (int maxDays){
			maxSickDays = maxDays;
		}
		
		int getMaxSickDays (){
			return maxSickDays;
		}
		
		void setSickTaken (int days){
			if (days > getMaxSickDays()){
				cout << "Over Limit.";
			}
			this -> sickTaken = days;
		}
	
		void setMaxVacation (int maxDays){
			maxVacation = maxDays;
		}
		
		int getMaxVacation (){
			return maxVacation;
		}
		
		void setVacTaken (int days){
			if (days > getMaxVacation()){
				cout << "Over Limit.";
			}
			this -> vacTaken = days;
		}
		
		void setMaxUnpaid (int num){
			maxUnpaid = num;
		}
		
		int getMaxUnpaid (){
			return maxUnpaid;
		}
		
		void setUnpaidTaken (int num){
			if (num > getMaxUnpaid()){
				cout << "Over Limit.";
			}
			this -> maxUnpaid = num;
		}
		
		void showData (){
			cout<<"Hours Work: " << hours<<endl;
			cout<<"Days(s) Work: "; 
			print(); 
			cout<<"Maximum Number of Days Sick: " << maxSickDays<<endl;
			cout<<"Number of Days Sick: " << sickTaken<<endl;
			cout<<"Maximum Number of Days of Paid Vacation: " << maxVacation<<endl;
			cout<<"Number of Days of Paid Vacation: " << vacTaken<<endl;
			cout<<"Maximum of Days of Unpaid Vacation: " << maxUnpaid<<endl;
			cout<<"Number of Days of Unpaid Vacation: " << unpaidTaken<<endl<<endl;
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
	
	obj.showData();
	
	return 0;
}
