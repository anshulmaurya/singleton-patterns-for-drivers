#include<iostream> 
using namespace std; 


class uart{
  private:
  int baudrate;

  
  uart(int baud):
  baudrate(baud)
  {}
  
  public:
  void disp(){
    cout<<"baudrate "<<baudrate;
  }
  
  static uart* getInstance(int );
};


uart* uart::getInstance(int baud){
  static uart* obj = nullptr;

  if (obj == nullptr){
      obj = new uart(baud);
  }
    return obj;
}





int main() { 
    
    uart* ic1 = uart::getInstance(9600);
    ic1->disp();
    
    uart* ic2 = uart::getInstance(55);
    ic2->disp();
} 


