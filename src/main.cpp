#include "init.hpp"
#include "iostream"
#include <string_view>
using namespace std;

int main(int argc, char* argv[]) {
   if (argc <= 1){
      return 1;
   }
   Init::DesyncIOBuffer();

   for (int i = 1; i<=argc-1; ++i) {
      cout << argv[i] << "\t ⟶ \t";
      std::string_view word = argv[i];

      int upto = (word.size()/2) - 1;  

      char temp;

      int j;
      for (j = 0; j <= upto; ++j) {
         int otherIndex = (word.size()-1) - j;
         temp = argv[i][otherIndex];
         argv[i][otherIndex] = argv[i][j];
         argv[i][j] = temp;
      }

      cout << argv[i]; 
      cout<<"\n";
   }
   return 0;
}
