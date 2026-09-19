#include<iostream>
using namespace std;

class point{
    private:
int x;
int y;
public:
 point():x{0},y{0}{
    cout<<"Default Constructor"<<endl;
 }
point(int p,int q):x{p},y{q}{
    cout<<"Parametrized constructor"<<endl;
}
 point add(point q){
//     point r;
//     r.x=x+q.x;
//     r.y=y+q.y;
//     return r;
return point(x+q.x,y+q.y);
  }
  point add(){
    
  }
 void show(){
cout<<"x: "<<x<<" y: "<<y<<endl;
 }
};
int main()
{
    point p(50,90),q(20,30); 
    p.show();
    q.show();
    point r=p.add(q);
    r.show();
    return 0;
    
}
