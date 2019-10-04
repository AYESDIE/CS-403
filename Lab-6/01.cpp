/**
 * WAP to create a dynamically an object bill, having attributes as quantity and price and use new operator.
 * Create function to create data and use function.
 */


#include <iostream>

using namespace std;

class bill{
private:
    int qty;
    float price;
public:
    bill(int qty, float price) : qty(qty), price(price) {}

    bill() {}

    virtual ~bill() {}

    friend ostream &operator<<(ostream &os, const bill &bill1) {
        os << "\n>> qty: " << bill1.qty << "\n>> price: " << bill1.price;
        return os;
    }
};

bill create(){
    int x;
    float y;
    cout<<"\n>> Enter qty:  ";
    cin>>x;
    cout<<"\n>> Enter price:  ";
    cin>>y;
    bill *t = new bill(x,y);
    return *t;
}

int main(){
    bill t;
    t = create();
    cout<<t;
    return 0;
}






