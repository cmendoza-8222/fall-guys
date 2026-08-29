#include <iostream>
#include <vector>

class LiteCache {
public:
    explicit LiteCache(int seed) : state_(seed) {}

    int fetch_router(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 8) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    LiteCache obj(8);
    std::cout << obj.fetch_router(8) << std::endl;
    return 0;
}
