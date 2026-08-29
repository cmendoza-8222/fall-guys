#include <iostream>
#include <vector>

class HybridEngine {
public:
    explicit HybridEngine(int seed) : state_(seed) {}

    int resolve_client(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 89) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    HybridEngine obj(89);
    std::cout << obj.resolve_client(89) << std::endl;
    return 0;
}
