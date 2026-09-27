#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshGenerationContext_MeshFlags.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_MeshFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MeshGenerationContext_MeshFlags::MeshGenerationContext_MeshFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshGenerationContext_MeshFlags::MeshGenerationContext_MeshFlags()   {
}
constexpr ::GlobalNamespace::MeshGenerationContext_MeshFlags  GlobalNamespace::MeshGenerationContext_MeshFlags::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MeshGenerationContext_MeshFlags  GlobalNamespace::MeshGenerationContext_MeshFlags::SkipDynamicAtlas{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MeshGenerationContext_MeshFlags  GlobalNamespace::MeshGenerationContext_MeshFlags::IsUsingVectorImageGradients{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::MeshGenerationContext_MeshFlags  GlobalNamespace::MeshGenerationContext_MeshFlags::SliceTiled{static_cast<int32_t>(0x8)};
