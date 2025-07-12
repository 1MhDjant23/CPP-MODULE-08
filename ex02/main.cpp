#include "MutantStack.hpp"

int main() {

    MutantStack<int> mstack;



    mstack.push(1);
    mstack.push(-1);
    mstack.push(22);
    mstack.push(3);

    
    // for (size_t i = 0; i < mstack.size(); i++)
    // {
        std::cout << *mstack.begin() << std::endl;
    // }
    
    std::cout << mstack.top() << std::endl;
    // mstack.pop();
    std::cout << mstack.top() << std::endl;
    std::cout << mstack.size() << std::endl;



    // std::stack<int> st;

    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.pop();
    // std::cout << st.top() << std::endl;
    // std::cout << st << std::endl;
    // std::cout << st << std::endl;
    return 0;
}