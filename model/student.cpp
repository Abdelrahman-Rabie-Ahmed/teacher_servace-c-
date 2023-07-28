class Student{
	private:
		string name;
		string phone_number;
		int groub;
		int payments;
		int late_payment;
		int lessons;
	public:
		       //setter
		void setname(string name){
			this->name=name;
		}
		void setphone_number(string phone_number){
			this->phone_number=phone_number;
		}
		void setgroub(int groub){
			this->groub=groub;
		}
		void setpayments(int payments){
			this->payments=payments;
		}
		void setlate_payment(int late_payment){
			this->late_payment=late_payment;
		}
		void setlessons(int lessons){
			this->lessons=lessons;
		}	
		//*******************************************
		        //Getter 
		string getname(){
			return name;
		}
		string getphone_number(){
			return phone_number;
		}
		int getgroub(){
			return groub;
		}
		int getpayments(){
			return payments;
		}
		int getlate_payment(){
			return late_payment;
		}
		int getlessons(){
			return lessons;
		}
		//********************************************
		
};
