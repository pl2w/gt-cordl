#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigEffectorData_Style.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigEffectorData_Style_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
// Ctor Parameters [CppParam { name: "shape", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "size", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RigEffectorData_Style::RigEffectorData_Style(::UnityW<::UnityEngine::Mesh>  shape, ::UnityEngine::Color  color, float_t  size, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  rotation) noexcept  {
this->shape = shape;
this->color = color;
this->size = size;
this->position = position;
this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigEffectorData_Style::RigEffectorData_Style()   {
}
