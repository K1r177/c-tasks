#include <iostream>
using namespace std;

class Ttraffic_light
{
   /*  public:
        string color;
        Ttraffic_light();
        void printColor(); */

};

Ttraffic_light::Ttraffic_light()
{
    color = "Red";
}
    
void Ttraffic_light::printColor()
{
    cout << color;
}


int main(){
    Ttraffic_light a;
    a.color = "white";
    a.printColor();
    return 0;
}