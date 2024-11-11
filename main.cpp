#include <iostream>
using namespace std;


int main(){
    int i, j,size;
    std::cout<<"please input a number for the board size: "; 
    std::cin>>size;
    
    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            if(i%2==0){
                if(j%2==0){
                    std::cout<<"□";
                }else{
                    std::cout<<"◼";
                }
            } else{
                if(j%2==0){
                    std::cout<<"◼";
                }else{
                    std::cout<<"□";
                }
            }
        }
        std::cout << endl;    
    }
    return 0;
}
