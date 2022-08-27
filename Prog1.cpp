//
//  main.cpp
//  Prog1
//
//  Created by nebil on 6/12/22.
//

//
//  main.cpp
//  Prog1
//
//  Created by nebil on 6/8/22.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>


int getCharx(char language);
using namespace::std;





//int main(int argc, const char * argv[])


int main(){
   
    
  
    string myText;
    cout << " Please enter String"<< endl;
    getline (cin, myText);
    
    
    
   
    
    
    int currentState = 1;
    string language = myText;
    
    
   
                        // a    b
    int table[9][2] = {
                          {0,   1 },
                         
                         {5 ,   3}, // firt row
        
                         {4 ,    2}, // second row
                         
                         {2,     -1}, // third row
                       
                         {-1,     -1}, // fourt row
        
                        {6 ,    7}, // fifth row
                        
                        {6,     7}, // sixth row
                      
                        {8,     2}, // seventh row
                           
                        {4 ,    2} // eighth row
                        
                        
             // Accepted state is 4 , 6, 8
           
                            
                       
                          
    };
    
    
    string newString = "";
    bool run = false;
    
    if (myText[myText.length()-1] == '$') {
        
        
        for (int i =0 ; i < myText.length()-1; i++) {
            
            newString += myText[i];
            run = true;
            
        }
        
        
        
    }else {
        
        
        cout << "Please add $ end of string" << endl;
        
    }
        
        
        

    if (run) {
        

    for (int i = 0; i<newString.length(); i++) {
        

        int xx =  getCharx(newString[i]);
        
        
        
     
        if (table[currentState][xx] != -1) {
            
            currentState = table[currentState][xx];
        }
        else {
            
            currentState = -1;
            break;
        }
        
        
        
        
      //  cout << "current state is is " << currentState << endl;
        
        
        
    }
    cout << "Accepted State is 4, 6, 8" << endl;
    cout << " current state is " << currentState << endl;
    
    if (currentState == 4 || currentState == 6 || currentState == 8) {
        
        cout << " Yes Accepted" << endl;
    }
        else {
        
        cout << "No Rejected " << endl;
    }
   
    
    }
    
    
    return 0;
}


int getCharx(char language) {
    
    int num = 0;
    
    
    switch (language) {
        case 'a':
            num = 0;
            
            break;
        case 'b':
            num = 1;
            
            break;
            
        default:
            break;
    }
    
    
    
    return num;
}














