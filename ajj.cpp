#include <bits/stdc++.h>
using namespace std;

class point{
    private:
        int x, y;
    public:
        point(int a, int b){
            x = a;
            y = b;
        }

        void show(){
            cout << "x: " << x << ", y: " << y << endl;
        }
};
int main(){
    point p1(5, 10);
    point p2(15, 20);

    p1.show();
    p2.show();

    return 0;
}