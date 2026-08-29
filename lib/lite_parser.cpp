#include <iostream>
#include <vector>

class CoreCache {
public:
    explicit CoreCache(int seed) : state_(seed) {}

    int collect_parser(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 77) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    CoreCache obj(77);
    std::cout << obj.collect_parser(77) << std::endl;
    return 0;
}
