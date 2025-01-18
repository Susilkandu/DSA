/*
Polymorphism is a core concept in c++ that allows functions or methods  to operate differently based on the object that invokes
them. This capability is primarily achieved through Virtual functions
Types of Polymorphism:-
    1. Compile-Time polymorphism:- 
        . Also Known as static binding or early binding
        . Achieved through function overloading and operator overloading.
        . Resolved during compilation , with error caught with this stage.
    2. Runtime polymorphism:-
        . Also refered to as dynamic binding or late binding
        . Implemented using virtual functions which allow
            derived classes to override base class methods. 
        . The function to be invoked is determined at the runtime, based on the 
            actual object rather than the reference type.
**Virtual Functions:- 
    A virtual function is a member function declared in a base class using the 'virtual' keyword
     and can be overriden in derived classes. This mechanisms enables runtime polymorphism, allowing for dynamic dispatch of function calls.

*/

// Below's code are a simple illustrating virtual functions and runtime polymorphism

#include<iostream>
using namespace std;
class Shape{
    public: 
        virtual void draw(){
            cout<<"Drawing Shape"<<endl;
        }
    virtual ~Shape(){};//virtual destructor

};
class Circle:public Shape{
    public:
        void draw(){
            cout<<"Drawing Circle"<<endl;
        }
};
class Square:public Shape{
    public:
        void draw(){
            cout<<"Drawing Square";
        }
};
void render(Shape* shape){
    shape->draw();//it call the appropriate drawa method based on acual object type.
}
int main(){
    Shape *shape1 = new Circle();
    Shape *shape2 = new Square();
    Shape *shape0 = new Shape();
    render (shape0); //Drawing Shape
    render (shape1); //Drawing Circle
    render (shape2); //Drawing Square
    delete shape0;
    delete shape1;
    delete shape2;
    return 0;
}
