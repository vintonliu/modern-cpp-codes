#include <iostream>

namespace S1 {
	void foo() {
        std::cout << "S1::foo()" << std::endl;
    }
}

namespace S2 {
	void foo() {
        std::cout << "S2::foo()" << std::endl;
    }
}

using namespace S1;

int main()
{
	foo();
	S2::foo();
}
