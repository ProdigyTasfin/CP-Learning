#include <iostream>

int main() {

int n;
std::cin >> n;

if(n < 13){
    std::cout << "Child" << std::endl;
}

else if (n >= 13 && n <= 19 ){
    std::cout << "Teen" << std::endl;
} 
else std::cout << "Adult" << std::endl;

return 0;

}