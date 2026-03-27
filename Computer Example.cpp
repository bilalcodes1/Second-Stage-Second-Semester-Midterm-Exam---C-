#include <iostream>
using namespace std;

class Cpu{
    
    string brand ;
    int cores ;
    double speed ;
    
    public :
    
    Cpu(string b, int c,double s) :brand (b), cores(c), speed(s){
        
        cout<<"Cpu created " << brand << endl;
    }
    
    int getspeed(){
        return  speed;
    }
    
    void displayInfo(){
        cout<<"Cpu brand : "<< brand <<" "<<"Cpu cores : "<< cores <<" "<<"Cpu speed :"<< speed << " "<<endl;
    }
    
    ~Cpu(){
        cout << " Cpu destroyed : " << brand << endl ;
    }
};

class Ram{
    
    int size ;
    string type ;

public :
    
    Ram(int s, string t) : size(s), type(t){
        
        cout<<"Ram created " << size << endl;
    }
    
    void displayInfo(){
        cout<<"Ram size : "<< size <<" "<<"Ram type : "<< type <<endl;
    }
    
    int getSize(){
        
        return size;
    }
    
    ~Ram(){
        cout << " RAM destroyed : " << size << " GB " << type
        << endl ;
    }
    
    
};

class Computer{
    
    string brand;
    Cpu& cpu;
    Ram& ram;
    
public :
    
    Computer(string b, Cpu& c, Ram& r) : brand(b), cpu(c), ram(r){
        
        cout << " Computer assembled : " << brand << endl ;
    }
    
    void displayInfo(){
        cout<<"Computer brand : "<< brand <<endl;
        cpu.displayInfo();
        ram.displayInfo();
    }
    
    void performenceScore(){
        
        cout<<"Computer Score : "<<cpu.getspeed() * ram.getSize() * 10<<endl;
    }
    
    ~Computer(){
        
        cout << " Computer disassembled : " << brand << endl ;
    }
    
    
    
    
    
};


int main() {
   
    cout << " --- Creating Computer --- " << endl ;
    
     Cpu cpu ( " Intel i9 " , 8 , 3.6) ;
     Ram ram (32 , " DDR5 " ) ;
     Computer pc ( " Dell XPS " , cpu , ram ) ;
    
    pc.displayInfo();
    pc.performenceScore();

     cout << " \n - - - Exiting main --- " << endl ;
    
    
    return 0;
}
