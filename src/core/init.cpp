#include "init.hpp"
#include <ios>
#include <iostream>
using namespace std;

void Init::DesyncIOBuffer(void){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
}

