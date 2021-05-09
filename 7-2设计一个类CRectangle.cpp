//
//
//不要照抄！！不要照抄！！一定要自己看懂！！
//
//
#include <bits/stdc++.h>
using namespace std;

class CRectangle{
	public:
		CRectangle(double a=1,double b=1):c(a),k(b){
			
		}
		void show(){
			cout<<c*2+k*2<<endl;
		}
	private:
		double c;
		double k;
};

int main(){
	double x,y;
	cin>>x>>y;
	if((y<50&&x<=0&&y>0)||(y<50&&x>=50&&y>0)){
		CRectangle test(y);
		test.show();
	}
	else if((x<50&&x>0&&y<=0)||(x<50&&y>=50&&x>0)){
		CRectangle test(x);
		test.show();
	}
	else if((x<=0&&y<=0)||(x>=50&&y>=50)){
		CRectangle test;
		test.show();
	}	
	else{
		CRectangle test(x,y);
		test.show();
	}
	
}
