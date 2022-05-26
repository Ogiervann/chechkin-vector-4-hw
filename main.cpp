#include "myvector.hpp"
#include "myvectoriterator.hpp"

#define TESTNUMBER1 5
#define TESTNUMBER2 6
#define TESTNUMBER3 123
#define TESTNUMBER4 12345
#define TESTNUMBER5 1
#define VECSIZE 4



int main()
{
    MyVector<int, VECSIZE> s;
    s.add(TESTNUMBER1);
    s.add(TESTNUMBER2);
    s.add(TESTNUMBER3);
    s.add(TESTNUMBER4);
    s.add(TESTNUMBER5);
    std::cout << "Current size = " << s.size
              << "; Current capacity = " << s.capacity << "; \n";

    s.remove();
    s.remove();
    std::cout << "Current size = " << s.size
              << "; Current capacity = " << s.capacity << "; \n";

    // std::cout << "s[0] = " << s.data[0] << "\n";

    MyVector_iterator<int, VECSIZE> i(&s);
    // std::cout << "s[0] = " << s.data[0] << "\n";

    std::cout << *i << " " << i.index << " " << (*(i.base)).data[1] << "\n";
    ++i;
    std::cout << *i << " " << i.index << "\n";
    i = i.begin();
    std::cout << *i << " " << i.index << "\n";
    i = i.end();
    --i;
    std::cout << *i << " " << i.index << "\n";

    std::cout << *(i.begin()) << " " << *(--(i.end())) << " "
              << (i.begin() == i.end()) << "\n";

    return 0;
}
