#include<iostream>
using namespace std;
class Exp{
	public:
		Exp()
		{
			cout<<"constricture is called"<<endl;
			
		}
		void print()
		{
			cout<<"this is in middle"<<endl;
		}
		~Exp()
		{
			cout<<"ditructor is called "<<endl;
			
		}
};
int main()
{
	Exp obj;
	obj.print();
	
	return 0;
}
