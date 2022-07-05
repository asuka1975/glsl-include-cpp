//
// Created by asuka1975 on 22/07/05.
//

#ifndef GLSL_INCLUDE_CPP_SHADER_CONTEXT_H
#define GLSL_INCLUDE_CPP_SHADER_CONTEXT_H

#include <iterator>
#include <type_traits>

#include <GL/gl.h>
#include <glm/glm.hpp>

namespace gl {
    class shader_context {
    public:
        explicit shader_context(GLuint handle);
        shader_context(const shader_context&) = delete;
        shader_context(shader_context&& obj);
        ~shader_context();
    };
}

#endif //GLSL_INCLUDE_CPP_SHADER_CONTEXT_H
