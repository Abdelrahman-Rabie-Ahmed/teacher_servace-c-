class Assistant{
	private:
		string name;
		string phone_number;
		double salary;
		int presence;	
	public:
		//setter
		void setname(string name){
			this->name=name;
		}
		void setphone_number(string phone_number){
			this->phone_number=phone_number;
		}
		void setsalary(double salary){
			this->salary=salary;
		}
		void setpresence(int presence){
			this->presence=presence;
		}
		//************************************
		// getter
			string getname(){
			return name;
		}
		string getphone_number(){
			return phone_number;
		}
		double getsalary(){
			return salary;
		}
		int getpresence(){
			return presence;
		}
		//****************************************
};
