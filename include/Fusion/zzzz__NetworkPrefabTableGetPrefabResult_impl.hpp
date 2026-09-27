#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabTableGetPrefabResult.hpp"
#include "Fusion/zzzz__NetworkPrefabTableGetPrefabResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkPrefabTableGetPrefabResult::NetworkPrefabTableGetPrefabResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkPrefabTableGetPrefabResult::NetworkPrefabTableGetPrefabResult()   {
}
constexpr ::Fusion::NetworkPrefabTableGetPrefabResult  Fusion::NetworkPrefabTableGetPrefabResult::Success{static_cast<int32_t>(0x0)};
constexpr ::Fusion::NetworkPrefabTableGetPrefabResult  Fusion::NetworkPrefabTableGetPrefabResult::InProgress{static_cast<int32_t>(0x1)};
constexpr ::Fusion::NetworkPrefabTableGetPrefabResult  Fusion::NetworkPrefabTableGetPrefabResult::NotFound{static_cast<int32_t>(0x2)};
constexpr ::Fusion::NetworkPrefabTableGetPrefabResult  Fusion::NetworkPrefabTableGetPrefabResult::LoadError{static_cast<int32_t>(0x3)};
