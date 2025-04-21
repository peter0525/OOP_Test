# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include<bits/stdc++.h>
using namespace std;

double Cylinder :: SurfaceArea(){
    double pi=M_PI;
    double a =2*pi*radius*radius + 2*pi*radius*height;;
    return a;
}

double Cylinder :: Volume(){
    double pi=M_PI;
    double b = pi*radius*radius*height;
    return b;
}

double Cylinder :: Circumference(){
    double pi=M_PI;
    double c = 2*pi*radius;
    return c;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << fixed << setprecision(3) <<"Circumference: " << cldr.Circumference()<<endl;
    out << fixed << setprecision(3) <<"SurfaceArea: " << cldr.SurfaceArea() <<endl;
    out << fixed << setprecision(3) <<"Volume: " << cldr.Volume() <<endl;
    return out;
}

# endif