#include <iostream>

using namespace std;

class Base {
private:
  int value;

public:
  Base(): value {0} { cout << "Base no-args constructor" << endl; }

  Base(int x): value {x} { cout << "Base (int) overloaded constructor" << endl; }

  /* Copy Constructor */
  Base(const Base &other)
    : value {other.value} {
      cout << "Base copy constructor" << endl;
    }

  /* Overloaded assignment operator */
  Base &operator=(const Base &rhs) {
    cout << "Base operator = " << endl;
    if (this == &rhs) { return *this; }
    value = rhs.value;

    return *this;
  }

  ~Base() { cout << "Base desctructor" << endl; }
};

class Derived: public Base {
private:
  int double_value;

public:
  Derived()
    : Base {}, double_value {0} { 
      cout << "Derived no-args constructor" << endl; 
    }
  
  Derived(int x)
    : Base {x},  double_value {x * 2} {
      cout << "Derived (int) overloaded constructor" << endl; 
    }
  
  Derived(const Derived &other)
    : Base(other), double_value {other.double_value} {
      cout << "Derive copy constructor" << endl;
    }

  Derived &operator=(const Derived &rhs) {
    cout << "Derived operator=" << endl;
    if (this == &rhs) { return *this; }
    Base::operator=(rhs);
    double_value = rhs.double_value;
    return *this;
  }

  ~Derived() { cout << "Derived destructor" << endl; }
};

int main() {

  Derived d;
  Derived d_val {123};
  d = d_val;

  return 0;
}