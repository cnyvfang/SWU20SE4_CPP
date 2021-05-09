//
//
//不要照抄！！不要照抄！！一定要自己看懂！！
//
//

#include <bits/stdc++.h>
using namespace std;

class Time{
	public:
		Time(int a,int b,int c){	//构造函数
			h=a;
			m=b;
			s=c;
		}
		void setTime(int a,int b,int c){	//类的函数 手动设置时间
			h=a;
			m=b;
			s=c;
		}
		void show(){	//输出时间
			printf("%02d-%02d-%02d\n",h,m,s);
		}
	private:
		int h,m,s;	//定义 时分秒
};

int main(){
	int x,y,z;
	cin>>x>>y>>z;	//输入初始时间
	Time a(x,y,z);	//新建一个Time对象
	a.show();	//显示时间
	return 0;
}
