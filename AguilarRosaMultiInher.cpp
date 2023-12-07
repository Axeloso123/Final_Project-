/*Angel Aguilar Salazar and Henrik Axel de la Rosa
2023 oct 13
*/
#include <bits/stdc++.h>
using namespace std;
class Math{
	public:
	string Found;
	Math(string found){
		Found = found;
		cout<<"Creating object Math"<<endl;

	}
	void solve(){
		cout<<"Time to solve math via the "<<this->Found<<endl;;
	}
	~Math(){
		cout<<"Destroying Math"<<endl;
	}
};

class Phil{
	public:
		string Moral;
	Phil(string moral){
		Moral = moral;
		cout<<"Creating object Phil"<<endl;
	}
	void solve(){
		cout<<"I must live a correct life via "<<this->Moral<<endl;
	}
	~Phil(){
		cout<<"Destroying Philosophy"<<endl;
	}
};
class Sci: public Math, public Phil{
		private:
			string Exper;
		public:
			Sci(string exper, string found, string moral):Math(found), Phil(moral){
			
				Exper=exper;
				cout<<"Creating object Sci"<<endl;
		}
	void method_Math(){
		cout<<"Activating method of math of child class 1"<<endl;
		Math::solve();
	}
	void method_Phil(){
		cout<<"Activating method of class Phil of child class 1"<<endl;
		Phil::solve();
	}
	
	~Sci(){
		cout<<"Destroying Science"<<endl;
	}
};

class Comp: public Math, public Phil{
	private:
		string Code;
	public:
		Comp(string code, string found, string moral): Math(found), Phil(moral){
			Code = code;
			cout<<"Creating object Comp of child class2"<<endl;

		}
		
	void method_Math_and_Phill(){
		cout<<"Activathing method math and phil of child class 2"<<endl;
		cout<<" Creating code"<<endl;
		Math::solve();
		cout<<endl;
		Phil::solve();
		cout<<" I will create a code that "<<Code<<" based on "<<this->Found<<endl;
	}
	~Comp(){
		cout<<"Destorying computer science"<<endl;
	}
};

int main(){
	Math("Counting");
	Phil("Ethics");
	
	Sci phy = Sci("SternGerlach", "Uncertainty", "NoOneHurt");
	Comp poo = Comp("AnyProgram", "Algebra+Calculus", "NoOneHurt");
	phy.metodo_Math();
	phy.metodo_Phil();
	poo.metodo_Math_y_Phill();
	
	return 0;
}
