
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <math.h>

using namespace std;

int main(){
    
    ifstream ifs1("run13_tof0.txt");
    
    ofstream ofs1("run13bin_tof0.txt");
    
    const int width=5;
    
    double ch[1024];
    double x[1024];
    int count[1024];
    
    int binN=0;
    double binx[1024]={0};
    int bincount[1024]={0};
    int sum=0;
    
    for(int i=0; i<1024; i++){
        ifs1 >> ch[i] >> count[i] ;
        x[i] = ch[i] * 0.119 ;
    }
    
    for(int i=0; i<1024; i++){
        
        sum = sum+count[i];
        
        if(i%width==0){
            binx[binN] = x[i] ;
            bincount[binN] = sum ;
            ofs1 << binx[binN] << " " << bincount[binN] << endl;
            binN++;
            sum=0;
        }
        
 
    }
    
    
    
}
























