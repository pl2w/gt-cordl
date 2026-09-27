#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXHierarchyAttributeMapBinder_Bone.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXHierarchyAttributeMapBinder_Bone_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "source", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sourceRadius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "target", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "targetRadius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone::VFXHierarchyAttributeMapBinder_Bone(::UnityW<::UnityEngine::Transform>  source, float_t  sourceRadius, ::UnityW<::UnityEngine::Transform>  target, float_t  targetRadius) noexcept  {
this->source = source;
this->sourceRadius = sourceRadius;
this->target = target;
this->targetRadius = targetRadius;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone::VFXHierarchyAttributeMapBinder_Bone()   {
}
