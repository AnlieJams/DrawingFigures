#include <iostream>
using namespace std;

class Visitor {
public:
    
    virtual void visit() = 0;
};


class DrawVisitor : public Visitor {
public:
    
    void drawCircle() {
        setlocale(0, "");
        cout << "Круг сюдыма" << endl;
       
    }

    
    void visit() override {
        drawCircle();
    }
};

int main() {
    
    DrawVisitor drawVisitor;

    
    drawVisitor.visit();

    return 0;
}
