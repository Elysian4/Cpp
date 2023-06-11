#include <iostream>

void EvenNum(int n) {
    if (n < 0)
        return;
    
    if (n % 2 == 0)
        std::cout << n << " ";
    
    EvenNum(n - 1);
}

int main() {
    int n=10;
    //std::cout<<"enter the number till you want to print th even numbers"<<endl;
    //cin>>n;
    std::cout << "even numbers in reverse are:  \n";
    EvenNum(n);
    
    return 0;
}
