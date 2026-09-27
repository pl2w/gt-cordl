#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/PoolManagerComponent_PoolDesc.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManagerComponent_PoolDesc_PoolType_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManagerComponent_PoolDesc_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManagerComponent_PoolDesc_PoolType_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManagerComponent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "poolType", ty: "::GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "primitive", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "callbackProviderOverride", ty: "::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PoolManagerComponent_PoolDesc::PoolManagerComponent_PoolDesc(::GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType  poolType, ::UnityW<::UnityEngine::GameObject>  primitive, int32_t  size, ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider>  callbackProviderOverride) noexcept  {
this->poolType = poolType;
this->primitive = primitive;
this->size = size;
this->callbackProviderOverride = callbackProviderOverride;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PoolManagerComponent_PoolDesc::PoolManagerComponent_PoolDesc()   {
}
