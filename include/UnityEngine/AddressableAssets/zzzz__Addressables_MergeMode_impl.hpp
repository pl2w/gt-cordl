#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Addressables_MergeMode.hpp"
#include "UnityEngine/AddressableAssets/zzzz__Addressables_MergeMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Addressables_MergeMode::Addressables_MergeMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Addressables_MergeMode::Addressables_MergeMode()   {
}
constexpr ::GlobalNamespace::Addressables_MergeMode  GlobalNamespace::Addressables_MergeMode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Addressables_MergeMode  GlobalNamespace::Addressables_MergeMode::UseFirst{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Addressables_MergeMode  GlobalNamespace::Addressables_MergeMode::Union{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Addressables_MergeMode  GlobalNamespace::Addressables_MergeMode::Intersection{static_cast<int32_t>(0x2)};
