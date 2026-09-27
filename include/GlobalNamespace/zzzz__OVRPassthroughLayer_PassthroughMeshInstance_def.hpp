#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughLayer_PassthroughMeshInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPassthroughLayer_PassthroughMeshInstance)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPassthroughLayer_PassthroughMeshInstance;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance, "", "OVRPassthroughLayer/PassthroughMeshInstance");
// Dependencies UnityEngine.Matrix4x4
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughLayer/PassthroughMeshInstance
struct CORDL_TYPE OVRPassthroughLayer_PassthroughMeshInstance {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPassthroughLayer_PassthroughMeshInstance() ;

// Ctor Parameters [CppParam { name: "meshHandle", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceHandle", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "updateTransform", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "localToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }]
constexpr OVRPassthroughLayer_PassthroughMeshInstance(uint64_t  meshHandle, uint64_t  instanceHandle, bool  updateTransform, ::UnityEngine::Matrix4x4  localToWorld) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12023};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field meshHandle, offset: 0x0, size: 0x8, def value: None
 uint64_t  meshHandle;

/// @brief Field instanceHandle, offset: 0x8, size: 0x8, def value: None
 uint64_t  instanceHandle;

/// @brief Field updateTransform, offset: 0x10, size: 0x1, def value: None
 bool  updateTransform;

/// @brief Field localToWorld, offset: 0x14, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  localToWorld;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance, meshHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance, instanceHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance, updateTransform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance, localToWorld) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
