#include "base.cpp"
class Assistant: public base{
	private:
		double salary;	
	public:
		//setter
		void setsalary(double salary){
			this->salary=salary;
		}
		//************************************
		// getter
		double getsalary(){
			return salary;
		}
		//****************************************
};
