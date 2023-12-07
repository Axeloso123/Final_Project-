
/*Angel Aguilar y Axel Roa
2023 oct 4

*/
#include <iostream>
#include <string>
using namespace std;
class Animal {
    virtual void makeSound() = 0;
};

class Dog : Animal {
	
public:	string name;
	string breed;
	int age;
	string purp; //why have the animal
	bool own; //is it wild or a pet? cambia a bool
	
	
	//constructor
	Dog(string name, string breed, int age, string purp, bool own){
        this->name = name;
        this->breed=breed;
        this->age=age;
        this->purp=purp;
        this->own=own;
    } //constructor

    // Getters Setters
    void SetName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }

    void setBreed(string breed){
        this->breed = breed;
    }
    string getBreed(){
        return breed;
    }

    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return age;
    }
    
    void setPurp(string purp){
        this->purp = purp;
    }
    string getPurp(){
        return purp;
    }
    
    void setOwn(bool own){
        this->own = own;
    }
    bool getOwn(){
        return own;
    }
    void makeSound(){
        cout<< getName() << " barks." <<endl;
    }

    void chaseTail() {
        cout << getName() << " chases its tail." <<endl;
    }

    void barkAtNeighbor() {
        cout << getName() << " barks at the neighbor." <<endl;
    }
    
    virtual void wild(){ // polymorphism
                    
        cout<<"Check if its a wild animal."<<endl;
    }
    
};
class Cat : Animal {
	
public:
	string name;
	string breed;
	int age;
	string purp; //why have the animal
	bool own;
	
public:
	//constructor
	Cat(string name, string breed, int age, string purp, bool own){
        this->name = name;
        this->breed=breed;
        this->age=age;
        this->purp=purp;
        this->own=own;
    } 
void SetName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }

    void setBreed(string breed){
        this->breed = breed;
    }
    string getBreed(){
        return breed;
    }

    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return age;
    }
    
    void setPurp(string purp){
        this->purp = purp;
    }
    string getPurp(){
        return purp;
    }
    
    void setOwn(bool own){
        this->own=own;
    }
    bool getOwn(){
        return own;
    }
    void makeSound(){
        cout << getName() << " meows." <<endl;
    }

    void vomit() {
        cout << getName() << " vomits after grooming itself" <<endl;
    }

    void scratch() {
        cout << getName() << " scratches the furniture." <<endl;
    }
    
    virtual void wild(){
                    
        cout<<"Please check if it's a wild animal."<<endl;
    }
    
};

class Pup1: public Dog{
	private:
		string sex;
		string add;
	
	public:	
    Pup1(string name, string breed, int age, string purp, bool own, string sex, string add)
        :Dog(name, breed, age, purp, own){
            this->sex = sex;
            this->add = add;
        }
    
    void eat(){
    	cout<<name<<" is a "<<sexo<<" and eats healthy."<<endl;
	}
	
	void sleep(){
		cout<<name<<" is "<<age<<" and sleeps a lot."<<endl;
	}
	
	void wild(){
        if(own == true)
        	cout<<"This pet lives in "<<add<<endl;
        else
        	cout<<"This is a wild animal."<<endl;
    }
};

class Pup2: public Dog{
	private:
		string sex;
		string add;
	
	public:	
    Pup2(string name, string breed, int age, string purp, bool own, string sex, string add)
        :Dog(name, breed, age, purp, own){ 
            this->sex = sex;  
            this->add = add;
        }
     
    void eat(){
    	cout<<name<<" is a "<<sex<<" and eats healthy."<<endl;
	}
	
	void sleep(){
		cout<<name<<" is "<<age<<" and sleeps a lot."<<endl;
	}
	
	void wild(){
        if(own == true)
        	cout<<"This pet lives in "<<add<<endl;
        else
        	cout<<"This is a wild animal."<<endl;
    }
};

class Kit1: public Cat{
	private:
		bool cute;
		string add;
	public:
    Kit1(string name, string breed, int age, string purp, bool own, bool cute, string add)
        :Cat(name, breed, age, purp, own){
            this->cute = cute;
            this->add = add;
        }
        
    void jump(){
    	cout<<name<<" is a "<<breed<<" and jumps high."<<endl;
	}
	
	void sweet(){
		if(cute==true){
			cout<<name<<" is a cute cat. "<<endl;
		} else{
			cout<<name<<" isn't a cute cat. "<<endl;
		}
	}
	
	void wild(){
        if(own == true)
        	cout<<"This pet lives in "<<add<<endl;
        else
        	cout<<"This is a wild animal."<<endl;
    }
};
//
class Kit2: public Cat{
	private:
		bool cute;
		string add;
	public:
    Kit2(string name, string breed, int age, string purp, bool own, bool cute, string add)
        :Cat(name, breed, age, purp, own){
            this->cute = cute;
            this->add = add;
        }
    void jump(){
    	cout<<name<<" is a "<<breed<<" and can jump high."<<endl;
	}
	void sweet(){
		if(cute==true){
			cout<<name<<" is a cute cat. "<<endl;
		} else{
			cout<<name<<" is not a cute cat. "<<endl;
		}
	}
	void wild(){
        if(own == true)
        	cout<<"This pet lives in "<<add<<endl;
        else
        	cout<<"This is a wild animal."<<endl;
    }
};
void showInfoAnimal(Dog* dog) {
    cout << "Name: " << dog->getName() <<endl;
    cout << "Age: " << dog->getAge() << " years" << endl;
}
int main() {
    Dog dog1 = Dog("Fido", "husky", 3, "therapy", true);
//    Cat cat1 = Cat("Help", "meh", 3, "help", true);
    //clases hijas
    Pup1 puppy1 = Pup1("Puppy1", "goldenRetriever", 2, "Pet", false, "Macho", "Hospital1");
//    Pup2 puppy2 = Pup2("Puppy2", "cockerSpaniel", 3, "NONE", false, "Hembre", "NONE");
//    Kit1 kitty1 = Kit1("Snowball", "bengall tiger", 3, "Service", false, true, "hom3");
//    Kit2 kitty2 = Kit2("Zodiac", "tiger", 9, "NONE", true, flase, "NONE");
    showInfoAnimal(&dog1);
    dog1.wild();
    puppy1.wild();
    return 0;
}
