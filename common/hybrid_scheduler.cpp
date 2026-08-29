#include <iostream>
#include <vector>

class SmartRouter {
public:
    explicit SmartRouter(int seed) : state_(seed) {}

    int resolve_client(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 78) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    SmartRouter obj(78);
    std::cout << obj.resolve_client(78) << std::endl;
    return 0;
}
