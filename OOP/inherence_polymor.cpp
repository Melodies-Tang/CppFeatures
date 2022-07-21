#include <iostream>
#include <string>

class animal
{
private:
    const std::string _species;
    const int _eyes;

public:
    animal(const std::string &species, const int &eyes) : _species(species), _eyes(eyes) {}

    void print_eyes() const
    {
        std::cout << _species << " has " << _eyes << " eyes." << std::endl;
    }
};

class human : public animal
{
private:
    const std::string _name;

public:
    explicit human(const std::string &name) : animal("Human", 2), _name(name) {}

    void greeting() const
    {
        std::cout << "Hello, I\'m " << _name << '.' << std::endl;
    }
};

int main()
{
    std::string s, n;
    int e;
    std::cin >> s >> e >> n;
    animal *p = new animal(s, e);
    p->print_eyes();
    delete p;
    human h(n);
    p = &h;
    p->print_eyes();
    const human &q = h;
    q.greeting();
    return 0;
}
