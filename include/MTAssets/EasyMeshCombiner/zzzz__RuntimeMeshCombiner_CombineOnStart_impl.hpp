#pragma once
// IWYU pragma private; include "MTAssets/EasyMeshCombiner/RuntimeMeshCombiner_CombineOnStart.hpp"
#include "MTAssets/EasyMeshCombiner/zzzz__RuntimeMeshCombiner_CombineOnStart_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart::RuntimeMeshCombiner_CombineOnStart(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart::RuntimeMeshCombiner_CombineOnStart()   {
}
constexpr ::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart  GlobalNamespace::RuntimeMeshCombiner_CombineOnStart::Disabled{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart  GlobalNamespace::RuntimeMeshCombiner_CombineOnStart::OnStart{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart  GlobalNamespace::RuntimeMeshCombiner_CombineOnStart::OnAwake{static_cast<int32_t>(0x2)};
