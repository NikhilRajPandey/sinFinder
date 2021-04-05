#define sin15 0.258819045
#define cos15 0.965925826
#define approx 0.0001
#include <iostream>
#include <cmath>

double radian(int degree){
    double pi = 3.14159265359;
    return (degree * (pi / 180));
}
 
double sinT(int angle){ // This will give you the sin of A' such that A'-angle < 0.0001
    double assumAngle = 0;
    double sinAngle = 0;
    double cosAngle = 1;

    double inc = 15;
    double incSin = sin15;
    double incCos = cos15;
    double temp;

    while (std::abs(assumAngle-angle) > approx){
        if (assumAngle+inc <= angle){
            temp = sinAngle;
            sinAngle = sinAngle*incCos + cosAngle*incSin;
            cosAngle = cosAngle*incCos - temp*incSin;
            assumAngle = assumAngle + inc;
        }
        else{
            incSin = sqrt( (1-incCos)/2);
            incCos = sqrt(1-incSin*incSin);
            inc /= 2;
        }
    }
    
    return sinAngle;
}

int main(){
    int angle;
    std::cout<<"Write the angle: ";
    std::cin>>angle;
    double a = sinT(angle);
    std::cout<<"Mine Output: "<<a<<"\nStandard Output: "<<sin( radian(angle))<<std::endl;
    return 0;
}