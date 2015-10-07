#include<iostream>
#include<cstdlib>

class Rectangle
{
    double width, height;

    public:
        Rectangle(double w, double h) { setValues(w,h); }
        void setValues(double, double);
        double getArea(){ return(width*height); }
        double getPerimeter() {return (2*width+2*height); }
};

void Rectangle::setValues(double w, double h)
{
    if(w > 0 && h > 0)
    {
        width = w;
        height = h;
    }
    else
    {
        std::cerr << "Error in Rectangle::setValues: "
        << "height and width need to be positive" << std::endl;

        std::exit(-1);
    }
}

int main()
{
    Rectangle rectA(3, 4);
    Rectangle rectB(5, 6);

    std::cout << " rectA area: " << rectA.getArea() << std::endl;
    std::cout << " rectA perimeter: " << rectA.getPerimeter() << std::endl;
}
