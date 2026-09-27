#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTable_BoxCheckParams.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_BoxCheckParams_def.hpp"
// Ctor Parameters [CppParam { name: "center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "halfExtents", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderTable_BoxCheckParams::BuilderTable_BoxCheckParams(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  rotation) noexcept  {
this->center = center;
this->halfExtents = halfExtents;
this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderTable_BoxCheckParams::BuilderTable_BoxCheckParams()   {
}
