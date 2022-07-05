//
// Created by asuka1975 on 22/07/05.
//

#ifndef GLSL_INCLUDE_CPP_SHADER_H
#define GLSL_INCLUDE_CPP_SHADER_H

#include <string>

#include "shader_context.h"

namespace gl {
    class shader {
    public:
        shader();
        shader_context use();
        bool attach(const std::string& src, GLenum type);
        bool link();
    };
}

#endif //GLSL_INCLUDE_CPP_SHADER_H
