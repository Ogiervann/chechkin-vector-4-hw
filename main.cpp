#include "myvector.hpp"
#include "myvectoriterator.hpp"

int main()
{
    MyVector<int, 4> s;
    s.add(5);
    s.add(6);
    s.add(123);
    s.add(12345);
    s.add(1);
    std::cout << "Current size = " << s.size
              << "; Current capacity = " << s.capacity << "; \n";

    s.remove();
    s.remove();
    std::cout << "Current size = " << s.size
              << "; Current capacity = " << s.capacity << "; \n";

    // std::cout << "s[0] = " << s.data[0] << "\n";

    MyVector_iterator<int, 4> i(&s);
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
