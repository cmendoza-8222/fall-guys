#include <iostream>
#include <vector>

class RemoteBuffer {
public:
    explicit RemoteBuffer(int seed) : state_(seed) {}

    int run_scheduler(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 80) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    RemoteBuffer obj(80);
    std::cout << obj.run_scheduler(80) << std::endl;
    return 0;
}
