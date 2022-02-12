#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Employee
{
public:
    Employee(string fn, string ln) : first_name(std::move(fn)),
                                     last_name(std::move(ln)) {}
    virtual void print()
    {
        cout << "name: " << first_name << "\n"
             << "last name: " << last_name << "\n";
    };

protected:
    string first_name, last_name;
};

class Engineer : public Employee
{
public:
    Engineer(string fn, string ln, string sp) : Employee(std::move(fn), std::move(ln)),
                                                specialization(std::move(sp)) {}

    void print() override
    {
        Employee::print();
        cout << "specialization: " << specialization << "\n";
    }

private:
    string specialization;
};

void Func(Employee &em)
{
    em.print();
}

int main()
{

    Employee em1("Jim", "Jiao");
    Engineer eng1("Jin", "Baker", "Aerospace Engineering");

    Func(em1);
    cout << "\n";
    Func(eng1);

    return EXIT_SUCCESS;
}