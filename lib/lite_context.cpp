#include <iostream>
#include <vector>

class RemoteHandler {
public:
    explicit RemoteHandler(int seed) : state_(seed) {}

    int fetch_context(int count) {
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
    RemoteHandler obj(32);
    std::cout << obj.fetch_context(32) << std::endl;
    return 0;
}
