#include <iostream>
using namespace std;

class Plant {
public:
    virtual void grow() = 0;
    virtual void displayHeight() const = 0;
};

class Flower : public Plant {
private:
    double height;
    double growthRate;
public:
    Flower(double initialHeight) : height(initialHeight), growthRate(0.5) {}
    void grow() override {
        height += growthRate;
    }
    void displayHeight() const override {
        cout << "Flower height: " << height << " cm" << endl;
    }
};

class Tree : public Plant {
private:
    double height;
    double growthRate;
public:
    Tree(double initialHeight) : height(initialHeight), growthRate(0.2) {}
    void grow() override {
        height = height + growthRate;
    }
    void displayHeight() const override {
        cout << "Tree height: " << height << " cm" << endl;
    }
};

class Bush : public Plant {
private:
    double height;
    double growthRate;
public:
    Bush(double initialHeight) : height(initialHeight), growthRate(0.7) {}
    void grow() override {
        height = height + growthRate;
    }
    void displayHeight() const override {
        cout << "Bush height: " << height << " cm" << endl;
    }
};

int main() {
    Flower F(5);
    Tree T(100);
    Bush B(28);

    cout << "Initial Heights:" << endl;
    F.displayHeight();
    T.displayHeight();
    B.displayHeight();

    for (int day = 1; day <= 30; ++day) {
        F.grow();
        T.grow();
        B.grow();
    }

    cout << "\nfinal heights after 30 days of growth:" << endl;
    F.displayHeight();
    T.displayHeight();
    B.displayHeight();

    return 0;
}
