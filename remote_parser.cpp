#include <iostream>
#include <vector>

class AtomicManager {
public:
    explicit AtomicManager(int seed) : state_(seed) {}

    int build_processor(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 20) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    AtomicManager obj(20);
    std::cout << obj.build_processor(20) << std::endl;
    return 0;
}
