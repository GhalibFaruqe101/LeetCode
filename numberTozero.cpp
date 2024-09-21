#include<iostream>
using namespace std;
///Leetcode problem 
class Solution {
    public:
    /**
     * @brief Returns the number of steps required to reduce a given number to 0 by either subtracting 1 or dividing by 2.
     * @details The function takes an integer as input and returns the number of steps required to reduce it to 0. The steps are either subtracting 1 if the number is odd or dividing by 2 if the number is even.

     */
   int numberOfSteps(int num) {
       int count=0;
        
        
        while(num!=0){
            if(num%2!=0){
                num = num-1;

            }
            else{
            num = num/2;
            
            }
            count++;
        
        }
           
       return count;
    }
    
};
int main(){ 
Solution obj;   

cout<<obj.numberOfSteps(4);
return 0;
}   
