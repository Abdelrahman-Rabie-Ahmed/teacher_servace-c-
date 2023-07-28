#include "Base.cpp"
class Assistant: public Basedata{
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
