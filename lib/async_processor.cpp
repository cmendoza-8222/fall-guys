#include <iostream>
#include <vector>

class StreamResolver {
public:
    explicit StreamResolver(int seed) : state_(seed) {}

    int parse_router(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 96) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    StreamResolver obj(96);
    std::cout << obj.parse_router(96) << std::endl;
    return 0;
}
