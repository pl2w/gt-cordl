#pragma once
// IWYU pragma private; include "GlobalNamespace/MatrixZonePair.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "GlobalNamespace/zzzz__MatrixZonePair_def.hpp"
// Ctor Parameters [CppParam { name: "matrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "zoneIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MatrixZonePair::MatrixZonePair(::UnityEngine::Matrix4x4  matrix, int32_t  zoneIndex) noexcept  {
this->matrix = matrix;
this->zoneIndex = zoneIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MatrixZonePair::MatrixZonePair()   {
}
