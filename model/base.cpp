#include<iostream>
using namespace std;
class base{
	private:
		string name;
		string phone_number;
		int presence;
	public:
		//setter
		void setname(string name){
			this->name=name;
		}
		void setphone_number(string phone_number){
			this->phone_number=phone_number;
		}
		void setpresence(int presence){
			this->presence=presence;
		}
		//getter
		string getname(){
			return name;
		}
		string getphone_number(){
			return phone_number;
		}
		int getpresence(){
			return presence;
		}
};
