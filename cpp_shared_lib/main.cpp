#include <Instance.h>

int main() {
    IBase* b = Instance::get();
    b->foo();
    return 0;
}
