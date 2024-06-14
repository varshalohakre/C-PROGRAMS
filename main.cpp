#include <iostream>
//     int firstnumber {12};
//     int secondnumber{8};
//     int sum = firstnumber + secondnumber ;
//     std::cout << "sum:" << sum << std::endl;
//    return 0;

   

   


// int addnumbers(int third,int fourth){
// int sum = third + fourth ;
// return sum;
// }

// int main(){
//  int third = 0;
//  int fourth = 0;
// int sum = third + fourth ;
// sum = addnumbers(third,fourth);
// sum = addnumbers(34,7);
// std::cout << "sum:" << sum << std::endl;
// std::cout << "sum2:" << addnumbers(23,8) << std::endl;
// return 0;
// }

int multiplynumbers(int param1, int param2){
    int multiply = param1*param2;
    return multiply;
}
int main(){
    int first {10}; //10
    int second = 11; //11
    int result = first*second;
    std::cout << "result is:" << result << std::endl; //110
    
    int multiply = multiplynumbers(2,4);
    std::cout << "multiply:" << multiply << std::endl; // 8
    std::cout << "multiply:" << multiplynumbers(4,5) << std::endl; //20
    return 0;
}

    





