#include <iostream>
#include <string>

using namespace std;
class shape {
virtual void draw() =0;

};
class circle : public shape {
    public :
    void draw (){
        cout << " draw\n";
    }
};

int main (){
    circle c1;
    c1.draw();
    return 0;
}