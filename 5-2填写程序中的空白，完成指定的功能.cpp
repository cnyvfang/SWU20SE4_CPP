//
//不要照抄！！不要照抄！！一定要自己看懂！！
//
//这题我也不知道我做的对不对 只是碰巧能跑出正确答案
//
//如果你有更好的见解，在Issues里告诉我√
//
#include<iostream>
using namespace std;
class Point{
    double x,y;
    
static double test;
//定义静态变量
public:
    Point(double a=0,double b=0):x(a),y(b){        
        test=max(x,y);
    }
    ~Point(){
        
test=1;

    }
    void show(){
        cout<<"the number of Point is "<<test<<endl;
    }
};
double Point::test=1;

int main(){
    Point p1;
    Point *p=new Point(1,2);
    p->show();
    delete p;
    p1.show();
    return 0;
