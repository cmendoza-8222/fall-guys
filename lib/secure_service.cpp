#include <iostream>
#include <vector>

class HybridGateway {
public:
    explicit HybridGateway(int seed) : state_(seed) {}

    int collect_registry(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 85) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    HybridGateway obj(85);
    std::cout << obj.collect_registry(85) << std::endl;
    return 0;
}
