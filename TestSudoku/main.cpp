#include <iostream>
#include "Cell.h"
#include "Region.h"
using namespace std;
int main(int argc, const char * argv[]) {
    
    Cell t;
    cout << "t: " << t << endl;
    
    try {
        Cell t1(-1);
    } catch (std::exception& e) {
        cout << e.what() << endl;
    }
    
    Cell t2(2);
    cout << "t2: " << t2 << endl;
    
    Cell t3(12);
    
//    try {
//        Region r("482---15-");
////        Region r2("482123");
////        Region r3("4d2124443");
//    } catch (exception& e) {
//        cout << e.what() << endl;
//    }
    return 0;
}
