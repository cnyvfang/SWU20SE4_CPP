#include <iostream>
#include <cmath> 
using namespace std;

class shape {// 形状类
public:
 double getArea()  // 求面积
 {return -1;}
 double getPerimeter() // 求周长
 {return -1;}
};

class RegularPolygon:public shape{
 public:
 	 RegularPolygon(int a=4,double b=1){
 		n=a;
 		s=b;
	 }
	 double getArea();
	 double getPerimeter();
 private:
 	int n;
 	double s;
};

double RegularPolygon::getArea(){
	return n*s*s/(tan(3.14159/n)*4);
}

double RegularPolygon::getPerimeter(){
	return n*s;
}

int main()
{
    int n; 
    double s;

    cin>>n>>s;
    RegularPolygon p(n,s);
    cout<<p.getArea()<<endl;

    cout<<p.getPerimeter()<<endl;

    return 0;
}
