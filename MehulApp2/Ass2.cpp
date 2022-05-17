#include <cpp_api/navigation_bridge.h>

Navigation nav;
int main(int argc, char *argv[])
{
    std::cout<<"\nTaking off to a height of 10m\n";
    nav.take_off(10.0);  
    std::cout<<"\nTracng a triange of side 10m at an altitude of 5m\n";
    nav.position_set(0,0,-5);
    nav.position_set(5,0,-5);
    nav.position_set(0,8.66,-5);
    nav.position_set(-5,0,-5);
    nav.position_set(0,0,-5);
    nav.land(false);
    std::cout<<"\nMission Completed\n";
}
