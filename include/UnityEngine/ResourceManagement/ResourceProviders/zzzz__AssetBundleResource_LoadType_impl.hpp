#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/AssetBundleResource_LoadType.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetBundleResource_LoadType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AssetBundleResource_LoadType::AssetBundleResource_LoadType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AssetBundleResource_LoadType::AssetBundleResource_LoadType()   {
}
constexpr ::GlobalNamespace::AssetBundleResource_LoadType  GlobalNamespace::AssetBundleResource_LoadType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AssetBundleResource_LoadType  GlobalNamespace::AssetBundleResource_LoadType::Local{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AssetBundleResource_LoadType  GlobalNamespace::AssetBundleResource_LoadType::Web{static_cast<int32_t>(0x2)};
