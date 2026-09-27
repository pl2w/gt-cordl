#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/PoolManagerComponent_PoolDesc_PoolType.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManagerComponent_PoolDesc_PoolType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType::PoolDesc_PoolManagerComponent_PoolType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType::PoolDesc_PoolManagerComponent_PoolType()   {
}
constexpr ::GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType  GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType::CIRCULAR{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType  GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType::FIXED{static_cast<int32_t>(0x1)};
