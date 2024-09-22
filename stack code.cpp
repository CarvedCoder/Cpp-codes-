#include <iostream>
#include <stack>
int main(void){
    int x =1;
std::stack<int> stack;
stack.push(20);
stack.push(21);
stack.push(22);
 while(!stack.empty()){
    std::cout << "element " <<  x << " is " << stack.top()<< std::endl;
    stack.pop();
    x++;
 }
}
