#include <iostream>
using namespace std;

class Screen{
    
    string resolution;
    int refreshRate;
    
public:
    
    Screen(string rn, int re) : resolution(rn), refreshRate(re){
        
        cout<<"Screen created"<<endl;
    }
    
    ~Screen(){
        cout<<"Screen destroyed"<<endl;
    }
    
    void displayInfo(){
        
        cout<<"Resolution : "<<resolution<<"\t"<<"Refresh Rate : "<<refreshRate<<endl;
    }
    
    
};

class Battery{
    
    int capacity;
    
    public :
    
    Battery(int c) : capacity(c){
        
        cout<<"Battery created"<<endl;
    }
    
    ~Battery(){
        cout<<"Battery destroyed"<<endl;
    }
    
    void charge(){
        cout<<"Battery is charging..."<<endl;
    }
    
    int getCapacity(){
        return capacity;
    }
    
};

class Camera{
    int megapixels;
    string type;
    
    public :
    
    Camera(int m, string t ) : megapixels(m), type(t){
        cout<<"Camera created"<<endl;
    }
    
    Camera() : megapixels(), type() {}
    
    ~Camera() {
        
        cout<<"Camera destroyed"<<endl;
    }
    
    void takePhoto(){
        cout<<"Click! Photo taken with [ "<<type<<" ] camera"<<endl;
    }
    
 
};

class Smartphone{
    
    string brand;
    string model;
    Screen& screen;
    Battery& battery;
   
    
    public :
    
    Smartphone(string b,string m, Screen& s, Battery& by) : brand(b), model(m), screen(s),battery(by){
        
        cout<<"Smartphone "<<brand<<" assembled"<<endl;
    }
    
    ~Smartphone(){
        cout<<"Smartphone "<<brand<<" destroyed"<<endl;
    }
    
    void turnOn(){
        cout<<"Hi "<<model<<endl;
        screen.displayInfo();
        battery.getCapacity();
    }
    
};

int main() {
   
    Screen s1("4k", 120);
    Battery b1(5000);
    Smartphone p1("iPhone", "iPhone 17", s1, b1);
    
    p1.turnOn();
    
    
   
    
    return 0;
}
