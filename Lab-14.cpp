#include <iostream>
#include <iomanip>
using namespace std;

class Color{
    private: 
    int R;
    int G;
    int B;
    string Name;
    public:
    //setRGBandName I added string name just to make sense on what color I was adding and also added a private string to hold the name
    void setRGBandName(int cR,int cG,int cB,string Name){
        R=cR;
        G=cG;
        B=cB;
        this->Name=Name;
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
    string getName(){
        return Name;
    }
};

void print(Color C){
    cout<<left<<setw(10)<<C.getName()
    <<"R: "<<setw(4)<<C.getR()
    <<"G: "<<setw(4)<<C.getG()
    <<"B: "<<setw(4)<<C.getB()
    <<endl;
}

int main(){
    cout<<fixed<<setprecision(2);
    Color Aqua;
    Color Yellow;
    Color Purple;
    Color Black;
    Color White;
    Color Red;
    Aqua.setRGBandName(0,255,255,"Aqua");
    Yellow.setRGBandName(255,255,0,"Yellow");
    Purple.setRGBandName(128,0,128,"Purple");
    Black.setRGBandName(0,0,0,"Black");
    White.setRGBandName(255,255,255,"White");
    Red.setRGBandName(255,0,0,"Red");
    print(Aqua);
    print(Yellow);
    print(Purple);
    print(Black);
    print(White);
    print(Red);
    return 1;
}