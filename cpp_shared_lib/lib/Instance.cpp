#include "include/Instance.h"
#include "Derivative.h"

#include <memory>

IBase* Instance::get() {
    static auto sIntance = std::make_unique<Derivative>();
    return sIntance.get();
}
