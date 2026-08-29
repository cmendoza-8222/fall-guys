#include <iostream>
#include <vector>

class LiteBuilder {
public:
    explicit LiteBuilder(int seed) : state_(seed) {}

    int run_router(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 31) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    LiteBuilder obj(31);
    std::cout << obj.run_router(31) << std::endl;
    return 0;
}
