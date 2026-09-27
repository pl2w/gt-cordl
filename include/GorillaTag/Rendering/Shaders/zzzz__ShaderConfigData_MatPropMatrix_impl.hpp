#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/Shaders/ShaderConfigData_MatPropMatrix.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropMatrix_def.hpp"
// Ctor Parameters [CppParam { name: "matrixName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "matrixVal", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ShaderConfigData_MatPropMatrix::ShaderConfigData_MatPropMatrix(::StringW  matrixName, ::UnityEngine::Matrix4x4  matrixVal) noexcept  {
this->matrixName = matrixName;
this->matrixVal = matrixVal;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShaderConfigData_MatPropMatrix::ShaderConfigData_MatPropMatrix()   {
}
