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
			if (maxDays > 240){
				cout << "Over limit. Limit = 240.";
			}
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
	int number, num;
	
	Numdays obj;

	cout << "Work hours : ";
	cin >> number;
	cout << endl;
	
	obj.setNumdays(number);
	obj.print();


	do {
	obj.showData();
	
	cout<<"1. Increase Hour(s) Worked"<<endl;
	cout<<"2. Decrease Hour(s) Worked"<<endl;
	cout<<"3. Input Maximum Number of Days Sick"<<endl;
	cout<<"4. Input Number of Days Sick"<<endl;
	cout<<"5. Input Maximum Number of Days of Paid Vacation"<<endl;
	cout<<"6. Input Number of Days of Paid Vacation"<<endl;
	cout<<"7. Input Maximum Number of Days of Unpaid Vacation"<<endl;
	cout<<"8. Input Number of Days of Unpaid Vacation"<<endl;
	cout<<"9. Show Data"<<endl;
	cout<<"10. Exit"<<endl;	
	cout<<"Input Choice: ";
	cin>>num;
	
	switch (num){
		case 1:
			obj++;
			cout << "Added to : ";
			obj.print();
			break;
		
		case 2:
			obj--;
			cout << "Reduced to : ";
			obj.print();
			break;
			
		case 3:
			cout << "Input : ";
			cin >> num;
			obj.setMaxSickDays(num);
			break;
			
		case 4:
			cout << "Input : ";
			cin >> num;
			obj.setSickTaken (num);
			break;
			
		case 5:
			cout << "Input : ";
			cin >> num;
			obj.setMaxVacation(num);
			break;
			
		case 6:
			cout << "Input : ";
			cin >> num;
			obj.setVacTaken (num);
			break;
		
		case 7:
			cout << "Input : ";
			cin >> num;
			obj.setMaxUnpaid(num);
			break;
			
		case 8:
			cout << "Input : ";
			cin >> num;
			obj.setUnpaidTaken(num);
			break;
			
		case 9:
			obj.showData();
			break;
		
		case 10:
				exit (0);
	}
	cout << "Press Enter to Continue.";
	cin.ignore();
	cin.get();
	
	cout << string (20, '\n');
}
	while (num != 10);

	return 0;
}
