#include <iostream>
#include "process.h"
using std::cout,std::endl;

void Process::planProcess()
{
    cout << "this is plan process" << endl;
    my_map.map_info();
    cout << "planning success" << endl;
}