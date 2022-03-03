#include "all.h"
using std::string;

class Employee
{
    // protected:
    const char *first_name, *last_name;

public:
    Employee(const char *fn, const char *ln)
        : first_name(fn), last_name(ln)
    {
    }
    virtual void print()
    {
        cout << "name: " << first_name << '\n'
             << "last name: " << last_name << '\n';
    };
};

class Engineer : public Employee
{
    const char *specialization;

public:
    Engineer(const char *fn, const char *ln, const char *sp)
        : Employee(fn, ln), specialization(sp)
    {
    }

    void print()
    {
        cout << "specialization: " << specialization << '\n';
    }
};

int main()
{

    Employee em1("Jim", "Jiao");
    Engineer eng1("Jin", "Baker", "Aerospace Engineering");

    Employee *r = &eng1;
    r->print();
}