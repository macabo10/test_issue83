#include<iostream>
#include<string>

struct SharedState
{
    std::string brand_;
    std::string model_;
    std::string color_;

    SharedState(const std::string &brand, const std::string &model, const std::string &color) : brand_(brand), model_(model), color_(color) {

    }

    friend std::ostream &operator<<(std::ostream &os, const SharedState &ss) {
        return os << "[ " << ss.brand_ << ", " << ss.color_ << ", " << ss.color_ << " ]";
    }
};


class Flyweight
{
private:
    SharedState *shared_state_;

public:
    Flyweight(const SharedState *share_state) : shared_state_(new SharedState(*share_state)){
        
    }
};

int main() {
    SharedState ss = SharedState("toyota", "yaris", "blue");
    SharedState *ssp = &ss;
    Flyweight fl = Flyweight(ssp);
}