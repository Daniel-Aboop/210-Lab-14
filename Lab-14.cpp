#include <iostream>;
using namespace std;

class Color{
    private: 
    int R;
    int G;
    int B;
    public:
    void setRGB(int cR,int cG,int cB){
        R=cR;
        G=cG;
        B=cB;
    }
    int getR(){
        return R;
    }
    int getG(){
        return G;
    }
    int getB(){
        return B;
    }
};
void print(Color C){
    cout<<endl;
    cout<<""<<endl;
    cout<<C.getR()<<endl;
    cout<<C.getG()<<endl;
    cout<<C.getB()<<endl;
}

int main(){
    Color Aqua;
    Color Yellow;
    Color Purple;
    Color Black;
    Color White;
    Color Red;
    red.setRGB(3,4,5);
    print(red);


    return 1;
}