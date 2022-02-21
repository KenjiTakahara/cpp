#include <gmpxx.h>
#include <iostream>
#include <math.h>
#include <iostream>
#include <iomanip>
#include <string>
int digits = 200;

mpf_class power(mpf_class x, int n)
{
    mpf_class powval = 1;
    for (int num = n; num != 0; --num)
    {
        powval *= x;
    }
    return powval;
}

class Parameter
{
public:
    mpf_class a;
    mpf_class b;
    mpf_class t;
    mpf_class p;

    Parameter() : a(1.0), b(1.0 / sqrt(mpf_class(2))), t(1.0 / 4.0), p(1.0)
    {
    }
};

mpf_class gauss_Legendre_algorithm(Parameter &param)
{
    mpf_class r;
    mpf_class a = (param.a + param.b) / 2;
    mpf_class b = sqrt(param.a * param.b);
    mpf_class t = param.t - param.p * power((param.a - a), 2);
    mpf_class p = 2 * param.p;

    r = power((a + b), 2) / (4 * t);

    param.a = a;
    param.b = b;
    param.t = t;
    param.p = p;

    return r;
}

int main(int argc, char *argv[])
{
    std::cout << "Start.." << std::endl;

    //★精度 ここを調整する
    int digits = 200;
    //
    //精度
    mpf_set_default_prec(digits * log2(10));
    //何回計算する？
    int recursion_count = log2(digits);

    Parameter param;
    mpf_class pi;

    for (int i = 1; i <= recursion_count; i++)
    {
        pi = gauss_Legendre_algorithm(param);
    }

    std::cout << "有効桁 = " << digits << std::endl;
    std::cout << "計算回数 = " << recursion_count << std::endl;

    mp_exp_t exp;
    std::string significand = pi.get_str(exp);
    std::cout << "pi = " << significand.insert(1, ".") << std::endl;
};