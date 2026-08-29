#include <iostream>
#include <vector>

class SimpleContext {
public:
    explicit SimpleContext(int seed) : state_(seed) {}

    int parse_session(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 63) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    SimpleContext obj(63);
    std::cout << obj.parse_session(63) << std::endl;
    return 0;
}
