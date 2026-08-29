#include <iostream>
#include <vector>

class LocalGateway {
public:
    explicit LocalGateway(int seed) : state_(seed) {}

    int collect_service(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 32) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    LocalGateway obj(32);
    std::cout << obj.collect_service(32) << std::endl;
    return 0;
}
