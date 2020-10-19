#include <utility>

class Parent {
    public:
    void method()
    {

    }
    Parent(int field)
    {
        this->field = field;
    }
    Parent()
    {
    }
    Parent(const Parent &p)
    {
    }
    Parent(Parent &&p)
    {
    }
    ~Parent()
    {
    }

    private:
    int field;

};

class Kid: public Parent
{
    public:
    Kid (int i): Parent(i), field2(i)
    {
    }
    Kid ()
    {
}

    private:
    int field2;

    };

int main()
{
    Kid k;

    Parent p(1);
    Parent p2 = p;

    Parent p3 = std::move(p); // równoważne (Parent &&)p;
}