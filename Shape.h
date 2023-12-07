
#pragma once 
using namespace std;

class Shape{ 
protected:
    string name; 
    int sides;
    float area;
    float per;

public:
    // Methods
    void prop(){ //properties
        cout << "Name: " << name << endl;
        cout << "Number of sides: " << sides << endl;
        cout << "Area: " << area << endl;
        cout<< "Perimeter: "<<per<<endl;
    }
    
    void id(){
        cout << "Number of sides: "<<sides<<endl;
        if(sides==2||sides<=0){
        	cout<<"This shape is NOT a valid shape"<<endl;
		}
    }
    
    //constructor
    Shape(string name, int sides, float area, float per){
        this->name=name;
        this->sides=sides;
        this->area=area;
        this->per=per;
    }

	//destructor
    ~Shape(){
        cout << "(Destroying shape)" << endl;
    }

    // Getters and Setters
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }

    void setSides(int sides){
        this->sides = sides;
    }
    int getSides(){
        return sides;
    }

    void setArea(){
        this->area=area;
    }
    float getArea(){
        return area;
    }
    
    void setPer(){
    	this->per=per;
	}
	float getPer(){
		return per;
	}

};
