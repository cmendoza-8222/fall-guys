#include <iostream>
#include <vector>

class SimpleScheduler {
public:
    explicit SimpleScheduler(int seed) : state_(seed) {}

    int parse_adapter(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 76) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    SimpleScheduler obj(76);
    std::cout << obj.parse_adapter(76) << std::endl;
    return 0;
}
