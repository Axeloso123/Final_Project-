/*Angel Aguilar, Axel Rosa
2023 nov 10
*/
#include <bits/stdc++.h>
using namespace std;
//defining macros
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define DATE 
// parametrized macros
#define REP(i, a, b) for(size_t i=a; i<b; i++)
#define AREA(l, b) (l * b)
//defining constants
#define PI 3.1416
#define PHI 1.618
#include "Shape.h"
#include "RoundShape.h"
#include "SquareShape.h"
int main(){
	int l1 = 10, l2 = 5, area;
    	//implementing a macro
	area = AREA(l1, l2);
	//creating a father class object
    Shape shape1 = Shape("circle0", 3, PI*pow(3,2), PI*2*3); // using a constant
    shape1.prop();
    
    RoundShape round1 = RoundShape("oval0", 1, 3, 9, "brown", false, true, true);
    round1.prop();
    round1.ax();
    
    SquareShape square1 = SquareShape("square0", 4, 3, 8, "light", true, false, true);
    square1.id();
    square1.anim();
    cout<<"square properties"<<endl;
    square1.prop();
}
