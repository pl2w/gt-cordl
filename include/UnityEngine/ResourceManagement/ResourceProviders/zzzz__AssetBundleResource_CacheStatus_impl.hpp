#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/AssetBundleResource_CacheStatus.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetBundleResource_CacheStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AssetBundleResource_CacheStatus::AssetBundleResource_CacheStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AssetBundleResource_CacheStatus::AssetBundleResource_CacheStatus()   {
}
constexpr ::GlobalNamespace::AssetBundleResource_CacheStatus  GlobalNamespace::AssetBundleResource_CacheStatus::Unknown{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AssetBundleResource_CacheStatus  GlobalNamespace::AssetBundleResource_CacheStatus::Cached{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AssetBundleResource_CacheStatus  GlobalNamespace::AssetBundleResource_CacheStatus::NotCached{static_cast<int32_t>(0x2)};
