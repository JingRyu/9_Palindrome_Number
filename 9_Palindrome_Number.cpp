#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        int count = 0;
        if(num<0){return false;}else if(num>=0 && num<10){return true;}else{
            while(x!=0){
                x = x/10;
                count++;
            }
        }
            //even
            if(count%2 == 0){

                while((num%10 == num/(int)(pow(10,count-1))) && (count > 2)){
                    num = num/10 - (num/(int)(pow(10,count-1)))*(int)(pow(10,count-2));
                    count = count - 2;
                }
                if(num <=99 && num/10==num%10){return true;}else{return false;}




            }else {

                while(num%10 == num/(int)(pow(10,count-1)) && count>1){
                    num = num/10 - (num/(int)(pow(10,count-1)))*(int)(pow(10,count-2));
                    count = count - 2;
                    cout<<num<<endl;
                    cout<<count<<endl;
                }
                if(num <10){
                   return true;
                }else{
                  return false;
                }
            }

        }

};

int main()
{
    Solution test;
    cout<<test.isPalindrome(1000021);
    return 0 ;

}



