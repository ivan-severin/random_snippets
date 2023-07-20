#pragma once

struct IBase {
    virtual void foo() = 0;

    virtual ~IBase() = default;
};
