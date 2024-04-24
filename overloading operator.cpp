#include<iostream>
using namespace std;
class overload{
	public:
		int a;
		int b;
	public:
		overload(int a1, int b1){
			a=a1;
			b=b1;
			int sub=a-b;
			cout<<"sub:"<<sub<<endl;
		}
	void operator-(){
		a=-a;
		b=-b;
	}
	void display(){
		cout<<"a:"<<a<<"b:"<<b<<endl;
	}
};
int main(){
	overload o1(4,3);
	-o1;
	o1.display();
	return 0;
}