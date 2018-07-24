/* This file is part of PyMesh. Copyright (c) 2015 by Qingnan Zhou */
#pragma once

#include <SelfIntersection/SelfIntersectionResolver.h>

namespace PyMesh {

class IGLSelfIntersectionResolver : public SelfIntersectionResolver {
    public:
        virtual ~IGLSelfIntersectionResolver() = default;

    public:
        virtual void run();
};

}
