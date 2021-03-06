/* This file is part of PyMesh. Copyright (c) 2018 by Qingnan Zhou */
#pragma once

#include <WindingNumber/WindingNumberEngine.h>

namespace PyMesh {

class FastWindingNumberEngine : public WindingNumberEngine {
    public:
        virtual ~FastWindingNumberEngine() = default;

    public:
        virtual VectorF run(const MatrixFr& queries);
};

}
