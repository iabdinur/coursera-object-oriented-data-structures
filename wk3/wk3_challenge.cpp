// A class called Pair has already been declared, but the constructors have not been implemented yet. Pair has two public member variables:
//        int *pa,*pb;
//These two "pointers to int" are intended to point to heap memory locations that store integers. The remainder of the Pair class expects the following functionality.

/* Class Pair has already been declared
 * as shown in the following comments:
 *
 * class Pair {
 * public:
 *   int *pa,*pb;
 *   Pair(int, int);
 *   Pair(const Pair &);
 *  ~Pair();
 * };
 *
 * Implement its member functions below.
 */

 /* Here is a main() function you can use
  * to check your implementation of the
  * class Pair member functions.
  */

Pair::Pair(int a, int b) {
  pa = new int;
  pb = new int;
  *pa = a;
  *pb = b;
  std::cout << "Default constructor invoked!\n";
  std::cout << "pa: " << *pa << " located at: " << pa << std::endl;
  std::cout << "pb: " << *pb << " located at: " << pb << std::endl;
}

Pair::Pair(const Pair& other) {
  pa = new int;
  pb = new int;
  *pa = *other.pa;
  *pb = *other.pb;
  std::cout << "Copy constructor invoked!\n";
  std::cout << "pa: " << *pa << " located at: " << pa << std::endl;
  std::cout << "pb: " << *pb << " located at: " << pb << std::endl;
}
Pair::~Pair() {
delete pa;
delete pb;
std::cout << "Destructor invoked!\n";
}

int main() {
  Pair p(15,16);
  Pair q(p);
  Pair *hp = new Pair(23,42);
  delete hp;

  std::cout << "If this message is printed,"
    << " at least the program hasn't crashed yet!\n"
    << "But you may want to print other diagnostic messages too." << std::endl;
  return 0;
}
