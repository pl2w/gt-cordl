#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/PoolManagerComponent_PoolDesc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManagerComponent_PoolDesc_PoolType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PoolManagerComponent_PoolDesc)
namespace GlobalNamespace {
struct PoolDesc_PoolManagerComponent_PoolType;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class PoolManagerComponent_CallbackProvider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct PoolManagerComponent_PoolDesc;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PoolManagerComponent_PoolDesc);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PoolManagerComponent_PoolDesc, "Meta.XR.MRUtilityKit.SceneDecorator", "PoolManagerComponent/PoolDesc");
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerComponent::PoolDesc::PoolType
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerComponent/PoolDesc
struct CORDL_TYPE PoolManagerComponent_PoolDesc {
public:
// Declarations
using PoolType = ::GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType;

// Ctor Parameters []
// @brief default ctor
constexpr PoolManagerComponent_PoolDesc() ;

// Ctor Parameters [CppParam { name: "poolType", ty: "::GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType", modifiers: "", def_value: None, comment: None }, CppParam { name: "primitive", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "callbackProviderOverride", ty: "::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider>", modifiers: "", def_value: None, comment: None }]
constexpr PoolManagerComponent_PoolDesc(::GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType  poolType, ::UnityW<::UnityEngine::GameObject>  primitive, int32_t  size, ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider>  callbackProviderOverride) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25961};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field poolType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PoolDesc_PoolManagerComponent_PoolType  poolType;

/// @brief Field primitive, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  primitive;

/// @brief Field size, offset: 0x10, size: 0x4, def value: None
 int32_t  size;

/// @brief Field callbackProviderOverride, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider>  callbackProviderOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PoolManagerComponent_PoolDesc, poolType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PoolManagerComponent_PoolDesc, primitive) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PoolManagerComponent_PoolDesc, size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PoolManagerComponent_PoolDesc, callbackProviderOverride) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PoolManagerComponent_PoolDesc) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
