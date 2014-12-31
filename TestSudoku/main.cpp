#include <iostream>
#include "Cell.h"
#include "Region.h"
#include "Grid.h"
#include "Position.h"
#include <map>
using namespace std;
int main(int argc, const char * argv[]) {
    
    Cell t;
    cout << "t: " << t << " Empty ? " << boolalpha << t.isEmpty() << endl;
    cout << "t==t : " << (t==t) << endl;
    cout << "t==-1 : " << (t==-1) << endl;
    
//    try {
//        Cell t1(124); //Cell(-1);
//    } catch (std::exception& e) {
//        cout << e.what() << endl;
//    }
//    
//    Cell t2(2);
//    cout << "t2: " << t2 << " Empty ? " << boolalpha << t2.isEmpty() << endl;
//    
//    Region rd;
//    cout << rd << endl;
//    
//    try {
//        Region r("482---15-");
//        r.print();
//        Region r2("482123");
//        Region r3("4d2124443");
//    } catch (const exception& e) {
//        cout << e.what() << endl;
//    }
//    
//    Grid g;
//    g.print();
//    
//    map<Position, Region> m;
//    for(int i = 0; i < 9; i++)
//    {
//        m[(Position)i] = Region("482---15-");
//    }
//    Grid g2(m);
//    g2.print();
    
    return EXIT_SUCCESS;
}
