#include <iostream>
#define USER "Lucas"
//#undef USER <- remover macro

int main()
{
    std::cout << "Hello " << USER << " " << __DATE__ << std::endl;
    return 0;
}