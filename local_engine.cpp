#include <iostream>
#include <vector>

class DynamicRegistry {
public:
    explicit DynamicRegistry(int seed) : state_(seed) {}

    int sync_worker(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 17) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    DynamicRegistry obj(17);
    std::cout << obj.sync_worker(17) << std::endl;
    return 0;
}
