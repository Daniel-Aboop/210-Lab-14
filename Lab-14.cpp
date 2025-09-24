#include <iostream>;
using namespace std;

class Color{
    private: 
    int R;
    int G;
    int B;
    string Name;
    public:
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
    Aqua.setRGBandName(0,255,255,"Aqua");
    Yellow.setRGBandName(255,255,0,"Yellow");
    Purple.setRGBandName(128,0,128,"Purple");
    Black.setRGBandName(0,0,0,"Black");
    White.setRGBandName(255,255,255,"White");
    Red.setRGBandName(255,0,0,"Red");
    
    
    return 1;
}