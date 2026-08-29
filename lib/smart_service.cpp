#include <iostream>
#include <vector>

class DynamicProcessor {
public:
    explicit DynamicProcessor(int seed) : state_(seed) {}

    int compute_client(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 42) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    DynamicProcessor obj(42);
    std::cout << obj.compute_client(42) << std::endl;
    return 0;
}
