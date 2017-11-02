#include <iostream>

using namespace std;

class Complejo {
private:
    float a;
    float b;
public:
    Complejo(float a, float b);
    void print();
};

Complejo::Complejo(float a, float b){
    this->a = a;
    this->b = b;
}

void Complejo::print(){
    cout << "(" << a << " , " << b << ")";
}



int main(){
    Complejo c(3.0, 2.0);
    c.print();
    return 0;
}