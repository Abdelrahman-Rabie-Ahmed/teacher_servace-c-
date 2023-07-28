#include "Base.cpp"
class Student: public Basedata{
	private:
		int groub;
		int payments;
		int late_payment;
	public:
		       //setter
		void setgroub(int groub){
			this->groub=groub;
		}
		void setpayments(int payments){
			this->payments=payments;
		}
		void setlate_payment(int late_payment){
			this->late_payment=late_payment;
		}	
		//*******************************************
		        //Getter 
		int getgroub(){
			return groub;
		}
		int getpayments(){
			return payments;
		}
		int getlate_payment(){
			return late_payment;
		}
		//********************************************
};
