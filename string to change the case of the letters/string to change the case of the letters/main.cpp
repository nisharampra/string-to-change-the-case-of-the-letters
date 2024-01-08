//
//  main.cpp
//  string to change the case of the letters
//
//  Created by Nisha Ramprasath on 3/11/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    string str="WELCOME";
    
    for(int i=0;str[i]!='\0';i++){
        str[i]=str[i]+32;
    }
    cout<<str<<endl;
    
  return 0;
}
