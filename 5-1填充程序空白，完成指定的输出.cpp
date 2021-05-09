//请勿直接复制进编译器运行 代码不完整

using namespace std;
class A{
    int i;
public:
    A(int k=0){
        i=k;
    }
    void display(){
        cout<<"i="<<i<<endl;
    }
};
int main()
{
    
A *p=new A;
//动态创建对象p
    p->display();
    
delete p;
//删除对象p
    p=new A(8);
    p->display();
    delete p;
    
p=new A[3];
//p指向对象数组
    A *q=p;
    for(int i=0;i<3;i++){
        
q[i].display();
//输出对象数组数据
    }
    
delete[] p;
//删除对象数组指针p
    return 0;
} 
