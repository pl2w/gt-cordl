#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughLayer_DeferredPassthroughMeshAddition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPassthroughLayer_DeferredPassthroughMeshAddition)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPassthroughLayer_DeferredPassthroughMeshAddition;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition, "", "OVRPassthroughLayer/DeferredPassthroughMeshAddition");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughLayer/DeferredPassthroughMeshAddition
struct CORDL_TYPE OVRPassthroughLayer_DeferredPassthroughMeshAddition {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPassthroughLayer_DeferredPassthroughMeshAddition() ;

// Ctor Parameters [CppParam { name: "gameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "updateTransform", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr OVRPassthroughLayer_DeferredPassthroughMeshAddition(::UnityW<::UnityEngine::GameObject>  gameObject, bool  updateTransform) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12025};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field gameObject, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field updateTransform, offset: 0x8, size: 0x1, def value: None
 bool  updateTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition, gameObject) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition, updateTransform) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
