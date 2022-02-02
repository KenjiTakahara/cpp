#include <iostream>
#include <utility>
#include <tuple>
#include <string>

std::pair<int, std::string> f()
{
    return {3, "Hello"};
}

std::tuple<int, std::string, double> g()
{
    return {1, "World", 3.14};
}

std::string global_message = "HELLO, WORLD";
std::tuple<int, std::string &, double> h()
{
    return std::forward_as_tuple(1, global_message, 3.14);
}

int main()
{
    // 組を分解する
    {
        // 関数f()の戻り値である整数と文字列の組を分解する。
        // pairのfirstをid変数に代入し、secondをmessage変数に代入する。
        // id変数の型はfirstの型(int)となり、message変数の型はsecondの型(string)となる。
        auto [id, message] = f();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
    }
    std::cout << std::endl;

    // タプルを分解する
    {
        auto [id, message, value] = g();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
        std::cout << value << std::endl;
    }
    std::cout << std::endl;

    // 各要素を参照する
    {
        std::tuple<int, std::string, double> t = g();
        auto &[id, message, value] = t;

        // tの1番目の要素を書き換える
        message = "My World";

        std::cout << std::get<0>(t) << std::endl;
        std::cout << std::get<1>(t) << std::endl;
        std::cout << std::get<2>(t) << std::endl;
    }
    std::cout << std::endl;

    // 一部の要素が参照だった場合
    {
        auto [id, message, value] = h();

        // message変数の参照元であるglobal_message変数を書き換える
        message = "hello, world";

        std::cout << global_message << std::endl;
    }
}
#include <iostream>
#include <utility>
#include <tuple>
#include <string>

std::pair<int, std::string> f()
{
    return {3, "Hello"};
}

std::tuple<int, std::string, double> g()
{
    return {1, "World", 3.14};
}

std::string global_message = "HELLO, WORLD";
std::tuple<int, std::string &, double> h()
{
    return std::forward_as_tuple(1, global_message, 3.14);
}

int main()
{
    // 組を分解する
    {
        // 関数f()の戻り値である整数と文字列の組を分解する。
        // pairのfirstをid変数に代入し、secondをmessage変数に代入する。
        // id変数の型はfirstの型(int)となり、message変数の型はsecondの型(string)となる。
        auto [id, message] = f();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
    }
    std::cout << std::endl;

    // タプルを分解する
    {
        auto [id, message, value] = g();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
        std::cout << value << std::endl;
    }
    std::cout << std::endl;

    // 各要素を参照する
    {
        std::tuple<int, std::string, double> t = g();
        auto &[id, message, value] = t;

        // tの1番目の要素を書き換える
        message = "My World";

        std::cout << std::get<0>(t) << std::endl;
        std::cout << std::get<1>(t) << std::endl;
        std::cout << std::get<2>(t) << std::endl;
    }
    std::cout << std::endl;

    // 一部の要素が参照だった場合
    {
        auto [id, message, value] = h();

        // message変数の参照元であるglobal_message変数を書き換える
        message = "hello, world";

        std::cout << global_message << std::endl;
    }
}
#include <iostream>
#include <utility>
#include <tuple>
#include <string>

std::pair<int, std::string> f()
{
    return {3, "Hello"};
}

std::tuple<int, std::string, double> g()
{
    return {1, "World", 3.14};
}

std::string global_message = "HELLO, WORLD";
std::tuple<int, std::string &, double> h()
{
    return std::forward_as_tuple(1, global_message, 3.14);
}

int main()
{
    // 組を分解する
    {
        // 関数f()の戻り値である整数と文字列の組を分解する。
        // pairのfirstをid変数に代入し、secondをmessage変数に代入する。
        // id変数の型はfirstの型(int)となり、message変数の型はsecondの型(string)となる。
        auto [id, message] = f();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
    }
    std::cout << std::endl;

    // タプルを分解する
    {
        auto [id, message, value] = g();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
        std::cout << value << std::endl;
    }
    std::cout << std::endl;

    // 各要素を参照する
    {
        std::tuple<int, std::string, double> t = g();
        auto &[id, message, value] = t;

        // tの1番目の要素を書き換える
        message = "My World";

        std::cout << std::get<0>(t) << std::endl;
        std::cout << std::get<1>(t) << std::endl;
        std::cout << std::get<2>(t) << std::endl;
    }
    std::cout << std::endl;

    // 一部の要素が参照だった場合
    {
        auto [id, message, value] = h();

        // message変数の参照元であるglobal_message変数を書き換える
        message = "hello, world";

        std::cout << global_message << std::endl;
    }
}
#include <iostream>
#include <utility>
#include <tuple>
#include <string>

std::pair<int, std::string> f()
{
    return {3, "Hello"};
}

std::tuple<int, std::string, double> g()
{
    return {1, "World", 3.14};
}

std::string global_message = "HELLO, WORLD";
std::tuple<int, std::string &, double> h()
{
    return std::forward_as_tuple(1, global_message, 3.14);
}

int main()
{
    // 組を分解する
    {
        // 関数f()の戻り値である整数と文字列の組を分解する。
        // pairのfirstをid変数に代入し、secondをmessage変数に代入する。
        // id変数の型はfirstの型(int)となり、message変数の型はsecondの型(string)となる。
        auto [id, message] = f();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
    }
    std::cout << std::endl;

    // タプルを分解する
    {
        auto [id, message, value] = g();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
        std::cout << value << std::endl;
    }
    std::cout << std::endl;

    // 各要素を参照する
    {
        std::tuple<int, std::string, double> t = g();
        auto &[id, message, value] = t;

        // tの1番目の要素を書き換える
        message = "My World";

        std::cout << std::get<0>(t) << std::endl;
        std::cout << std::get<1>(t) << std::endl;
        std::cout << std::get<2>(t) << std::endl;
    }
    std::cout << std::endl;

    // 一部の要素が参照だった場合
    {
        auto [id, message, value] = h();

        // message変数の参照元であるglobal_message変数を書き換える
        message = "hello, world";

        std::cout << global_message << std::endl;
    }
}
#include <iostream>
#include <utility>
#include <tuple>
#include <string>

std::pair<int, std::string> f()
{
    return {3, "Hello"};
}

std::tuple<int, std::string, double> g()
{
    return {1, "World", 3.14};
}

std::string global_message = "HELLO, WORLD";
std::tuple<int, std::string &, double> h()
{
    return std::forward_as_tuple(1, global_message, 3.14);
}

int main()
{
    // 組を分解する
    {
        // 関数f()の戻り値である整数と文字列の組を分解する。
        // pairのfirstをid変数に代入し、secondをmessage変数に代入する。
        // id変数の型はfirstの型(int)となり、message変数の型はsecondの型(string)となる。
        auto [id, message] = f();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
    }
    std::cout << std::endl;

    // タプルを分解する
    {
        auto [id, message, value] = g();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
        std::cout << value << std::endl;
    }
    std::cout << std::endl;

    // 各要素を参照する
    {
        std::tuple<int, std::string, double> t = g();
        auto &[id, message, value] = t;

        // tの1番目の要素を書き換える
        message = "My World";

        std::cout << std::get<0>(t) << std::endl;
        std::cout << std::get<1>(t) << std::endl;
        std::cout << std::get<2>(t) << std::endl;
    }
    std::cout << std::endl;

    // 一部の要素が参照だった場合
    {
        auto [id, message, value] = h();

        // message変数の参照元であるglobal_message変数を書き換える
        message = "hello, world";

        std::cout << global_message << std::endl;
    }
}
#include <iostream>
#include <utility>
#include <tuple>
#include <string>

std::pair<int, std::string> f()
{
    return {3, "Hello"};
}

std::tuple<int, std::string, double> g()
{
    return {1, "World", 3.14};
}

std::string global_message = "HELLO, WORLD";
std::tuple<int, std::string &, double> h()
{
    return std::forward_as_tuple(1, global_message, 3.14);
}

int main()
{
    // 組を分解する
    {
        // 関数f()の戻り値である整数と文字列の組を分解する。
        // pairのfirstをid変数に代入し、secondをmessage変数に代入する。
        // id変数の型はfirstの型(int)となり、message変数の型はsecondの型(string)となる。
        auto [id, message] = f();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
    }
    std::cout << std::endl;

    // タプルを分解する
    {
        auto [id, message, value] = g();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
        std::cout << value << std::endl;
    }
    std::cout << std::endl;

    // 各要素を参照する
    {
        std::tuple<int, std::string, double> t = g();
        auto &[id, message, value] = t;

        // tの1番目の要素を書き換える
        message = "My World";

        std::cout << std::get<0>(t) << std::endl;
        std::cout << std::get<1>(t) << std::endl;
        std::cout << std::get<2>(t) << std::endl;
    }
    std::cout << std::endl;

    // 一部の要素が参照だった場合
    {
        auto [id, message, value] = h();

        // message変数の参照元であるglobal_message変数を書き換える
        message = "hello, world";

        std::cout << global_message << std::endl;
    }
}
#include <iostream>
#include <utility>
#include <tuple>
#include <string>

std::pair<int, std::string> f()
{
    return {3, "Hello"};
}

std::tuple<int, std::string, double> g()
{
    return {1, "World", 3.14};
}

std::string global_message = "HELLO, WORLD";
std::tuple<int, std::string &, double> h()
{
    return std::forward_as_tuple(1, global_message, 3.14);
}

int main()
{
    // 組を分解する
    {
        // 関数f()の戻り値である整数と文字列の組を分解する。
        // pairのfirstをid変数に代入し、secondをmessage変数に代入する。
        // id変数の型はfirstの型(int)となり、message変数の型はsecondの型(string)となる。
        auto [id, message] = f();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
    }
    std::cout << std::endl;

    // タプルを分解する
    {
        auto [id, message, value] = g();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
        std::cout << value << std::endl;
    }
    std::cout << std::endl;

    // 各要素を参照する
    {
        std::tuple<int, std::string, double> t = g();
        auto &[id, message, value] = t;

        // tの1番目の要素を書き換える
        message = "My World";

        std::cout << std::get<0>(t) << std::endl;
        std::cout << std::get<1>(t) << std::endl;
        std::cout << std::get<2>(t) << std::endl;
    }
    std::cout << std::endl;

    // 一部の要素が参照だった場合
    {
        auto [id, message, value] = h();

        // message変数の参照元であるglobal_message変数を書き換える
        message = "hello, world";

        std::cout << global_message << std::endl;
    }
}
#include <iostream>
#include <utility>
#include <tuple>
#include <string>

std::pair<int, std::string> f()
{
    return {3, "Hello"};
}

std::tuple<int, std::string, double> g()
{
    return {1, "World", 3.14};
}

std::string global_message = "HELLO, WORLD";
std::tuple<int, std::string &, double> h()
{
    return std::forward_as_tuple(1, global_message, 3.14);
}

int main()
{
    // 組を分解する
    {
        // 関数f()の戻り値である整数と文字列の組を分解する。
        // pairのfirstをid変数に代入し、secondをmessage変数に代入する。
        // id変数の型はfirstの型(int)となり、message変数の型はsecondの型(string)となる。
        auto [id, message] = f();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
    }
    std::cout << std::endl;

    // タプルを分解する
    {
        auto [id, message, value] = g();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
        std::cout << value << std::endl;
    }
    std::cout << std::endl;

    // 各要素を参照する
    {
        std::tuple<int, std::string, double> t = g();
        auto &[id, message, value] = t;

        // tの1番目の要素を書き換える
        message = "My World";

        std::cout << std::get<0>(t) << std::endl;
        std::cout << std::get<1>(t) << std::endl;
        std::cout << std::get<2>(t) << std::endl;
    }
    std::cout << std::endl;

    // 一部の要素が参照だった場合
    {
        auto [id, message, value] = h();

        // message変数の参照元であるglobal_message変数を書き換える
        message = "hello, world";

        std::cout << global_message << std::endl;
    }
}
#include <iostream>
#include <utility>
#include <tuple>
#include <string>

std::pair<int, std::string> f()
{
    return {3, "Hello"};
}

std::tuple<int, std::string, double> g()
{
    return {1, "World", 3.14};
}

std::string global_message = "HELLO, WORLD";
std::tuple<int, std::string &, double> h()
{
    return std::forward_as_tuple(1, global_message, 3.14);
}

int main()
{
    // 組を分解する
    {
        // 関数f()の戻り値である整数と文字列の組を分解する。
        // pairのfirstをid変数に代入し、secondをmessage変数に代入する。
        // id変数の型はfirstの型(int)となり、message変数の型はsecondの型(string)となる。
        auto [id, message] = f();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
    }
    std::cout << std::endl;

    // タプルを分解する
    {
        auto [id, message, value] = g();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
        std::cout << value << std::endl;
    }
    std::cout << std::endl;

    // 各要素を参照する
    {
        std::tuple<int, std::string, double> t = g();
        auto &[id, message, value] = t;

        // tの1番目の要素を書き換える
        message = "My World";

        std::cout << std::get<0>(t) << std::endl;
        std::cout << std::get<1>(t) << std::endl;
        std::cout << std::get<2>(t) << std::endl;
    }
    std::cout << std::endl;

    // 一部の要素が参照だった場合
    {
        auto [id, message, value] = h();

        // message変数の参照元であるglobal_message変数を書き換える
        message = "hello, world";

        std::cout << global_message << std::endl;
    }
}
#include <iostream>
#include <utility>
#include <tuple>
#include <string>

std::pair<int, std::string> f()
{
    return {3, "Hello"};
}

std::tuple<int, std::string, double> g()
{
    return {1, "World", 3.14};
}

std::string global_message = "HELLO, WORLD";
std::tuple<int, std::string &, double> h()
{
    return std::forward_as_tuple(1, global_message, 3.14);
}

int main()
{
    // 組を分解する
    {
        // 関数f()の戻り値である整数と文字列の組を分解する。
        // pairのfirstをid変数に代入し、secondをmessage変数に代入する。
        // id変数の型はfirstの型(int)となり、message変数の型はsecondの型(string)となる。
        auto [id, message] = f();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
    }
    std::cout << std::endl;

    // タプルを分解する
    {
        auto [id, message, value] = g();

        std::cout << id << std::endl;
        std::cout << message << std::endl;
        std::cout << value << std::endl;
    }
    std::cout << std::endl;

    // 各要素を参照する
    {
        std::tuple<int, std::string, double> t = g();
        auto &[id, message, value] = t;

        // tの1番目の要素を書き換える
        message = "My World";

        std::cout << std::get<0>(t) << std::endl;
        std::cout << std::get<1>(t) << std::endl;
        std::cout << std::get<2>(t) << std::endl;
    }
    std::cout << std::endl;

    // 一部の要素が参照だった場合
    {
        auto [id, message, value] = h();

        // message変数の参照元であるglobal_message変数を書き換える
        message = "hello, world";

        std::cout << global_message << std::endl;
    }
}