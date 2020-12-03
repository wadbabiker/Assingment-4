/*
Name : Mohamed Babiker Osman
Department : Computer 
Class : Second Class
*/
#include <iostream>
#include <string>
using namespace std;

class Shape //الكلاس الاب Abstract class
{
 protected :
    // initlization values ...
    float width ;
    float height;
    float radius; 
    float pi = 3.14 ;
 public :

    void set_Width() //set width value
    {  
        cout << "Enter Width: ";
        cin >> width ;
    }

    void set_Height() //set height value
    {
        cout <<"Enter Height: ";
        cin >> height;
    }

    void set_Radius() //set radius value
    {
        cout << "Enter Radius: ";
        cin >> radius;
    }

 virtual float area(void)=0; //pure virtual function

 void show_Area(void) //Show Area of Shapes
 {
    cout<< this -> area() << endl;
 }

 virtual int surround(void) = 0; //pure virtual function

 void show_Surround(void)// print Surround of shape
 {
    cout << this->surround() << endl;
 }

};

class Polygon : public Shape // class Polygon Inheriting class shape
{
 public:
     float area() // polygon Area
     {
         cout << "\nThe Polygon's Area = ";
         return (radius * height * width);
    }
    int surround() // Polygon Surround
    {
        cout << "The Polygon's Surround: ";
        return(width*height);
    }
};

class Triangle : public Polygon //class Traingle inheriting class Polygon
{
    float area() //Function Traingle Area
    {
        cout << "\nThe Triangle's Area = ";
        return (width * height / 2);
    }
    int surround() // calculate Surround of traingle
    {
        cout << "The Triangle's Surround: ";
        return (width + height*2);
    }
};

class Rectangle : public Polygon // Rectangle calss inheriting from Polygon class
{
    float area() //Area Of Rectangle
    {
        cout << "\nThe Rectangle's Area: ";
        return (width * height);
    }
    int surround() //calculate Surrounfd of Rectangle
    {
        cout << "The Rectangle's Surround:  ";
        return (2*(height*width));
    }
};

class Square : public Polygon //class Square inheriting from polygon class
{
    float area() // Suquare Area
    {
        cout << "\nThe Square's Area: ";
        return (height * height);
    }
    int surround() //calculate Square Surround
    {
        cout << "The Square's Surround : ";
        return (4*height);
    }
};

class Ellipse : public Shape //class Ellipse inheriting from abstract shape class
{
 public:
     float area() //Ellipse Area
     {
         cout << "\nThe Ellipse's Area : ";
         return (pi * width * height);
    }
    int surround() //Ellipse Surround
    {
        cout << "The Ellipse's Surround : ";
        return (pi*(radius*radius));
    }
};
class Circle : public Ellipse //class Circle inheriting from Ellipse class
{
 public:
    float area() //Circle Area
    {
        cout << "\nThe Circle's Area : ";
        return (pi/4*(radius*radius)); 
    }
    int surround() //Circle Surround
    {

        cout << "The Circle's Surround : ";
        return (pi * radius);
    }
};
int main()
{
    // Classes Objects
    Polygon polygon ; 
    Triangle triangle ; 
    Rectangle rectangle ; 
    Square square ; 
    Ellipse ellipse ; 
    Circle circle;

    // define classes pointers
    Shape *shape1 = &polygon;   
    Shape *shape2 = &ellipse;     
    Polygon *poly1 = &triangle; 
    Polygon *poly2 = &rectangle; 
    Polygon *poly3 = &square;    
    Ellipse *ellipse1 = &circle;    

    cout << "========FIND AREA && SURROUND OF SHAPES========\n";

    cout << "\nEnter Polygon's Width , Height , Radius:\n"; 
    shape1->set_Width();
    shape1->set_Height();
    shape1->set_Radius();
    shape1->show_Area();
    shape1->show_Surround();

    cout << "\nEnter Ellipse's Width , Height and Radius:\n"; 
    shape2->set_Width();
    shape2->set_Height();
    shape2->set_Radius();
    shape2->show_Area();
    shape2->show_Surround();

    cout << "\nEnter Triangle's Width and Height:\n"; 
    poly1->set_Width();
    poly1->set_Height();
    poly1->show_Area();
    poly1->show_Surround();

    cout << "\nRectangle's Width and Height:\n"; 
    poly2->set_Width();
    poly2->set_Height();
    poly2->show_Area();
    poly2->show_Surround();

    cout << "\nSquare's Height:\n"; 
    poly3->set_Height();
    poly3->show_Area();
    poly3->show_Surround();

    cout << "\nEnter Circle's Radius:\n";
    ellipse1->set_Radius();
    ellipse1->show_Area();
    ellipse1->show_Surround();

    cout << "\n==============CALCULATE FINAL RESULT==============\n";

    cout << "POLYGON :";  
    shape1->show_Area();
    shape1->show_Surround();
    
    cout << "\nELLIPSE :";
    shape2->show_Area();
    shape2->show_Surround();
    
    cout << "\nTRIANGLE :";
    poly1->show_Area();
    poly1->show_Surround();
    
    cout << "\n____Rectangle____ :";
    poly2->show_Area();
    poly2->show_Surround();
    
    cout << "\n____Square____ :";
    poly3->show_Area();
    poly3->show_Surround();

    cout << "\n____Circle___ :";
    ellipse1->show_Area();
    ellipse1->show_Surround();
}