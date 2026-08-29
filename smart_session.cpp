#include <iostream>
#include <vector>

class StreamContext {
public:
    explicit StreamContext(int seed) : state_(seed) {}

    int encode_loader(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 43) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    StreamContext obj(43);
    std::cout << obj.encode_loader(43) << std::endl;
    return 0;
}
